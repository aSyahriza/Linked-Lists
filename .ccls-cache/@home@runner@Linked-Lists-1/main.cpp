#include <iostream>
#include <cstring>

#include "node.h"

using namespace std;

void add(Student* newStudent, Node* &head);
void print(Node* next, Node* head);
void deleteNode(Node* toDelete, Node* &head);

int main() {
  Node* head = NULL;

  char* student1Name = new char[80];
  strcpy(student1Name,"John");
  Student* student1 = new Student(student1Name,456709,3.45);
  add(student1, head);
  print(head,head);
  cout <<"\n";
  

  char* student2Name = new char[80];
  strcpy(student2Name,"Nick");
  Student* student2 = new Student(student2Name,453908,3.76);
  add(student2, head);
  print(head,head);
  cout <<"\n";

  char* student3Name = new char[80];
  strcpy(student3Name,"Claire");
  Student* student3 = new Student(student3Name,458842,3.61);
  add(student3, head);
  print(head,head);
  cout <<"\n";

  deleteNode(head->getNext(),head);

  print(head,head);

  
}


void add(Student* newStudent, Node* &head){
  Node* current = head;
  if(current == NULL){
    head = new Node();
    head->setValue(newStudent);
    
  }
  else{
    while(current->getNext() != NULL){
      current = current->getNext();
    }
    current->setNext(new Node());
    current->getNext()->setValue(newStudent);
  }
}

void print(Node* next, Node* head){
  if(next==head){
    cout << "List: ";
  }
  if (next != NULL){
    cout << next->getStudent()->getName() << " ";
    print(next->getNext(),head);
  }
}

void deleteNode(Node* toDelete, Node* &head){
  Node* current = head;
  if(current == toDelete){
    delete current;
  }
  
  while(current->getNext() != toDelete){
    current = current->getNext();
  }
  current->setNext(current->getNext()->getNext());
  delete toDelete;
}


/*
*
*
*
*
*

*/