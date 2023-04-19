#include<iostream>
using namespace std;

int main()
{
    int a=5, b=6;
    int *p=&a, *s=&b;//*p==a,  p==&a, *s==b, s==&b

    cout<<"value of a is :"<<a<<" and "<<*p<<endl;
    cout<<"value of b is :"<<b<<" and "<<*s<<endl;
    cout<<"address of a is :"<<p<<" and "<<&a<<endl;
    cout<<"address of b is :"<<s<<" and "<<&b<<endl;

    *p=8;
    cout<<" after   *p=8 \n";
    cout<<"value "<<a<<" and "<<*p<<endl;
    cout<<"address "<<&a<<" and "<<p<<endl;
    a=9;
    cout<<" \n\n after   a=9 \n";
    cout<<"value "<<a<<" and "<<*p<<endl;
    cout<<"address "<<&a<<" and "<<p<<endl;
    //cout<<p<<" and "<<&a<<endl;
    //cout<<*p<<endl<<*s<<endl;
    p=s;
    cout<<" \n\n after   p=s \n";
    cout<<p<<" and "<<&a<<endl;
    cout<<s<<endl;
    cout<<*p<<endl;
    cout<<*s<<endl;
    return 0;
}