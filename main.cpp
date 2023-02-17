#include "Employee.h"
#include <iostream>
using namespace std;

int main() {
  Employee e1;
  Employee e2("Marry", 20, 30);

  e1.setName("David");
  e1.setHours(10);
  e1.setRate(40);
  cout<<"\nEmployee e2 name is: "<<e2.getName()<<", The pay is: "<<e1.caclPay();
  cout<<"\nEmployee e1 name is: "<<e2.getName()<<", The pay is: "<<e2.caclPay();

  if(e1.caclPay()>e1.caclPay()){
    cout<<"\n"<<e1.getName()<<"is get pay more $$.";
  }else if(e2.caclPay()>e1.caclPay()){
    cout<<"\n"<<e2.getName()<<"is get pay more $$.";
  }else{
    cout<<"\n"<<e1.getName()<<"and "<<e2.getName()<<"make the same $$";
  }
  
  
}