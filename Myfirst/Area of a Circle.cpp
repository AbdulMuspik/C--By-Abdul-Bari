//
//  Area of a Circle.cpp
//  Myfirst
//
//  Created by MUSFIK on 28/05/24.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double radius, area;

    // Input radius
    cout << "Enter radius of the circle: ";
    cin >> radius;

    // Calculate area
    area = M_PI * pow(radius, 2);

    // Output area
    cout << "Area of the circle is: " << area << endl;

    return 0;
}

