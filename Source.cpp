#include <iostream>
using  namespace std;
int tong(int a, int b)
{
return a+b;
}
int hieu(int a, int b);
int tich(int a, int b);
void main()
{
int a, b;
cout<<"Nhap a = ";
cin>>a;
cout<<"Nhap b = ";
cin>>b;
cout<<"Tong = " <<tong(a,b)<<endl;
cout<<"Hieu = " <<hieu(a,b)<<endl;
cout<<"Tich = " <<tich(a,b)<<endl;
}