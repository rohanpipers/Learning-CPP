cmake_minimum_required(VERSION 3.25)

project(Learning-CPP)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(source_dir ${PROJECT_SOURCE_DIR})

file(GLOB source_files "${source_dir}/*.cpp")

add_executable(Learning ${source_files})