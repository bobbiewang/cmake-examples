cmake_minimum_required(VERSION 3.18)

project(math_functions)

add_library(math_functions SHARED math_functions.cpp)

target_include_directories(math_functions
  PUBLIC "../include"
  PRIVATE ".")

target_compile_definitions(math_functions
  PUBLIC MATH_FUNCTIONS_API=)
