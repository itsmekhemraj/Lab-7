#include <iostream>
using namespace std;
class student
{
    protected:
    string name, roll;
    int age;
    float marks[5];
    public:
    void get_per_info();
    void get_marks();
    void display();
};
void student::get_per_info()
{
    cout<<"Enter your name:- ";
    cin>>name;
    cout<<"Roll No:- ";
    cin>>roll;
    cout<<"Age:- ";
    cin>>age;
}
void student::get_marks()
{
    int i;
    for(i=0; i<5; i++)
    {
        cout<<"Enter marks of "<<(i+1)<<"th subject:- ";
        cin>>marks[i];
    }
}
void student::display()
{
    cout<<endl<<"Name:- "<<name<<endl;
    cout<<"Roll:- "<<roll<<endl;
    cout<<"Age:- "<<age<<endl;
}
class test:public student
{
    protected:
    float tot, per;
    public:
    void calculate();
};
void test::calculate()
{
    for(int i= 0; i<5; i++)
    {
        tot+= marks[i];
    }
    per= tot/5;
}
class result:public test
{
    public:
    void display_res();
    void display_pass();
    void display_fail();
};
void result::display_res()
{
    cout<<endl<<"Your total score is:- "<<tot<<endl;
    for(int i=0; i<5; i++)
    {
        if(marks[i]!=32)
        {
            display_fail();
            break;
        }
        else
        {
            display_pass();
            break;
        }
    }
}
void result::display_pass()
{
    if(per>90)
    {
        cout<<"Your grade is A+"<<endl;
    }
    else if(per>=80)
    {
        cout<<"Your grade is A"<<endl;
    }
    else
    {
        cout<<"Pass! But work hard"<<endl;
    }
}
void result::display_fail()
{
    cout<<"Fail!! Better luck next time."<<endl;
}
int main()
{
    result t;
    t.get_per_info();
    t.get_marks();
    t.calculate();
    t.display();
    t.display_res();
    return 0;
}