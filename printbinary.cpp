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

/*
In the beginning, the code will check if the user input is in the right constraints. If it is not, the code makes an invalid number output, and exits.
If the user input is in the constraints, the code continues to be proccesed. First, the amount of numbers will be printed is calculated. After that is done,
the binary number and output commands start to work.

The variable "comparedBit" is created to check the bits. This variable is shifted one bit to the left, because the value of "comparedBit", which is the integer "b", 
is one digit longer than the numbers being checked. Then in the while loop, the remainder of the operation "c/comparedBit" is calculated. This is for getting the bit 
value. After this operation is done, the mask operation checks if the remainder and the result is "equal" to the "comparedBit". If it is the output is 1, else the 
output is 0. Then the "comparedBit" value is shifted one bit to the right to check the other bits left. After the binary code of integer "c" is found, the code prints 
out both the binary number and the decimal number, and the "comparedBit" variable is reverted back to "b" for the next numbers.
*/