#include <iostream>
#include <string>
using namespace std;

int main()
{
    int nDigits;
    cout << "Number of digits: ";
    cin >> nDigits;
    
    if (nDigits > 10 || nDigits < 1) {
        
        cout << "invalid number" << endl;
    
    }
    else {
        
        int a = 0;
        int b = 1;
        
        while (a < nDigits) {
                
            b = b*2;
            ++a;

        }

        int comparedBit = b;
        
        for (int c = 0; c < b; c++) {
            
            comparedBit >>= 1;
            
            while (comparedBit > 0) {
                int result = c & comparedBit;
                cout << ((result == comparedBit) ? 1 : 0);
                comparedBit >>= 1;
            }
            
            cout << " --> " << c << endl;
            comparedBit = b;
        }
    }
}
