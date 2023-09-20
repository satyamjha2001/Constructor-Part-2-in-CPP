#include<iostream>
using namespace std;
class Circle
{
    double radius;
    public:
    Circle()
    {
        cout<<"Enter your radius of circle : ";
        cin>>radius;
    }
    Circle(int r)
    {
        radius=r;
    }
    void display()
    {
        cout<<"Radius of Circle is "<<radius<<endl;
    }
};
int main() {
Circle c1,c2(3);
c1.display();
c2.display();
return 0;
}