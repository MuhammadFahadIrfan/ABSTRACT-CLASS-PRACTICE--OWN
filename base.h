#include <iostream>
using namespace std;

class base
{
  public:
  virtual void fun()=0;
  base(int i)
  {
    int x=i;
    
  }
  
  protected:
  int x;


};