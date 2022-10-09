#include <iostream>

typedef struct {
    int length;
    int breadth;
} Rectangle;

int main() {
    Rectangle rectangle = {10, 5};
    std::cout << sizeof rectangle << std::endl;
    std::cout << rectangle.length << std::endl;
    std::cout << rectangle.breadth;

    return 0;
}