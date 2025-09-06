#!/bin/bash
echo "[GTPS] Building server..."
g++ main.cpp -o gtps -pthread
echo "[GTPS] Starting server..."
./gtps
