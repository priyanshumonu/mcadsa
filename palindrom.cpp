#include<iostream>
using namespace std;
int main()
{
    int n, num,rem;
    int sum=0;
    cin>>num;
    n=num;
    while(num!=0)
    {
        rem=num%10;
        num=num/10;
        sum=sum*10+rem;
    }
    if(sum==n)
    {
        cout<<"palindrome "<<sum;
    }
    else{
        cout<<"not palindrome";
    }

}