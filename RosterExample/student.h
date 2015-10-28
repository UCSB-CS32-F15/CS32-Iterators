#ifndef STUDENT_H
#define STUDENT_H 

#include <string>

class Student {

 public:
  Student(const char * const name, int perm);

  int getPerm() const;
  std:string getName() const;

  void setPerm(const int perm);
  void setName(const char * const name);

  std::string toString() const;

 private:
  int perm;
  std::string name;
};


#endif
