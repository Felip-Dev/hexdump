#!/bin/bash

SOURCES="hexdump.c logging.c"
NAME="hexdump.exe"

gcc $SOURCES -O2 -o $NAME