cmake_minimum_required (VERSION 3.2)

project (serial_queue)

add_executable(serial_queue
               serial_queue/main.cpp
               stlab/stlab/concurrency/serial_queue.hpp)

