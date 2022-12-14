# AE483 Final Project: Modernization and Simplification of Crazyflie Build System

This repository is forked from the main Crazyflie Firmware Github source code and is a work in progress project that would allow for building with CMake. Currently, the user can run the standard CMake commands by doing the following in the main directory of the terminal:
```
mkdir build
cd build
cmake ..
```
The errors regarding the KBuild system when configuring the Makefile from the generated CMake files occurs when running the make command, so currently, this issue still needs to be resolved.<br>
In addition, the repository has been reduced from an original overall size of 17.6478 MB to a smaller size of 11.8618. Tje goal of this forked repository is to maintain a simple drone flight when flashing the code, so files were evaluated to be deleted or kept from the original repository while allowing for a simple flight.

# Original Crazyflie Firmware README

The original Crazyflie Firmware README, from which this project is forked, is linked [here.](https://github.com/tbretl/crazyflie-firmware/blob/master/README.md)

# CMake Installation in Ubuntu

To install CMake in Ubuntu, run the following in an Ubuntu terminal:
```
sudo apt install cmake
```
If further issues persist, please visit the following link for setting up CMake [here.](https://cmake.org/install/)

# Video Presentation

Here is the link to the video presentation for this project [here.](https://mediaspace.illinois.edu/media/t/1_z5m2tbaz)
# Finalized List of Folders
Many text files were removed as a simple drone flight would not be dependent on these. Test files were also evaluated as unnecessary for the purposes of flashing code that would allow for a simple drone flight. DOxygen was also utilized to determine a file's necessity or lack thereof, and the link to the DOxygen evaluation zip file is [here.](https://drive.google.com/drive/folders/1Cm2KlRedvo6F18QGsg6Stjh48T2JeX4x?usp=sharing)

* This list consists of the files/folders in the main directory that were not removed or altered for the purposes of this project.
    * .github
    * .vscode
    * app_api
    * bindings
    * configs
    * generated/test
    * include/
    * src
    * vendor
    * .gitattributes
    * .gitignore
    * .gitmodules
    * Kconfig
    * LICENSE.txt
    * Makefile
    * Rakefile
    * module.json

* This list consists of the files/folders in the original main directory that were removed or partially removed.
    * bin
    * docs
    * examples
    * test
    * test_python
    * tools
    * RELEASE_CHECKLIST.md

* This list consists of the files that were added/altered to this repository.
    * CMakeLists.txt
    * src/CMakeLists.txt
    * README.md
