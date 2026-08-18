
cmake_minimum_required(VERSION 3.28)
project(MyProject LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(albatros ./src/main.cpp)
#target_sources(albatros PRIVATE functions.cpp utils.cpp)