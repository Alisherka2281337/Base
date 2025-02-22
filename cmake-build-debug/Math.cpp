#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

double discriminant1, discriminant2;


void math_equation(int A, int B, int C) {
    double x;
    double y1, y2;
    double C1, C2;
    double Psi;
    double Etta;
    // double U_x, U_y, U_xx, U_xy, U_yy;
    discriminant1 = ((B - sqrt(B * B - A * C)) / A);
    discriminant2 = ((B + sqrt(B * B - A * C)) / A);
    Psi = y1 - discriminant1 * x;
    Etta = y2 - discriminant2 * x;
    cout << '\n' << discriminant1 << '\n' << discriminant2;
}

class U_x {
    double Psi = discriminant1;
    double Etta = discriminant2;
};

class U_y {
    double Psi = 1;
    double Etta = 1;
};

class U_xx {
    double Psi_Psi = pow(discriminant1, 2.0)
    double Etta_Psi = discriminant2 * discriminant1 * 2;
    double Etta_Etta = pow(discriminant2, 2.0);
};

class U_xy {
    double Psi_Psi = discriminant1 * 1;
    double Psi_Etta = discriminant1 * 1 + 1 * discriminant2;
    double Etta_Etta = discriminant2 * 1;
};

class U_yy {
};

int main() {
    int A, B, C;
    vector<int> coef_equation;
    cout << "Введите коэффициент при U_xx!" << '\n';
    cin >> A;
    coef_equation.push_back(A);
    cout << "Введите коэффициент при U_xy!" << '\n';
    cin >> B;
    coef_equation.push_back(B / 2);
    cout << "Введите коэффициент при U_yy!" << '\n';
    cin >> C;
    coef_equation.push_back(C);
    cout << "Вы ввели уравнение: " << coef_equation.at(0) << "U_xx + " << coef_equation.at(1) <<
            "U_xy + " << coef_equation.at(2) << "U_yy = 0";
    math_equation(A, B, C);
    return 0;
}
