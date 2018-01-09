#include <iostream>

#include <stlab/concurrency/serial_queue.hpp>
#include <stlab/concurrency/default_executor.hpp>

using namespace std;
using namespace stlab;

void serial_queue_example() {
    serial_queue_t(default_executor).executor()([]{
        cout << "Hello, world!\n";
    });
}
