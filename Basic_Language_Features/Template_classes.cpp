#include <iostream>
#include "Template_classes.h"
using namespace std;

int main()
{
  Arithmetic <int> ar(10, 5);
  cout << "ar.get_a(): " << ar.get_a() << endl;
  cout << "ar.get_b(): " << ar.get_b() << endl;
  cout << "ar.add(): " << ar.add() << endl;
  cout << "ar.sub(): " << ar.sub() << endl;





  return 0;
}
