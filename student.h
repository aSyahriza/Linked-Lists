#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <cstring>
using namespace std;

class Student {
  public:
  Student();
  Student(const char* nameP, int idP, float gpaP);
  ~Student();
  char* getName();
  int getId();
  float getGpa();
  
  protected: 
  char* name;
  int id;
  float gpa;
};

#endif