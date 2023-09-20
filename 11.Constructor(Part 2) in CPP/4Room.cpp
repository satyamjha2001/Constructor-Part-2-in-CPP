#include<iostream>
using namespace std;
class Room
{
    int room_no;
    int room_type;
    bool is_AC;
    double price;
    public:
    Room(int rno,int rtype,bool ac, double p)
        {
            room_no=rno;
            room_type=rtype;
            is_AC=ac;
            price=p;
        }
    Room()
    {
        cout<<"Enter Your Room Number: ";
        cin>>room_no;
        cout<<"Enter Your Type Of Room: ";
        cin>>room_type;
        cout<<"Enter 0 for Ac and 1 for Non Ac: ";
        cin>>is_AC;
        cout<<"Enter Your Room Price: ";
        cin>>price;
    }
    void display()
    {
        cout<<endl<<"Room No. is : "<<room_no;
        cout<<endl<<"room_type is : "<<room_type;
        cout<<endl<<"Your room is : ";
        if(is_AC==0)
        cout<<"AC";
        else
        cout<<"Non AC";
        cout<<endl<<"Your Room Price is : "<<price;
    }
};
int main() {
Room r1(1,1,0,3000),r2;
r1.display();
r2.display();
return 0;
}