cmake_minimum_required(VERSION 3.0.0)
project(vector2d VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(vector2d my_geom.cpp
                        vector2d.h
                        vector2d.cpp
                )

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
