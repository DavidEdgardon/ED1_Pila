cmake_minimum_required(VERSION 3.7)
project(ED1Pila)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Stack.cpp Stack.h)
add_executable(ED1Pila ${SOURCE_FILES})