cmake_minimum_required(VERSION 3.8)
project(crown_all)

set(CMAKE_CXX_STANDARD 14)

include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${PROJECT_SOURCE_DIR})

add_subdirectory(examples)