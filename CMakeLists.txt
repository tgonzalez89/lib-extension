cmake_minimum_required(VERSION 3.5)

project(mylib-e)

option(SHARED_LIB "Generate a shared library" OFF)
message(STATUS "SHARED_LIB: ${SHARED_LIB}")

if (SHARED_LIB)
  add_library(mylib-e SHARED
      src/mylib-e.cpp
  )
else()
  add_library(mylib-e STATIC
      src/mylib-e.cpp
  )
endif()

target_include_directories(mylib-e
    PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)
