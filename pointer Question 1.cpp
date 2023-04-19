#include<iostream>
using namespace std;

int main()
{
    int var[] = {5,8,3,7,6};
    int *p=var;

    p=var;//#1
    *p=*(p+1)+*(p+4);

    p=(p+4);//#2
    *p=*(p-1) + *p;

    p=(p-1);//#3
    *p+= *(p+1);

    p=(p-1);//#4
    *p+=*(p+1);

    p=p+1;  //#5
    *p= *(p) + *(++p);

    for(int i=0; i<5; i++) {

        cout<<var[i]<<endl;
    }

    return 0;
}