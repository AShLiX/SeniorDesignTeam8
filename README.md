# SeniorDesignTeam8

Senior Design Project - Drone Autoflight Implementation

This project implements an automation system for a drone that enables it to automatically take off, detect and track an object in flight, and land. The project employs the PixyCam2, a compact vision sensor that uses color-based object recognition to identify and track objects, for object detection. The PixyCam2 is mounted on the drone and transmits data to the onboard RaspberryPi, which processes the data and generates control commands to adjust the flight path of the drone in real time.

Using the PX4 flight controller, a custom system was developed to control the drone's flight path. The PX4 flight controller is an open-source autopilot system that offers a dependable and modifiable platform for controlling the flight parameters of the drone. The system was designed to receive data from the PixyCam2 and adjust the position, altitude, and velocity of the drone accordingly.


# Quick Start Guide

Preperation: Raspberry Pi 3B+, Hovergames Drone Kit, PixyCam2, a laptop

Install Mavlink C++ library and PixyCam C++ library on Raspberry Pi, build the program through cmake.

SSH to the raspberry Pi through the laptop to run the program.
