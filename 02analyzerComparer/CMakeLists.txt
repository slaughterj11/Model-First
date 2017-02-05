cmake_minimum_required(VERSION 3.6)
project(02modelFirst_codeSecond)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp Analyst.cpp Analyst.h Functions.cpp Functions.h)
add_executable(02modelFirst_codeSecond ${SOURCE_FILES})