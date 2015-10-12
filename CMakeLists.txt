cmake_minimum_required(VERSION 3.3)
project(tic-tac-toe)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp kontroler.cpp kontroler.h)
add_executable(tic-tac-toe ${SOURCE_FILES})