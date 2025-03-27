cmake_minimum_required(VERSION 3.31.0)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(TARGET_LIBRARY_NAME "yellow")
add_library(${TARGET_LIBRARY_NAME})
target_sources(
        ${TARGET_LIBRARY_NAME}
        PRIVATE
        PUBLIC
        FILE_SET modules
        TYPE CXX_MODULES
        BASE_DIRS "modules"
        FILES
        "modules/Yellow.ixx"
        "modules/Float.ixx"
)

set(TARGET_NAME "playground")
add_executable(${TARGET_NAME})
target_sources(${TARGET_NAME} PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/main.cpp")
