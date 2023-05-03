# SeniorDesignTeam8

Senior Design Project - Drone Autoflight Implementation

This project implements an automation system for a drone that enables it to automatically take off, detect and track an object in flight, and land. The project employs the PixyCam2, a compact vision sensor that uses color-based object recognition to identify and track objects, for object detection. The PixyCam2 is mounted on the drone and transmits data to the onboard RaspberryPi, which processes the data and generates control commands to adjust the flight path of the drone in real time.

Using the PX4 flight controller, a custom system was developed to control the drone's flight path. The PX4 flight controller is an open-source autopilot system that offers a dependable and modifiable platform for controlling the flight parameters of the drone. The system was designed to receive data from the PixyCam2 and adjust the position, altitude, and velocity of the drone accordingly.

Our drone products do not require the controller or control software recommended by HoverGames Drone Kit such as remote control or QGroundControl. We can write our own drone code through the MavSDK library, which supports c++ and python.

## MAVSDK

MAVSDK is a collection of libraries for various programming languages to interface with MAVLink systems such as drones, cameras or ground systems.

The libraries provides a simple API for managing one or more vehicles, providing programmatic access to vehicle information and telemetry, and control over missions, movement and other operations.

The libraries can be used onboard a drone on a companion computer or on the ground for a ground station or mobile device.

MAVSDK is cross-platform: Linux, macOS, Windows, Android and iOS.

### MAVSDK c++ API Overview

Mavsdk is the main library class. API consumers use Mavsdk to discover and access vehicles (System objects), which in turn provide access to all other drone information and control objects (e.g. Telemetry, Mission etc.).

The most important classes are:

[Mavsdk](https://mavsdk.mavlink.io/main/en/cpp/api_reference/classmavsdk_1_1_mavsdk.html): Discover and connect to vehicles (System).
[System](https://mavsdk.mavlink.io/main/en/cpp/api_reference/classmavsdk_1_1_system.html): Represents a connected vehicle (e.g. a copter or VTOL drone). It provides access to vehicle information and control through the classes listed below.
[Info](https://mavsdk.mavlink.io/main/en/cpp/api_reference/classmavsdk_1_1_info.html): Basic version information about the hardware and/or software of a system.
[Telemetry](https://mavsdk.mavlink.io/main/en/cpp/api_reference/classmavsdk_1_1_telemetry.html): Get vehicle telemetry and state information and set telemetry update rates.
[Action](https://mavsdk.mavlink.io/main/en/cpp/api_reference/classmavsdk_1_1_action.html): Simple drone actions including arming, taking off, and landing.
[Mission](https://mavsdk.mavlink.io/main/en/cpp/api_reference/classmavsdk_1_1_mission.html): Waypoint mission creation and upload/download. Missions are created from MissionItem objects.
[Offboard](https://mavsdk.mavlink.io/main/en/cpp/api_reference/classmavsdk_1_1_offboard.html): Control a drone with velocity commands.
[Geofence](https://mavsdk.mavlink.io/main/en/cpp/api_reference/classmavsdk_1_1_geofence.html): Specify a geofence.
[Gimbal](https://mavsdk.mavlink.io/main/en/cpp/api_reference/classmavsdk_1_1_gimbal.html): Control a gimbal.
[Camera](https://mavsdk.mavlink.io/main/en/cpp/api_reference/classmavsdk_1_1_camera.html): Control a camera.
[FollowMe](https://mavsdk.mavlink.io/main/en/cpp/api_reference/classmavsdk_1_1_followme.html): Drone tracks a position supplied by the SDK.
[Calibration](https://mavsdk.mavlink.io/main/en/cpp/api_reference/classmavsdk_1_1_calibration.html): Calibrate sensors (e.g.: gyro, accelerometer, and magnetometer).
[LogFiles](https://mavsdk.mavlink.io/main/en/cpp/api_reference/classmavsdk_1_1_logfiles.html): Download log files from the vehicle.
In addition, "Server Plugins" can be used to implement vehicle-side MAVLink functionality. The might be used to expose a MAVLink interface from non-MAVLink autopilots or components.

The following APIs provide more direct access to underlying MAVLink messages/types. They should only be used where features are missing from the main APIs above.

Param: Raw access to get and set parameters.
MissionRaw: Direct access to MAVLink mission items.
MavlinkPassthrough: Provides full/direct MAVLink access

# Quick Start Guide

Preperation: Raspberry Pi 3B+, Hovergames Drone Kit, PixyCam2, a laptop

Install Mavlink C++ library and PixyCam C++ library on Raspberry Pi, build the program through cmake.

SSH to the raspberry Pi through the laptop to run the program.
