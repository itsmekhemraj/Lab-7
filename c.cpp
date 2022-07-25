// #include <iostream>
// using namespace std;
// class A
// {
//     int a, b;
//     public:
//     A()
//     {
//         cout<<"Constructor A"<<endl;
//     }
//     A(int a, int b):a(a), b(b)
//     {
//         cout<<"Constructor A1"<<endl;
//     }
//     ~A()
//     {
//         cout<<"Destructor A"<<endl;
//     }
//     void putA()
//     {
//         cout<<"a, b: "<<a<<" "<<b<<endl;
//     }
// };
// class P
// {
//     int p, q;
//     public:
//     P()
//     {
//         cout<<"Constructor P"<<endl;
//     }
//     P(float f):p(f), q(f)
//     {
//         cout<<"Constructor P1"<<endl;
//     }
//     ~P()
//     {
//         cout<<"Destructor P"<<endl;
//     }
//     void putP()
//     {
//         cout<<"p, q: "<<p<<" "<<q<<endl;
//     }
// };
// class X:public A, public P
// {
//     int x, y;
//     public:
//     X()
//     {
//         cout<<"Constructor X"<<endl;
//     }
//     X(int j, float k, int l, int n):A(j, n), x(l+n), y(j+n), P(k)
//     {
//         cout<<"Constructor X1"<<endl;
//     }
//     ~X()
//     {
//         cout<<"Destructor X"<<endl;
//     }
//     void putX()
//     {
//         cout<<"x, y: "<<x<<" "<<y<<endl;
//     }
// };
// int main()
// {
//     X ox1;
//     X ox2(2, 3.0, 4, 5);
//     ox2.putA();
//     ox2.putP();
//     ox2.putX();
//     return 0;
// }


#include <iostream>
using namespace std;
class test1
{
    public:
    test1()
    {
        cout<<"Constructor 1st"<<endl;
    }
    ~test1()
    {
        cout<<"Destructor 1st"<<endl;
    }
};
class test2:public test1
{
    public:
    test2()
    {
        cout<<"Constructor 2nd"<<endl;
    }
    ~test2()
    {
        cout<<"Destructot 2nd"<<endl;
    }
};
int main()
{
    // test1 t1;
    test2 t2;
    return 0;
}