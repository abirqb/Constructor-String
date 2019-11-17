#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

class Member
{
public:
    string x;
    string y;
    int digit;

    Member(string, string , int);
};

Member::Member(string x1, string y1, int z1):x(x1), y(y1), digit(z1){}

int main(void)
{
    Member ob1("Tree", "LikeEnd", 15);
    Member ob2("Bike", "Truck", 44);

    cout<<ob1.x<<" "<<ob1.y<<" "<<ob1.digit<<endl;
    cout<<ob2.x<<" "<<ob2.y<<" "<<ob2.digit<<endl;
    getch();
}