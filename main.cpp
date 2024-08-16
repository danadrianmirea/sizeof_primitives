#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    bool b;
    char c;
    int i;
    double d;
    float f;
    long l;

    std::cout << "sizeof(b) = " << sizeof(b) << "\n";
    std::cout << "sizeof(c) = " << sizeof(c) << "\n";
    std::cout << "sizeof(i) = " << sizeof(i) << "\n";
    std::cout << "sizeof(d) = " << sizeof(d) << "\n";
    std::cout << "sizeof(f) = " << sizeof(f) << "\n";
    std::cout << "sizeof(l) = " << sizeof(l) << "\n\n";
    
    std::cout << "sizeof(size_t)  = " << sizeof(size_t) << "\n";

    return 0;
}
