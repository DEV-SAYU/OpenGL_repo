cmake_minimum_required(VERSION 3.12)
project(MyProject)

# Set C++ standard to C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add the source files
add_executable(MyProject src/main.cpp)
