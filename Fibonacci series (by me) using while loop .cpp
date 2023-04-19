#include <iostream>
using namespace std;
int main()
{
    int a=0,b=1,c=1,n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Fibonacci series of "<<n<<" are: "<<a<<"\t";

    while(c<=n) {
        cout<<c<<"\t";
        c=a+b;
        a=b;
        b=c;
    }

    return 0;
}
