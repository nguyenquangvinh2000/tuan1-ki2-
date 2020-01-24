#include<iostream>
using namespace std;
const double pi = 3.14;

int main()
{
    float duongkinh, r, dientich;
    cout<<"nhap duong kinh: "<<endl;
    cin>>duongkinh;
    r = duongkinh/2;
    dientich = r*r*pi;
    cout<<"dien tich hinh tron: "<<dientich<<endl;
    return 0;
}
