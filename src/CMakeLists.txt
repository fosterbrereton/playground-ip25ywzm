cmake_minimum_required (VERSION 3.2)

project (serial_queue_example)

include_directories(after stlab)

add_executable(serial_queue_example
               serial_queue/main.cpp
               serial_queue/serial_queue_example.cpp)

set(CMAKE_THREAD_PREFER_PTHREAD TRUE)

find_package(Threads)

# add_subdirectory(stlab)

set( stlab_base_flags "-Wall;-ftemplate-backtrace-limit=0;" )
set( stlab_debug_flags "-gdwarf-3;" )
set( stlab_interface_flags "-std=c++14;")

target_compile_options( serial_queue_example
                        PUBLIC ${stlab_base_flags}
                               ${stlab_debug_flags}
                               ${stlab_interface_flags} )

set_property(GLOBAL PROPERTY CXX_STANDARD 14)
set_property(GLOBAL PROPERTY CXX_STANDARD_REQUIRED ON)
