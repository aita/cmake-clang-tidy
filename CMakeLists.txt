cmake_minimum_required(VERSION 3.10)

project(hello CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_CLANG_TIDY "clang-tidy;-warnings-as-errors;-fix;-fix-errors;")

add_executable(hello main.cc)
