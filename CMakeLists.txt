cmake_minimum_required(VERSION 3.16)

set(PROJECT_NAME sfml_test)
project("${PROJECT_NAME}")

set(CMAKE_CXX_STANDARD 17)			
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)



add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE sfml-graphics sfml-audio sfml-window sfml-system)