cmake_minimum_required(VERSION 3.18)
project(rt1w)

add_subdirectory(src/vec3)

add_subdirectory(src/ray)
target_link_libraries(ray PUBLIC vec3) 

add_subdirectory(src/sphere)
target_link_libraries(sphere PUBLIC ray)

add_executable(main
src/main.cpp)

target_link_libraries(main PRIVATE ray)
target_link_libraries(main PRIVATE vec3)