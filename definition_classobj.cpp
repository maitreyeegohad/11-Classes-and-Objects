#include<iostream>
using namespace std;
class student               
{
    public:
    string name;
    int age;
    string branch;          
    float result;
    int year;
    int prn;
};
int main()
{
    student s1,s2;

    cout<<"1st student: "<<endl;
    s1.name = "Maitreyee";
    s1.age = 19;
    s1.branch = "ENTC";
    s1.prn = 070;
    s1.result = 8.4;
    s1.year = 2;
    cout<<s1.name<<endl<<s1.age<<endl<<s1.branch<<endl<<s1.prn<<endl<<s1.result<<endl<<s1.year<<endl;

    cout<<"\n2nd student: "<<endl;
    s2.name = "Mithila";
    s2.age = 18;
    s2.branch = "ENTC";
    s2.prn = 055;
    s2.result = 7.9;
    s2.year = 2;
    cout<<s2.name<<endl<<s2.age<<endl<<s2.branch<<endl<<s2.prn<<endl<<s2.result<<endl<<s2.year<<endl;

}

/*
1st student: 
Maitreyee
19
ENTC
70
8.4
2

2nd Stutdent: 
Mithila
18
ENTC
55
7.9
2
*/
