// working.cpp by Bill Weinman [bw.org]
// updated 2022-05-21
#include <format>
#include <iostream>

using std::format;
using std::cout;

int main() {
    
    auto x =5;
    cout << format("x is {}\n", ++x);
    cout << format("x is {}\n", ++x);
    cout << format("x is {}\n", ++x);
    
    cout << format("\n");
    
    cout << format("x is {}\n", --x);
    cout << format("x is {}\n", --x);
    cout << format("x is {}\n", --x);
    
}
