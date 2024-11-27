#include <iostream>

int main() {
    std::cout << "Hello, Coverity!" << std::endl;

    char* ptr = nullptr;
    if (ptr) {
        *ptr = 'A';
    }

    return 0;
}