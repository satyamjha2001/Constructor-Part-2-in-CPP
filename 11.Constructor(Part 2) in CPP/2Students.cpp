#include<iostream>
using namespace std;
class Students
{
    int rollno;
    char name[20];
public:
Students()
{
    cout<<"Enter students rollno ";
    cin>>rollno;
    cout<<"Enter students name ";
    cin.ignore();
    cin.getline(name,20);
}
void display()
{
    cout<<"Students Roll No. is "<<rollno<<endl;
    cout<<"Students name is "<<name<<endl;
}
};
int main() {
Students s1,s2;
s1.display();
s2.display();
return 0;
}