#include <iostream>
using namespace std;

int main() {

    
    int i, n;

    cout << " Enter Range of Even numbers to be Printed " << '\n';
    cin >> i >> n;
    cout << "Results = ";
    while (i <= n) {

        

        if (i % 2 == 0) {

            cout  << i << " ";
        }

        i++;
    }
   
    return 0;
}
