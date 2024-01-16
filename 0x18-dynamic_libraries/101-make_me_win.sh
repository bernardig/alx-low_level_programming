#!/bin/bash
wget -P .. https://github.com/bernardig/alx-low_level_programming/master/0x18-dynamic_libraries/libmask.so
export LD_PRELOAD="$PWD/../libmask.so"
