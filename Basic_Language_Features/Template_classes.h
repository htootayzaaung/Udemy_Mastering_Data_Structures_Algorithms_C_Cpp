/*
class Arithmetic
{
  private:
    int a;
    int b;

  public:
    Arithmetic(int a, int b);
    int add();
    int sub();
};

Arithmetic::Arithmetic(int a, int b)
{
  this.a = a;
  this.b = b;
}

int Arithmetic::add()
{
  int c;
  c = a + b;
  return c;
}

int Arithmetic::sub()
{
  int c;
  c = a - b;
  return c;
}
*/

//RECTIFYING ABOVE CLASS TO TEMPLATE CLASS

template <class T>
class Arithmetic
{
  private:
    T a;
    T b;

  public:
    Arithmetic(T a, T b);
    T add();
    T sub();
    T get_a();
    T get_b();
};

template <class T>
Arithmetic <T>::Arithmetic(T a, T b)
{
  this->a = a;
  this->b = b;
}

template <class T>
T Arithmetic <T>::add()
{
  T c;
  c = a + b;
  return c;
}

template <class T>
T Arithmetic <T>::sub()
{
  T c;
  c = a - b;
  return c;
}

template <class T>
T Arithmetic <T>::get_a()
{
  return a;
}

template <class T>
T Arithmetic <T>::get_b()
{
  return b;
}
