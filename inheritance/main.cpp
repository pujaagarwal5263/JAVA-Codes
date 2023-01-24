#include <iostream>

using namespace std;

class B{
private:int x;
protected: int y;
public: int z;
public: void getdata();
        void showdata();
        };
class D:public B{
private: int k;
public : void getk();
         void output();
};
void B::getdata(){
cout<<"Enter the numbers";
cin>>x>>y>>z;
}
void B::showdata()
{
cout<<"x="<<x<<"y="<<y<<"z="<<z;
}
void D::getk(){
cout<<"Enter value";
cin>>k;
}
void D::output()
{
    int s=y+z+k;
    cout<<"s="<<s;
}
int main()
{
    D b1;
    b1.getdata();
    b1.getk();
    b1.showdata();
    b1.output();
    return 0;
}
