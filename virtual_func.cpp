#include <iostream>
using namespace std;

class student{
    public:
    virtual void show(){
         cout<<"I am parent"<<endl;
    }
};
class child:public student{
  public:
  void show(){
      cout<<"I am child"<<endl;
  }
};

int main() {
	// your code goes here
    student *p;
    child c;
    p= &c;
     // to implement early binding we dont use virtual keyword in parent class , so output will be "I am parent"
    // to implement late binding use virtual keyword in parent class, so output is "I am child"
    p->show();
	return 0;
}
