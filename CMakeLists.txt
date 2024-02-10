cmake_minimum_required(VERSION 3.22.1)
project(parallel)

set(CMAKE_CXX_STANDARD 17)

option(USE_DOUBLE OFF)

if(USE_DOUBLE)
    add_executable(parallel main.cpp)
    target_compile_definitions(parallel PRIVATE YOUR_TYPE=double)
else()
    add_executable(parallel main.cpp)
    target_compile_definitions(parallel PRIVATE YOUR_TYPE=float)
endif()
