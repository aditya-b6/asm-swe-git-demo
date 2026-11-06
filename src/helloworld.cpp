#include <iostream> /* preprocessor directive */
// this is a single line comment
/* This is a multiline comment 
    this can be extended for multiple lines
    and the syntax is same as in C language*/
using namespace std;

int main() {
    /* Types of Initializations*/
    double  x{3}; // direct-list initialization or uniform initialization (preferred)
    float   y = 5.5f; // copy initialization
    int     z (7.2); // direct initialization
    [[maybe_unused]] int b {}; // value initialization or zero initialization

    std::cout << "Hello, World!\n" << sizeof(int) << std::endl;
    std::cin  >> x;
    std::cout << "double of x:" << x*2 <<" Triple of x :" << x*3 << " z:" << z << std::endl;
    return 0;
}
