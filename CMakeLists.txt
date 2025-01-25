cmake_minimum_required(VERSION 3.31.4)
include(include(FetchContent))

project(SCPOB)
set(VS_STARTUP_PROJECT ${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 20)

# add all subdirectories of the project, make sure to copy resources to build eventually too
add_subdirectory(("src"))

