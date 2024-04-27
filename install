#!/bin/bash

gcc -c src/xmem.c -o xmem.o
ar rcs libxmem.a xmem.o
sudo mv libxmem.a /usr/local/lib/
sudo ldconfig
sudo cp src/xmem.h /usr/local/include/

