cmake_minimum_required(VERSION 3.5)
project(calculator C)

include_directories(include)

add_subdirectory(src)

enable_testing()

add_test(t1 src/calculator add 2 3)
add_test(t2 src/calculator sub 3 -2)
add_test(t3 src/calculator mul 5 5)
add_test(t4 src/calculator div 1 5)
add_test(t5 src/calculator car 5)
