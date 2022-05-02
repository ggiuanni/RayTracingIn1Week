cmake_minimum_required(VERSION 3.18)
project(rt1w)

add_subdirectory(src/vec3)

add_executable(main
src/main.cpp)

target_include_directories(main PRIVATE vec3/includes)
target_link_libraries(main PRIVATE vec3)