cmake_minimum_required(VERSION 3.1)

# googletest
include(${PROJECT_SOURCE_DIR}/cmake/DownloadProject/DownloadProject.cmake)
download_project(
  PROJ googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG master
  UPDATE_DISCONNECTED 1
)
add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR})
include_directories(${googletest_SOURCE_DIR}/include/)
link_directories(${googletest_SOURCE_DIR}/build/)

# set runtime directory
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})

# Include files and Library directory
include_directories(${PROJECT_SOURCE_DIR}/include/)

# Generate executable file
add_executable(Test ${CMAKE_CURRENT_SOURCE_DIR}/test_mazedata.cc)

# Link libraries
target_link_libraries(Test gtest gtest_main)

