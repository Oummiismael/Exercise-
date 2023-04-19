#include<iostream>
using namespace std;

int main()
{

    int var[] = {5,4,3,7,8,3,1,9};
    cout<<var<<endl;
    int *p=var;
    for(int i=0; i<8; i++) {
        cout<<"address of var["<<i<<"] is "<<p<<" and "<<&var[i]<<endl<<endl;
        cout<<"value of var["<<i<<"] is "<<*p<<" and "<<var[i]<<endl<<endl<<endl;

        p++;
    }

    return 0;
}