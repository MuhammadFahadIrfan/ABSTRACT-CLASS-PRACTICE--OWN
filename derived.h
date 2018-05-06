#include <iostream>
#include "base.h"
using namespace std;

class derived:public base
{
  public:
  void fun()
  {
    cout<<"X:"<<x<<"Y:"<<y<<endl;
  }
  derived(int i,int j):base(i)

  {
    int y=j;
  }

  protected:
  int y;
};