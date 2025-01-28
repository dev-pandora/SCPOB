message(STATUS "Generating executable...")
include(FetchContent)

set(SRC_DIR "${CMAKE_SOURCE_DIR}/src")

file(GLOB_RECURSE SRC_FILES "${SRC_DIR}/*.cpp" "${SRC_DIR}/*.h")

add_executable(${PROJECT_NAME} ${SRC_FILES})

FetchContent_Declare(
    SDL3
    GIT_REPOSITORY https://github.com/libsdl-org/SDL.git
    GIT_TAG release-3.2.0 # Use a specific tag or branch
)
FetchContent_MakeAvailable(SDL3)

target_link_libraries(${PROJECT_NAME} SDL3::SDL3)