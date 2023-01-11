#include "student.h"


Student::Student(){
  name = new char[80];
  id = 0;
  gpa = 0.0;
}

Student::Student(const char* nameP, int idP, float gpaP){
  name = new char[80];
  strcpy(name,nameP);
  int id = idP;
  float gpa = gpaP;
}

Student::~Student(){
  delete[] name;
}

char* Student::getName(){
  return name;
}

int Student::getId(){
  return id;
}

float Student::getGpa(){
  return gpa;
}

