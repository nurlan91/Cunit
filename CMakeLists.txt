cmake_minimum_required(VERSION 3.0)

project(nurlan LANGUAGES C)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall -Wextra")

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})

file(GLOB SOURCES main.c )
#file(GLOB CUnitSource cunit.c)

add_executable(${PROJECT_NAME} ${SOURCES})

add_executable(nuni cunit.c)
target_link_libraries(nuni cunit)
enable_testing()
add_test(NAME nuni1 COMMAND $<TARGET_FILE:nuni>)






