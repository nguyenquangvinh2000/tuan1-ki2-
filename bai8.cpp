#include<iostream>
#include<math.h>
using namespace std;
int main() 
{
    float a, b;
    cout << "Nhap a:";
    cin >> a;
    cout << "Nhap b:";
    cin >> b;
    if (a == 0) {
        if (b == 0)
            cout << "Phuong trinh co vo so nghiem" << endl;
        else
            cout << "Phuong trinh vo nghiem" << endl;
    }
    else
        cout << "Phuong trinh co mot nghiem la x: " << -b / a << endl;
    return 0;
}
