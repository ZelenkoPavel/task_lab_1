#include <iostream>
#include <math.h>

using namespace std;

//double conv_to_radians(double degree)
//{
//    return degree / 180 * 3.1415926;
//}

int main()
{
    double a, b, z1, z2, x, y, z;

    cout << "------- lvl1 -------\n";


    cout << "Zadaii a: "; cin >> a;
    a = a / 180 * 3.1415926;

    /*a = conv_to_radians(a);*/

    z1 = 1 - 0.25 * pow(floor(sin(2 * a)*100)/100, 2) + cos(2 * a);
    z2 = pow(floor(cos(a) * 100) / 100, 2) + pow(floor(cos(a) * 100) / 100, 4);

    cout << "Rezault lvl1 = " << z1 << ", " << z2 << (z1 == z2) << endl;

    cout << "------- lvl2 -------\n";

    while (true) {
        do {
            cout << "Zadaii a and b v gradusah: ";
        } while (!(cin >> a) || !(cin >> b));
        a = a / 180 * 3.1415926;
        b = b / 180 * 3.1415926;

        if (floor((cos(a) - sin(2 * b - a)) * 100) / 100 == 0 ||
            floor(cos(2 * b)*100)/100 == 0) {
            continue; // пропускает всё, что ниже в цикле
        }

        z1 = (sin(a) + cos(2 * b - a)) / (sin(a) + cos(2 * b - a));
        z2 = (1 + sin(2 * b)) / cos(2 * b);

        break;
    }

    cout << "Rezault lvl2 = " << z1 << ", " << z2 << (z1 == z2) << endl;

    cout << "------- lvl3 -------\n";

    cout << "Zadaii x, y and z: "; cin >> x >> y >> z;

    a = log(pow(y, -sqrt(fabs(x)))) * (x - y / 2) + pow(sin(atan(z)), 2);

    cout << "Result: a = " << a << endl;


}