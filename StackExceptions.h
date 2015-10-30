#include <iostream>
#include <exception>

using namespace std;

class StackUnderflowException: public exception
{

  virtual const char* what() const throw(){
    return "StackUnderflowException thrown";
  }

};
