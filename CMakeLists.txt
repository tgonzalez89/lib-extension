cmake_minimum_required(VERSION 3.12)

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
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)

install(TARGETS mylib-e
  EXPORT mylib-e-config
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/include/ DESTINATION include)
export(TARGETS mylib-e
  FILE "${CMAKE_CURRENT_BINARY_DIR}/mylib-e-config.cmake"
)
install(EXPORT mylib-e-config
  DESTINATION cmake
)
