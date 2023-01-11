#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <cstring>
#include "student.h"
using namespace std;

class Node {
  public:
  Node();
  Node(Student* studentP);
  ~Node();
  void setValue(Node*);
  Student* getStudent();
  void setNext(Node*);
  Node* getNext();

  protected: 
  Student* student;
  Node* next;
};

#endif