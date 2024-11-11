#
# author: Rezvee Rahman
# date:   11/07/2024
#
# description: This Cmake is for the signal handler project
#

# CMake requirements
cmake_minimum_required(VERSION 3.13...3.30.5)

project(SIGNAL_HANDLER
        VERSION 1.0.0.0)

add_library(signales STATIC
                lib/signal_func.c
                lib/signal_func.h)
add_executable(main src/main.c)

# Combine the library and the executable files
target_link_libraries(main signales)

