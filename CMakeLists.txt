cmake_minimum_required(VERSION 3.23)
project(lab_2)

set(CMAKE_CXX_STANDARD 20)

add_library(
        Number
        Number.h
        Number.cpp
)

include(GenerateExportHeader)
add_library(Vector SHARED Vector.cpp Vector.h)
generate_export_header(Vector)
target_include_directories(Vector PUBLIC ${PROJECT_BINARY_DIR} ${PROJECT_SOURCE_DIR})
add_executable(lab_2 main.cpp)

target_link_libraries(lab_2 PRIVATE Number)
target_link_libraries(lab_2 PRIVATE Vector)
