#!/usr/bin/env bash

rm -rf build install

cmake -S . -B build \
-DSHARED_LIB=OFF \
-DCMAKE_INSTALL_PREFIX=install

cmake --build build -j
cmake --install build
