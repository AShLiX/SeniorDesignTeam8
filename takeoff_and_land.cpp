//
// Simple example to demonstrate how takeoff and land using MAVSDK.
//

#include <chrono>
#include <cstdint>
#include <mavsdk/mavsdk.h>
#include <mavsdk/plugins/action/action.h>
#include <mavsdk/plugins/telemetry/telemetry.h>
#include <iostream>
#include <future>
#include <memory>
#include <thread>

//pixy includes
//#include "/home/team8/Downloads/pixy2-master/src/host/libpixyusb2_examples/get_blocks_cpp_demo/get_blocks_module.h"
//#include "/home/team8/Downloads/pixy2-master/src/host/libpixyusb2/include/libpixyusb2.h"
#include "libpixyusb2.h"
#include <signal.h>

using namespace mavsdk;
using std::chrono::seconds;
using std::this_thread::sleep_for;

void usage(const std::string& bin_name)
{
    std::cerr << "Usage : " << bin_name << " <connection_url>\n"
              << "Connection URL format should be :\n"
              << " For TCP : tcp://[server_host][:server_port]\n"
              << " For UDP : udp://[bind_host][:bind_port]\n"
              << " For Serial : serial:///path/to/serial/dev[:baudrate]\n"
              << "For example, to connect to the simulator use URL: udp://:14540\n";
}

std::shared_ptr<System> get_system(Mavsdk& mavsdk)
{
    std::cout << "Waiting to discover system...\n";
    auto prom = std::promise<std::shared_ptr<System>>{};
    auto fut = prom.get_future();

    // We wait for new systems to be discovered, once we find one that has an
    // autopilot, we decide to use it.
    mavsdk.subscribe_on_new_system([&mavsdk, &prom]() {
        auto system = mavsdk.systems().back();

        if (system->has_autopilot()) {
            std::cout << "Discovered autopilot\n";

            // Unsubscribe again as we only want to find one system.
            mavsdk.subscribe_on_new_system(nullptr);
            prom.set_value(system);
        }
    });

    // We usually receive heartbeats at 1Hz, therefore we should find a
    // system after around 3 seconds max, surely.
    if (fut.wait_for(seconds(3)) == std::future_status::timeout) {
        std::cerr << "No autopilot found.\n";
        return {};
    }

    // Get discovered system now.
    return fut.get();
}


//pixy
Pixy2        pixy1;
static bool  run_flag = true;

struct pixy_block{
  uint16_t x_axis;
  uint16_t y_axis;
  uint16_t height;
  uint16_t width;
  uint16_t sig;  
};

void handle_SIGINT(int unused)
{
  // On CTRL+C - abort! //

  run_flag = false;
}

void pixy_init(){
  int  Result;

  // Catch CTRL+C (SIGINT) signals //
  signal (SIGINT, handle_SIGINT);

  printf ("=============================================================\n");
  printf ("= PIXY2 Get Blocks Demo                                     =\n");
  printf ("=============================================================\n");

  printf ("Connecting to Pixy2...");

  // Initialize Pixy2 Connection //
  {
    Result = pixy1.init();

    if (Result < 0)
    {
      printf ("Error\n");
      printf ("pixy.init() returned %d\n", Result);
      return;
    }

    printf ("Success\n");
  }

  // Get Pixy2 Version information //
  {
    Result = pixy1.getVersion();

    if (Result < 0)
    {
      printf ("pixy.getVersion() returned %d\n", Result);
      return;
    }

    pixy1.version->print();
  }

  // Set Pixy2 to color connected components program //
  pixy1.changeProg("color_connected_components");
}

struct pixy_block get_blocks()
{
  int  Block_Index;
  
  // Query Pixy for blocks //
  pixy1.ccc.getBlocks();
  pixy_block block_data[pixy1.ccc.numBlocks];

  // Were blocks detected? //
  if (pixy1.ccc.numBlocks)
  {
    // Blocks detected - print them! //

    printf ("Detected %d block(s)\n", pixy1.ccc.numBlocks);

    for (Block_Index = 0; Block_Index < pixy1.ccc.numBlocks; ++Block_Index)
    {
      printf ("  Block %d: ", Block_Index + 1);
      // pixy.ccc.blocks[Block_Index].print();
      //block_data.x_axis = pixy.ccc.blocks[Block_Index].m_x;
      //block_data.y_axis = pixy.ccc.blocks[Block_Index].m_y;
      //block_data.height = pixy.ccc.blocks[Block_Index].m_height;
      //block_data.width = pixy.ccc.blocks[Block_Index].m_width;
      //block_data.sig = pixy.ccc.blocks[Block_Index].m_signature;  
      printf ("load block_data");
    }
  }
  return block_data[0];
}


int main(int argc, char** argv)
{
    if (argc != 1) {
        usage(argv[0]);
        return 1;
    }

    Mavsdk mavsdk;
    ConnectionResult connection_result = mavsdk.add_any_connection("serial:///dev/serial/by-id/usb-NXP_SEMICONDUCTORS_PX4_FMUK66_E_0-if00:9600");

    if (connection_result != ConnectionResult::Success) {
        std::cerr << "Connection failed: " << connection_result << '\n';
        return 1;
    }

    auto system = get_system(mavsdk);
    if (!system) {
        return 1;
    }

    // Instantiate plugins.
    auto telemetry = Telemetry{system};
    auto action = Action{system};

    // We want to listen to the altitude of the drone at 1 Hz.
    const auto set_rate_result = telemetry.set_rate_position(1.0);
    if (set_rate_result != Telemetry::Result::Success) {
        std::cerr << "Setting rate failed: " << set_rate_result << '\n';
        return 1;
    }

    // Set up callback to monitor altitude while the vehicle is in flight
    telemetry.subscribe_position([](Telemetry::Position position) {
        std::cout << "Altitude: " << position.relative_altitude_m << " m\n";
    });

    // Check until vehicle is ready to arm
    while (telemetry.health_all_ok() != true) {
        std::cout << "Vehicle is getting ready to arm\n";
        sleep_for(seconds(1));
    }

    // Arm vehicle
    std::cout << "Arming...\n";
    const Action::Result arm_result = action.arm();

    if (arm_result != Action::Result::Success) {
        std::cerr << "Arming failed: " << arm_result << '\n';
        return 1;
    }

    // Take off
    std::cout << "Taking off...\n";
    const Action::Result takeoff_result = action.takeoff();
    if (takeoff_result != Action::Result::Success) {
        std::cerr << "Takeoff failed: " << takeoff_result << '\n';
        return 1;
    }

    // Let it hover for a bit before landing again.
    sleep_for(seconds(10));
    
    //pixy
    pixy_init();
   pixy_block base_data = get_blocks();

    while(1)
    {
      pixy_block data = get_blocks();
      int x_moved = data.x_axis - base_data.x_axis;
      int y_moved = data.y_axis - base_data.y_axis;
      if (x_moved > 0){
        printf("moving foward\t");
      }else{
        printf("moving back\t");
      }
      if (y_moved > 0){
        printf("moving right\n");
      } else{
        printf("moving left\n");
      }
    
      if (run_flag == false)
      {
        // Exit program loop //
        break;
      }
    }

    std::cout << "Landing...\n";
    const Action::Result land_result = action.land();
    if (land_result != Action::Result::Success) {
        std::cerr << "Land failed: " << land_result << '\n';
        return 1;
    }

    // Check if vehicle is still in air
    while (telemetry.in_air()) {
        std::cout << "Vehicle is landing...\n";
        sleep_for(seconds(1));
    }
    std::cout << "Landed!\n";

    // We are relying on auto-disarming but let's keep watching the telemetry for a bit longer.
    sleep_for(seconds(3));
    std::cout << "Finished...\n";

    return 0;
}
