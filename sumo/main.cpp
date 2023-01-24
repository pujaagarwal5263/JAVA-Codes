#include <iostream>

using namespace std;

int main()
{
    int sum=0,mod,rem,n,num,i;
    cout<<"Enter number of digits";
    cin>>n;
    cout<<"Enter your number";
    cin>>num;
    rem=num;
    mod=num;
    for(i=1;i<=n;i++)
    {
        rem=rem/(10^(n-i));
        mod=mod%(10^(n-i));
        sum=sum+rem;
        rem=mod;
    }
    cout << "Sum is" << sum;
    return 0;
}
