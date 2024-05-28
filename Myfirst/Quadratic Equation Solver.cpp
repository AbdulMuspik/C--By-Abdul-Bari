//
//  Quadratic Equation Solver.cpp
//  Myfirst
//
//  Created by MUSFIK on 28/05/24.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, x1, x2;

    // Input coefficients
    cout << "Enter coefficients (a, b, c): ";
    cin >> a >> b >> c;

    // Calculate discriminant
    double discriminant = b * b - 4 * a * c;

    // Check if roots are real
    if (discriminant >= 0) {
        // Calculate roots
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);

        // Output roots
        cout << "Roots are: " << x1 << " and " << x2 << endl;
    } else {
        cout << "No real roots exist." << endl;
    }

    return 0;
}
