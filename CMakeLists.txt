cmake_minimum_required(VERSION 3.10)
project(midi C)

add_library(midi midi.c)
add_executable(mc mc.c)
target_link_libraries(mc midi)