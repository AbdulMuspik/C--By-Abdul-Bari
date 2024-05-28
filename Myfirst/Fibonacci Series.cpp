//
//  Fibonacci Series.cpp
//  Myfirst
//
//  Created by MUSFIK on 28/05/24.
//

#include <iostream>

using namespace std;

int main() {
    int n, first = 0, second = 1, next;

    // Input number of terms
    cout << "Enter the number of terms: ";
    cin >> n;

    // Output Fibonacci series
    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++) {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }
    cout << endl;

    return 0;
}

