cmake_minimum_required(VERSION 3.8)
project(Function)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp Utility.cpp Utility.h)
add_executable(Function ${SOURCE_FILES})