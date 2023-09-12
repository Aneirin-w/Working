// operators.cpp by Bill Weinman [bw.org]
// updated 2022-06-17
#include <format>
#include <iostream>

using std::format;
using std::cout;

int main() {
    auto x = 5;
    auto y = 47;
    cout << format("x is {}\n", x);
    cout << format("y is {}\n\n", y);
    
    bool a = true;
    auto b = false;
    bool c = true;
    
    cout << format("a is {}\n", a);
    cout << format("b is {}\n", b);
    cout << format("size of c is {} bits\n", sizeof(c) * 8);

    // Bool type is usually 8 bits (see c)
    
    std::cout << "\n";
    
    if (a && b ) cout << "true\n";
    else cout << "flase\n";
    
    if (a || b ) cout << "true\n";
    else cout << "flase\n";
    
    if (!a ) cout << "true\n";
    else cout << "flase\n";
    
    // and = &&
    // or = ||
    // not = !      eg not a = !a
}
