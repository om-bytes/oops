#include<iostream>
#include<string>
using namespace std;

class Marksheet {
private:
float mrk1,mrk2,mrk3;
public:
string name,enrollno;
void setMrk(float a,float b,float c){
  mrk1 = a;
  mrk2 = b;
  mrk3 = c;
}
float average();
void display();
};
float Marksheet::average(){
  return (mrk1 + mrk2 + mrk3)/3;
}
void Marksheet::display() {
  cout<<"\n\n Name of the student"<<name<<endl;
  cout<<"Enrollment number of the student"<<enrollno<<endl;
  cout<<"Marks in subject 1"<<mrk1<<endl;
  cout<<"Marks in subject 2"<<mrk2<<endl;
  cout<<"Marks in subject 3"<<mrk3<<endl;
  cout<<"Average marks of the student"<<average()<<endl;
}
int main() {
  Marksheet marks;
  float a,b,c;
  string name;
  string enrollno;
  cout<<"Enter marks of the student: ";
  cin>>a>>b>>c;
  cout<<"Enter name of the subject: ";
  cin>>name;
  cout<<"Enter enrollment of the student: ";
  cin>>enrollno;

  marks.setMrk(a,b,c);
  marks.display();
  return 0;
}
}
