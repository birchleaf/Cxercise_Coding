#include <iostream>
#define pi 3.14
using namespace std;


class Circle
{
   public:
    int m_r;
    double calculateZC()
    {
        return 2*pi*m_r;
    } 
};

int main()
{
    Circle c1;
    c1.m_r=10;
    cout<<c1.calculateZC();
    return 0;
}