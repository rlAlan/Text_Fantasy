#!/usr/bin/bash


cd ..; cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=1 -B out/build/; cd out/build/;
make; ./text_fantasy

exit 0

