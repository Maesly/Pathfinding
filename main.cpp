#include <iostream>
#include "Path/Path.h"
int main() {
    std::cout << "Hello, World!" << std::endl;

    Path *path = new Path();

    path->menu();
    return 0;
}