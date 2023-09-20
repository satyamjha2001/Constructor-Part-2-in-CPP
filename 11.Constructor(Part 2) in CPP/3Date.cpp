#include<iostream>
using namespace std;
class Date
{
    int d,m,y;
    public:
    Date():d(1),m(11),y(2002)
    {

    }
    Date(int d,int m,int y):d(d),m(m),y(y)
    {

    }
    void display()
    {
        cout<<"Date : "<<d<<"-"<<m<<"-"<<y<<endl;
    }
};
int main() {
Date d1(20,9,2023),d2(12,11,2023),d3;
d1.display();
d2.display();
d3.display();
return 0;
}