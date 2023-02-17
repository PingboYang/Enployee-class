#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
using namespace std;
class Employee{
private: string name;
         int hours;
         double rate;

public: Employee();
        Employee (string, int, double);
        Employee(string);

        string getName();
        int getHours();
        double getRate();

        void setName(string);
        void setHours(int);
        void setRate(double);

        double caclPay();
};









#endif