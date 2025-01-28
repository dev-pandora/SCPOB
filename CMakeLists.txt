cmake_minimum_required(VERSION 3.0)


project(SCPOB)
set(VS_STARTUP_PROJECT ${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 20)


option(DEVELOPER "Enables developer build, enables console" OFF)

#set the subsystem based on the developer edition state
if (DEVELOPER)
	set(SUBSYSTEM_TYPE "CONSOLE")
else()
	set(SUBSYSTEM_TYPE "WINDOWS")
endif()

# add all subdirectories of the project, make sure to copy resources to build eventually too


add_subdirectory("src")

