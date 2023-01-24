#include <iostream>

using namespace std;

int main()
{
   int i=0,k;
   long int a[10],b[10],c[10];

cout<<"Enter the value of k";
cin>>k;

cout<<"Enter your matrix";
for(i=0;i<5;i++)
{
    cin>>a[i];
}

for(i=0;i<k;i++){
    b[i]=a[i];
    }

    for(i=k;i<5;i++)
    {
        c[i-2]=a[i];
    }

    cout<<"Resultant Matrix";
    for(i=0;i<=k;i++)
    {
        cout<<c[i]<<endl;

    }
    for(i=0;i<k;i++)
    cout<<b[i]<<endl;
    //cout << "Hello world!" << endl;
    //return 0;
}
