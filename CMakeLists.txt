cmake_minimum_required(VERSION 3.0.0)
project(Chip8 VERSION 0.1.0)

set (TARGET Chip8)

set(CMAKE_CXX_STANDARD 17)

include(CTest)
enable_testing()

add_executable(Chip8 main.cpp)

#add_library(${TARGET} ${SOURCES} ${HEADERS})

target_include_directories(${TARGET} PRIVATE ${CMAKE_SOURCE_DIR}/src)

set(SOURCES
    chip8.cpp
    menu.cpp
)

set(HEADERS
    chip8.h
)



set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
