#include <math_functions.h>
#include <iostream>

int main(int argc, char *argv[])
{
    std::cout << "Area of circle(r=1.0) is "
              << math_functions::circle_area(1.0)
              << std::endl;
    return 0;
}
