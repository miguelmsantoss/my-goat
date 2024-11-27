#include <iostream>
#include <cstring>

void bufferOverflow() {
    char buffer[10];
    const char* largeInput = "This text is too long for the buffer!";

    std::strcpy(buffer, largeInput);

    std::cout << "Buffer: " << buffer << std::endl;
}

int main() {
    std::cout << "Hello, Coverity!" << std::endl;

    bufferOverflow();

    return 0;
}
