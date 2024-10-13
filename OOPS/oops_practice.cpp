//////////(Area of Rectangle)///////////////////////////////////////////////////
/*#include<iostream>
using namespace std;

class rect{
  int x,y;
public:
  rect(int a, int b){
    x = a;
    y = b;
  }

  void Area(){
    cout<<"Area is "<< x*y <<endl;
  }
};

int main()
{
  rect rect(3,6);
  rect.Area();
}*/
///////////////////////////////////////////////////////////////////////////////
/*#include <iostream>
using namespace std;

class Empty {
};

class Derived1 : public Empty {
};

class Derived2 : virtual public Empty {
};

class Derived3 : public Empty {
    int c;
};

class Derived4 : virtual public Empty {
    char c;
};

class Dummy {
    char c;
};

int main()
{
    cout << "sizeof(Empty) " << sizeof(Empty) << endl;
    cout << "sizeof(Derived1) " << sizeof(Derived1) << endl;
    cout << "sizeof(Derived2) " << sizeof(Derived2) << endl;
    cout << "sizeof(Derived3) " << sizeof(Derived3) << endl;
    cout << "sizeof(Derived4) " << sizeof(Derived4) << endl;
    cout << "Sizeof(Dummy) "<< sizeof(Dummy) << endl;

    return 0;
}*/
////////////////////////////////////////////////////////////////////////////////
//(((Getter & Setter)))
/*#include<iostream>
using namespace std;

class person{
private:
  int age;
  int power;
  string name;
public:
  int getpower(){//Modifications to age setter
    return power*10;
  }

  int getage(){
    return age;
  }

  void setage(int age){//validation statement in setter
    if(age < 0){
      throw "Age can't be negative ";//Throws an exception:
    }

    else{
      this->age = age;
    }
  }

  void setpower(int powr){
    power = powr;
  }
};

int main()
{
  person p1;
  p1.setage(-10);
  cout<<p1.getage()<<endl;

  p1.setpower(1000);
  cout<<p1.getpower()<<endl;
}*/
//////////////////(Disable padding)//////////////////////////////////////////////
/*#include<iostream>
using namespace std;

#pragma pack(1) //Disables padding

struct Base{
  char a;
  char b;
  char c;
  int i;
};

int main()
{
  cout<< sizeof(Base) <<endl;
}*/
///////////(Complex num operations)//////////////////////////////////////////////////////////////////////
/*#include <bits/stdc++.h>
#include<iostream>

using namespace std;

class ComplexNumbers {
    // Complete this class
  public:
    int r;
    int im;
    ComplexNumbers(int real, int imag){
      r = real;
      im = imag;
    }

    void plus(ComplexNumbers C){
      r = r + C.r;
      im = im + C.im;
    }

    void multiply(ComplexNumbers B){
      im = (r)*(B.im) + (B.r)*im;
      r = (r)*(B.r) - this->im*(B.im);
    }

    void print(){
      cout<< r<< " + "<<im<<"i";
    }


};

int main() {
    int real1, imaginary1, real2, imaginary2;

    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;

    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);

    int choice;
    cin >> choice;

    if (choice == 1) {
        c1.plus(c2);
        c1.print();
    } else if (choice == 2) {
        c1.multiply(c2);
        c1.print();
    } else {
        return 0;
    }
}*/
//////////////(Copy Constructor)///////////////////////////////////////////////////////////////////
/*#include<iostream>
using namespace std;

class Point{
private:
  int x, y;
public:
  Point(int x1, int y1){//Parameterized Constructor
    x = x1;
    y = y1;
  }

  //Copy Constructor
  Point(const Point& p1){
    x = p1.x;
    y = p1.y;
  }

  int getX() { return x;}
  int getY() { return y;}
};

int main()
{
  Point p1(10, 15);//Normal constructor is called
  Point p2(p1);//copy constructor called

  cout<<"p1.x = "<<p1.getX()
      <<"\np1.y = "<<p1.getY()<<endl;;
  cout<<"p2.x = "<<p2.getX()
      <<"\np2.y = "<<p2.getY();

  return 0;
}*/
//////////////(default copy constructor)////////////////////////////////////////////////////////////////////
/*#include<iostream>
using namespace std;

class Number{
  int num;
public:
  void input(int n) { num = n; }
  void display() { cout<<"\nNumber is =  "<<num; }
};

int main()
{
  Number n1;
  n1.input(10);
  n1.display();

  Number n2(n1);//default copy constructor called
  n2.input(11);//changing values of the copy constructor
  n2.display();

  //Another way of Copy
  Number n11;
  n11.input(111);
  n11.display(); cout<<" copy this ";

  Number n12 = n11;
  n12.display();
}*/
///////////(User-defined copy constructor)/////////////////////////////////////////
/*#include<iostream>
using namespace std;

class Football{
  int goals;
  int players;
public:
  Football(int g, int p);

  Football(Football& f1){ cout<<"Values are reversed copied ";
    goals = f1.players; players = f1.goals; }

  void display() { cout<<"\nvalues are = "<< goals<<" "<<players;}
};

//Parameterized Constructor using Scope resolution operator
Football::Football(int g, int p) { goals = g; players = p; }

int main()
{
  Football f1(10, 11);
  Football f2(f1);
  f1.display();
  f2.display();

}*/
////////////////(copy elision)//////////////////////////////////////////////////////////////////
//\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\///
/*#include<iostream>
struct C
{
  C() {}
  C(const C&) {std::cout<< " A copy was made. \n"; }
};

C f()
{
  return C();
}

int main()
{
  std::cout<< "Hello World!\n";
  C obj = f();
}*/
///////////////////////////////////////////////////////////////////////////////
///////////(Shallow copy)///////////////////////////////////////////
/*#include<iostream>
using namespace std;

class shallow{
public:
  int *n;
  int m;
};

int main()
{
  shallow obj1;
  obj1.n = 2;
  obj1.m = 5;

  shallow obj2(obj1);

  obj1.*n = 3;
  cout<< obj2.*n <<endl;
  cout<< obj2.m;
}*/
////////////////////////////////////////////////////////////////////////////////
////(Copy constructor and Assignment operator)///////////////
/*#include<iostream>
using namespace std;

class Test{
public:
  Test() {}
  Test(Test& t) { cout<<"Copy constructor is called. "<<endl; }

  Test& operator=(Test& t){//Operator overloading
    cout<<"Assignment operator called "<<endl;
    return *this;
  }
};

int main()
{
  Test t1, t2;
  t2 = t1;
  Test t3 = t1;

  return 0;
}*/
//////////////////////////////////////////
/*#include<iostream>
using namespace std;

class Hero{
public:
  int health;
  char level;

  void print(){
    cout<< health <<endl;
    cout<< level <<endl;
  }
};

int main()
{
  Hero hero1;
  Hero hero2;

  hero1.health = 10;
  hero1.level = 'c';

  hero2 = hero1;

  hero1.health = 3;

  hero1.print();
  hero2.print();
}*///its neither shallow copy nor deep copy
/////////////////////////////////////////////////////////////////////////////////
//////////(Method Overriding)///////////////////////////////
/*#include<iostream>
using namespace std;

class A{
protected:
  int a = 2;
  int b = 3;
public:
  int func(){ return a; }
};

class B: public A{
public:
  int func(){ return b; }
};

int main()
{
  B obj;
  cout<<obj.func();
}*/
///////////////////////////////////////////////////////////////////////////////////////
/////////(Fibonacci series using oops)///////////////
/*#include<iostream>
using namespace std;

class fibo{
public:
  int terms;
  fibo(int n){
    terms = n;
  }
};


int fib(int n)
{
  if(n == 0 || n == 1){
    return n;
  }

  return fib(n-1) + fib(n-2);
}

int main()
{
  cout<<"Enter the range-> ";
  int n;
  cin>>n;

  fibo series(n);
  int num = series.terms;
  int i = 0;
  while(i < num){
    cout<< fib(i) <<" ";
    i++;
  }
}*/
//////////////////////////////////////////////////////////
/*#include<iostream>
using namespace std;

class fibonacci{
public:
  int terms;
  fibonacci(){
    int n;
    cout<<"Enter the range-> ";
    cin>>n;
    terms = n;
  }

  int fib(int n){
    if(n == 0 || n == 1){
      return n;
    }
    return fib(n-1) + fib(n-2);
  }

  void print(){
    int i = 0;
    while(i < terms){
      cout<< fib(i) <<" ";
      i++;
    }
  }
};

int main(){
  fibonacci series;

  series.print();
}*/
/////////////////////////////////////////////////////////////////////////
///////(friend function practice)/////
/*#include<iostream>
using namespace std;

class Y;

class X
{
  int data;
public:
  void setdata(int x){
    data = x;
    cout<< "Data of X is : "<<data<<endl;
  }
  friend void add(X, Y);
};

class Y
{
  int data;
public:
  void setdata(int y){
    data = y;
    cout<<"Data of Y is : "<<data<<endl;
  }
  friend void add(X, Y);
};

void add(X ox, Y oy){
  cout<< "Summing data of X and Y objects "<< ox.data + oy.data <<endl;
}

int main()
{
  X o1; o1.setdata(2);
  Y o2; o2.setdata(3);

  add(o1, o2);
}*/
/////////////////////////////////////////////////////////////////////////////////////////
/*#include<bits/stdc++.h>
using namespace std;

class B;//Forward declaration:

class A
{
  int val1;
public:
  void setdata(int a){
    val1 = a;
  }
  friend void print(A , B);
  friend void exchange(A &obja, B &objb);
};

class B
{
  int val2;
public:
  void setdata(int b){
    val2 = b;
  }
  friend void print(A , B);
  friend void exchange(A &obja, B &objb);
};

void print(A obj_a, B obj_b){
  cout<< "Value of A is : " << obj_a.val1 <<endl;
  cout<< "Value of B is : " << obj_b.val2 <<endl;
}

void exchange(A &obja, B &objb){
  swap(obja.val1, objb.val2);
}

int main()
{
  A a;
  B b;
  a.setdata(39);
  b.setdata(87);
  print(a, b); cout<<endl;

  exchange(a, b);
  print(a, b);
}*/
