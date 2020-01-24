#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;

int main()
{
    float x,y,a,b;
    cout<<"nhap x: "<<endl;
    cin>>x;
    cout<<"nhap y: "<<endl;
    cin>>y;
    cout<<"nhap a: "<<endl;
    cin>>a;
    cout<<"nhap b: "<<endl;
    cin>>b;
    cout<<"ket qua 1: "<<(2008*x+2009*y)/(x*x+y+1)<<endl;
    cout<<"ket qua 2: "<<sqrt(a*a+b*b)/2<<endl;
    cout<<"ket qua 3: "<<sqrt(2*x+sqrt(2*x+1))<<endl;
    cout<<"ket qua 4: "<<x-(1/(1+5*x+y*y))-abs(y)+1<<endl;
    cout<<"ket qua 5: "<<sqrt(2*x*x+abs(x))-1<<endl;
    cout<<"ket qua 6: "<<sqrt(a*a+1+sqrt(x-2*sqrt(y*y)))<<endl;
    cout<<"ket qua 7: "<<sqrt(2*x*x+abs(x))-1<<endl;
    cout<<"ket qua 8: "<<sqrt(a*a+1+sqrt(x-2*sqrt(y*y)))<<endl;
    cout<<"ket qua 9: "<<(2008*x+2009/y)/(x*x+1)<<endl;
    cout<<"ket qua 10: "<<sqrt(a*a+b)+x/y<<endl;
    return 0;
}
