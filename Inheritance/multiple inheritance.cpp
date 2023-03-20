#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

class student
{
  public:
    
    int RollNo;
    char Name[10];
    
    void getstudinfo()
    {
      cout<<"Enter Student Roll No :";
      cin>>RollNo;
      cout<<"Enter student Name :";
      cin>>Name;
    }
    void putstudinfo()
    {
      cout<<"\n\nStudent Roll No is:"<<RollNo<<endl;
      cout<<"Student Name is :"<<Name<<endl;
    }
};
  class Marks
 {
   public:
   
   int S1,S2,S3;
   void getmarks()
   {
     cout<<"Enter Physics Marks of Student:";
     cin>>S1;
     cout<<"Enter Chemistry Marks of Student:";
     cin>>S2;
     cout<<"Enter Maths Marks of Student:";
     cin>>S3;
   }
   void putmarks()
   {
     cout<<"Physics Marks Of Student is:"<<S1<<endl;
     cout<<"Chrmistry Marks of Student is:"<<S2<<endl;
     cout<<"Maths Marks of Student is:"<<S3<<endl;
   }
 };
 class Result:public student,public Marks
{
  public:
    float Total,Per;
    
    void Display()
    {
      student::getstudinfo();
      Marks::getmarks();
      student::putstudinfo();
      Marks::putmarks();
      
      Total=S1+S2+S3;
      Per=Total/3;
      
      cout<<"Total Marks of Student is :"<<Total<<endl;
      cout<<"Total percentage of Student is"<<Per<<endl;
    }
};

int main()
{
   Result R;
   R.Display();
}