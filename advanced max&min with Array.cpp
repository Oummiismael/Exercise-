#include<iostream>
using namespace std;
int i,n, minn, maxx;
//int list[5]= {9,57,43,30,11};

//int list[i];
int main()
{
    int list[i];
    cout<<"Enter number of Array: ";
    cin>>n;
    cout<<" Enter "<<n<<" numbers: ";
    for(i=1; i<=n; i++) {
        cin>> list[i];
    }

    minn=list[1];
    for(i=1; i<=n; i++) {
        if (minn > list[i]) {
            minn= list[i];
        }
    }
    cout<<"min value is "<<minn<<endl;
    maxx=0;
    for(i=1; i<=n; i++) {
        if(maxx < list[i]) {
            maxx= list[i];
            }
        }
        cout<<"max value is "<<maxx;

        return 0;
    }

    