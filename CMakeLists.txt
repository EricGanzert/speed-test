cmake_minimum_required( VERSION 3.13 )

set(targetName test_speed)
project(${targetName} CXX)

set_property( GLOBAL PROPERTY GLOBAL_DEPENDS_NO_CYCLES ON )
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_compile_options(
    -Wall
    -Wextra
    -Werror
    -Wno-switch
    -Wno-switch-enum
)

add_executable(${targetName} main.cpp)