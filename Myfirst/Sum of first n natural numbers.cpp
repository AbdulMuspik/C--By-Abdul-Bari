//
//  Sum of first n natural numbers.cpp
//  Myfirst
//
//  Created by MUSFIK on 29/05/24.
//

#include <iostream>
using namespace std;

int main() {
    int sum,n;
    
    cout <<"Enter the value of the last Number : ";
    cin >>n;
    sum = n*(n+1)/2;
    cout <<"The sum of first "<<n<<" number is : "<<sum<<"."<<endl;
}
