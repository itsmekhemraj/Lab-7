#include <iostream>
using namespace std;
class course
{
    protected:
    string name;
    float maths_marks;
    public:
    void get_name()
    {
        cout<<endl<<"Enter your name:- ";
        cin>>name;
        cout<<endl<<"Enter your maths marks:- ";
        cin>>maths_marks;
    }
    void display()
    {
        cout<<endl<<"Name:- "<<name<<endl;
        cout<<"Your marks in maths:- "<<maths_marks;
    }
};
class mathematics:public course
{
    protected:
    int batch;
    string math_grade;
    public:
    void get_info()
    {
        cout<<endl<<"Enter your batch:- ";
        cin>>batch;
        cout<<endl<<"Your grade in maths:- ";
        cin>>math_grade;
    }
    void display()
    {
        cout<<"Name:- "<<name;
        cout<<endl<<"Your batch is:- "<<batch<<endl;
        cout<<"Your grade in maths:- "<<math_grade;
    }
};
class science:public course
{
    protected:
    int no_course;
    float per;
    public:
    void get_sci_mark()
    {
        cout<<endl<<"Enter number of courses:- ";
        cin>>no_course;
        cout<<endl<<"Your percentage is:- ";
        cin>>per;
    }
    void display()
    {
        cout<<"Name:- "<<name;
        cout<<endl<<"Total number of courses in science:- "<<no_course;
        cout<<endl<<"Percentage:- "<<per;
    }
};
class engineering:public course
{
    protected:
    int duration;
    public:
    void get_time()
    {
        cout<<endl<<"Time duration of engineering course:- ";
        cin>>duration;
    }
    void display()
    {
        cout<<"Name:- "<<name<<endl;
        cout<<"Duration of enfineering course:- "<<duration;
    }
};
class physics:public science
{
    public:
    void display()
    {
        if(no_course>7)
        {
            cout<<"Course is tough";
        }
        else
        {
            cout<<"Course is easy";
        }
    }
};
class chemistry: public science
{
    public:
    void display()
    {
        if(per>90)
        {
            cout<<"Your are awesome (A+)";
        }
        else if(per>=80)
        {
            cout<<"Outstanding (A)";
        }
        else
        {
            cout<<"Work hard";
        }
    }
};
int main()
{
    mathematics mth;

    mth.get_name();
    mth.get_info();
    mth.display();
    // this mth.display() function call the function of derived class
    // and not the base class 

    physics phy;
    phy.get_sci_mark();
    phy.display();

    return 0;
}