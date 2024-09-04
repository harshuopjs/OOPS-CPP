#include<iostream>
#include<string>
using namespace std;
class stud
{
  string name;
  float per=0;
  int roll, marks[5];
  void input()
  {
    cout << "Enter name:";
    cin >> name;
    cout << "Enter roll number:";
    cin >> roll;
    cout << "Enter marks for 5 subjects:";
    for(int i=0;i<5;i++)
      cin >> marks[i];
  }
  float percen()
  {
    for(int i=0;i<5;i++)
      { per+=marks[i];}
    per/=500;
    per*=100;
   return per;
  }
char grade(float per)
{ 
  per=percen();
  if(per>=90)
    return 'A';
  if(per>=80)
    return 'B';
  if(per>=70)
    return 'C';
  if(per>=60)
    return 'D';
  else
    return 'F';
}
  public:
  void display()
  {
    float per;
    input();
    cout << "Name:" <<name <<endl;
    cout << "Roll no.:" <<roll <<endl;
    for(int i=0;i<5;i++)
      cout << "Marks of subject " << i+1 <<": " << marks[i] <<endl;
    per=percen();
    cout<<"\nPercentage is "<<per;
     cout<<"\nGrade is "<< grade(per);
  }
};
int main()
{
  stud s1;
  s1.display();
  return 0;
}
