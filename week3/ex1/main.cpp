#include <iostream>
#include "Math.h"


using namespace std;

int main()
{
    int r1 = Math::Add(5, 10);
    int r2 = Math::Add(5, 10, 15);
    int r3 = Math::Add(5.3, 10.3);
    int r4 = Math::Add(5.3, 10.6, 15.2);
    int r5 = Math::Mul(2, 9);
    int r6 = Math::Mul(2, 9, 12);
    int r7 = Math::Mul(3.2, 7.5);
    int r8 = Math::Mul(1.5, 10.55, 2.44);
    int r9 = Math::Add(7, 10, 8, 17, 21);
    char* r10 = Math::Add("abc", "xyz");

    cout << "Add(5, 10) = " << r1 << endl;
    cout << "Add(5, 10, 15) = " << r2 << endl;
    cout << "Add(5.3, 10.3) = " << r3 << endl;
    cout << "Add(5.3, 10.6, 15.2) = " << r4 << endl;
    cout << "Mul(2, 9) = " << r5 << endl;
    cout << "Mul(2, 9, 12) = " << r6 << endl;
    cout << "Mul(3.2, 7.5) = " << r7 << endl;
    cout << "Mul(1.5, 10.55, 2.44) = " << r8 << endl;
    cout << "Add(7, 10, 8, 17, 21) = " << r9 << endl;
    cout << "Add(abc, xyz) = " << r10 << endl;
    return 0;
}