#include <iostream>

using namespace std;
class complex
{
    private: int r;
             int i;
    public:complex(int a, int b)
    {
        r=a;
        i=b;
    }
    complex(complex &c){
    r=c.r;
    i=c.i;
        }
        void show(){
        cout<<r<<"+i"<<i<<endl;
        }
};
int main()
{
    complex c1(5,6);
    complex c2(c1);
    c1.show();
    c2.show();
    return 0;
}
