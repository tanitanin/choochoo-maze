cmake_minimum_required(VERSION 3.1)

# Include files and Library directory
include_directories(${PROJECT_SOURCE_DIR}/include/)

# Generate static library
add_library(${PROJECT_NAME} STATIC
    mazedata.cc
)
