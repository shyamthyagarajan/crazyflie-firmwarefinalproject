# AE483 Final Project: Modernization and Simplification of Crazyflie Build System

This repository is forked from the main Crazyflie Firmware Github source code and is a work in progress project that would allow for building with CMake. Currently, the user can run the standard CMake commands by doing the following in the main directory of the terminal:
```
mkdir build
cd build
cmake ..
```
The errors regarding the KBuild system when configuring the Makefile from the generated CMake files occurs when running the make command, so currently, this issue still needs to be resolved.<br>
In addition, the repository has been reduced from an original overall size of 17.6478 MB to a smaller size of 11.8618.

# Original Crazyflie Firmware README

The original Crazyflie Firmware README, from which this project is forked, is linked [here](https://github.com/tbretl/crazyflie-firmware/blob/master/README.md)

# CMake Installation in Ubuntu

To install CMake in Ubuntu, run the following in an Ubuntu terminal:
```
sudo apt install cmake
```

