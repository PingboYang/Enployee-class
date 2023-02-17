#include "Employee.h"
#include <iostream>
using namespace std;

Employee :: Employee(){
  name="";
  hours=0;
  rate=0;
}
Employee :: Employee(string n, int h, double r){
  name=n;
  hours=h;
  rate=r;
}
Employee :: Employee(string n){
  name=n;
}
// Employee::

string Employee::getName(){
  return name;
}
int Employee::getHours(){
  return hours;
}
double Employee::getRate(){
  return rate;
}

void Employee::setName(string n){
  name=n;
}
void Employee::setHours(int h){
  if(h>=0){
    hours=h;
  }else{
    hours=0;
  }
  
}
void Employee::setRate(double r){
  if(r>=0){
    rate=r;
  }else{
    r=0;
  }
}

double Employee::caclPay(){
  return rate*hours;
}










