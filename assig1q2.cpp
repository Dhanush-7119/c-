#include<iostream>
using namespace std;

int main() {

    int n = 3; 

    while (n >= 0) {
        cout << n << " "; 
        n--; 
    }

    cout << endl;

    n = -3; 

    while (n < 4) {
        cout << n << " "; 
        n++; 
    }

    cout << endl; 

    n = 3; 

    while (n >= 0) {
        cout << n << " "; 
        n /= 2; 
    }

    cout << endl; 

    return 0;
}


