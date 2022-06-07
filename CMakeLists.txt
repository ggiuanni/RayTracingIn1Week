cmake_minimum_required(VERSION 3.18)
project(rt1w)

add_subdirectory(src/utils)

add_subdirectory(src/vec3)
target_link_libraries(vec3 PUBLIC utils)

add_subdirectory(src/color)
target_link_libraries(color PUBLIC vec3) 

add_subdirectory(src/ray)
target_link_libraries(ray PUBLIC vec3)

add_subdirectory(src/camera)
target_link_libraries(camera PUBLIC vec3)
target_link_libraries(camera PUBLIC ray)

add_subdirectory(src/hittable)
target_link_libraries(sphere PUBLIC ray)
target_link_libraries(hittable_list PUBLIC ray)

add_executable(main
src/main.cpp)

target_link_libraries(main PRIVATE utils)
target_link_libraries(main PRIVATE color)
target_link_libraries(main PRIVATE sphere)
target_link_libraries(main PRIVATE hittable_list)
target_link_libraries(main PRIVATE ray)
target_link_libraries(main PRIVATE vec3)
target_link_libraries(main PRIVATE camera)