#include<iostream>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"nhap so thu 1:"<<endl;
    cin>>a;
    cout<<"nhap so thu 2:"<<endl;
    cin>>b;
    cout<<"nhap so thu 3:"<<endl;
    cin>>c;
	if ((a>b)&&(b>c))
		cout<<a<<","<<b<<","<<c<<endl;
	else if((a>c)&&(c>b))
		cout<<a<<","<<c<<","<<b<<endl;
	else if((b>a)&&(a>c))
		cout<<b<<","<<a<<","<<c<<endl;
	else if((b>c)&&(c>a))
		cout<<b<<","<<c<<","<<a<<endl;
	else if((c>b)&&(b>a))
		cout<<c<<","<<b<<","<<a<<endl;
	else if((c>a)&&(a>b))
		cout<<c<<","<<a<<","<<b<<endl;
	return 0;

}

