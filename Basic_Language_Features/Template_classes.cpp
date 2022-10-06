#include <iostream>
#include <iomanip>
#include "Template_classes.h"
using namespace std;

int main()
{
  Arithmetic <int> ar(10, 5);

  cout << "ar.get_a(): " << ar.get_a() << endl;
  cout << "ar.get_b(): " << ar.get_b() << endl << endl;

  cout << "ar.add(): " << ar.add() << endl;
  cout << "ar.sub(): " << ar.sub() << endl << endl;

  cout << "(double)ar.get_a(): " << (double)ar.get_a() << endl;
  cout << "(double)ar.get_b(): " << (double)ar.get_b() << endl << endl;

  cout << "(double)ar.add(): " << fixed << setprecision(1) << (double)ar.add() << endl;
  cout << "(double)ar.sub(): " << fixed << setprecision(1) << (double)ar.sub() << endl;

  return 0;
}
