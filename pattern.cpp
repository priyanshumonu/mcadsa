#include<iostream>
using namespace std;
int main()
{
    int a=4;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
     for(int i=1;i<=a;i++)
    {
        for(int j=i;j<=a;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
