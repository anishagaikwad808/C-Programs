#include <iostream>
using namespace std;
#include <conio.h>
#include <stdio.h>

 class Calculator
 {
   public:
     int No1,No2,Ans;
     Calculator();
     Calculator(int N1,int N2);
     void Add();
     void Sub();
     ~Calculator();
 };
 
  Calculator :: Calculator()
  {
    cout<<endl<<"\n Inside Default Constructor !!!"<<endl;
    
    No1 = No2 = Ans =0;
  }
  
  Calculator :: Calculator(int N1,int N2)
  {
    cout<<endl<<"\n Inside Parameterized Constructor !!!"<<endl;
    
    No1=N1;No2=N2;Ans=0;
  }
  
  void Calculator ::Add()
  {
    Ans=No1+No2;
  }
  
  void Calculator ::Sub()
  {
    Ans=No1-No2;
  }
  
  Calculator:: ~Calculator()
  {
    cout<<endl<<"Inside Destructor of our Calculator Class !!!"<< Ans<<endl;
  }

int main()
{
   Calculator obj1;
   
    cout << "\n Enter 1st Number=";
    cin>>obj1.No1;
    cout<<"\n Enter 2nd Number=";
    cin>>obj1.No2;
    
    obj1.Add();
    cout<<endl<<"Addition of"<<obj1.No1<<" & "<<obj1.No2<<" is "<<obj1.Ans<<endl;
    getch();
    
    obj1.Sub();
    cout<<endl<<"Substraction of"<<obj1.No1<<" & "<<obj1.No2<<" is "<<obj1.Ans<<endl;
    Calculator obj2(100,55);
    obj2.Add();
    cout<<endl<<"Addition of"<<obj2.No1<<" & "<<obj2.No2<<"is="<<obj2.Ans<<endl;
    
    getch();
    return 0;
}