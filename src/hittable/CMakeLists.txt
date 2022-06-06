add_library(sphere
sphere.cpp)

add_library(hittable_list
hittable_list.cpp)

target_include_directories(sphere PUBLIC includes)
target_include_directories(hittable_list PUBLIC includes)