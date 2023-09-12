// working.cpp by Bill Weinman [bw.org]
// updated 2022-05-21
#include <format>
#include <iostream>

using std::format;
using std::cout;

int main()
{
    for (int x=2; x<100; ++x)
    {
        int chk = 0;
        for (int i=2; i<=x/2; i++)
        {
            if (x % i == 0)
            {
                chk = 1; break;
            }
        } if (chk == 0) cout << x << " ";
    }
    
    cout << "\n";
    
    // new workings
    for (auto y = 2; y < 100; ++y){
        
        bool prime_num = true; // assigning prime_num to be true
        for (auto factor = 2; factor < y; ++factor){
            if ( y % factor == 0){
                prime_num = false;
            }
        }if (prime_num) cout << y << " ";
    }
    
    
}
    

