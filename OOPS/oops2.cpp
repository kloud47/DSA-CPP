///////////////////////////////////////////////////////////////////////////////////
//////(Encapsulation)//////////////////////
/*#include<iostream>
using namespace std;

class person{
public:
  string name;
  int age;
  int height;

public:
  int getAge(){
    return this->age;
  }
};

int main()
{
  person man;

}*/
////////////////////////////////////////////////////////////////////////////////////
/////////////(Inheritance)//////////////////////////////////
//Inheriting properties of other classes
/*#include<iostream>
using namespace std;

class Human{//parent class
public:
  int height;
  int weight;
  int age;

public:
  int getweight(){
    return this->age;
  }

  int setweight(int w){
    this->weight = w;
  }
};

class Male: protected Human{//child class
public:
  string color;

  Male(){
    cout<<"Working"<<endl;
  }

  void sleep(){
    cout<<"Male sleeping "<<endl;
  }

  int getheight(){
      return this->height;
  }
};

int main()
{
  Male m1;
  cout<< m1.getheight() <<endl;
  //cout<<m1.height<<endl;//private mem not Accessible



  /*Male object;
  cout<<object.age<<endl;
  cout<<object.height<<endl;
  cout<<object.weight<<endl;

  cout<<object.color<<endl;
  object.setweight(60);
  cout<<"weight is "<< object.weight <<"kg "<<endl;
  object.sleep();

  return 0;
}*/
/////////////////////////(Types of Inheritance)/////////////////////////////////////
///////////(Single Inheritance)//////////////////////
/*#include<iostream>
using namespace std;

class Animal
{
public:
  int age;
  int weight;

public:
  void speak(){
    cout<< "Speaking "<< endl;
  }
};

class Dog: public Animal{

};

int main()
{
  Dog d;
  d.speak();
  cout<< d.age <<endl;


  return 0;
}*/
/////////////(Multi-level Algorithm)///////////////////////////////////////////////////
/*#include<iostream>
using namespace std;

class Animal{
public:
  int age;
  int weight;

public:
  void speak(){
    cout<< "Speaking  " <<endl;
  }
};

class Dog: public Animal{

};

class Germanshepherd: public Dog{

};

int main()
{
  Germanshepherd g;
  g.speak();



  return 0;
}*/
/////////////////(Multiple Inheritance)///////////////////////////////////////////////
/*#include<iostream>
using namespace std;

class Animal{
public:
  int age;
  int weight;

public:
  void bark(){
    cout<< "Bark  " <<endl;
  }
};

class Human{
public:
  string color;

public:
  void speak(){
    cout<<"Speaking "<<endl;
  }
};

class Hybrid: public Animal, public Human{//Multiple Inheritance

};

int main()
{
  Hybrid h1;
  h1.speak();
  h1.bark();
}*/
//////////////////////(Hierarchical Inheritance)///////////////////////////////////////
/*#include<iostream>
using namespace std;

class A{
public:
  void func1(){
    cout<<"Inside Function 1 "<<endl;
  }
};

class B: public A{
public:
  void func2(){
    cout<<"Inside Function 2 "<<endl;
  }
};

class C: public A{
public:
  void func3(){
    cout<<"Inside Function 3 "<<endl;
  }
};

int main()
{
  A object1;
  object1.func1();

  B object2;
  object2.func1();

  C object3;
  object3.func1();

  B object12;
  object12.func2();

  C object13;
  object13.func3();
}*/
//////////////////(Hybrid Inheritance)/////////////////////////////////////////////////
//Combination of more than one type of inheritance



///////////(Inheritance Ambiguity)/////////////////////////////////////////////////////
///Solved using scope resolution operator.
/*#include<iostream>
using namespace std;

class A{
public:
  void func(){
    cout<<"Class A "<<endl;
  }
};

class B{
public:
  void func(){
    cout<<"Class B "<<endl;
  }
};

class C: public A, public B{
  //Multiple Inheritance
};

int main()
{
  C object;
  object.A::func();
  object.B::func();
}*/
/////////////////////////////////////////////////////////////////////////////////////
//////////(Polymorphism)///////////////////////////////////////////////////////

//(((((((Compile time Polymorphism)))))))))))))))))))))

////////(Function overloading)///////////
/*#include<iostream>
using namespace std;

class A{
public:
  void func(){
    cout<<"fun 1 "<<endl;
  }

  void func(int n){
    cout<<"fun 2 "<<n<<endl;
  }

   string func(char n, string r){
    return r;
  }
};

int main()
{
  A object;
  cout<<object.func(3,"hh");
}*/
//////////////(Operator overloading)///////////////////////////////////////////
/*#include<iostream>
using namespace std;

class B{
public:
  int a;

  void operator+ (B &obj){
    int value1 =  this->a;
    int value2 = obj.a;
    cout<<"Output " << value1 - value2 <<endl;
  }

  void operator- (B &obj){
    cout<<"Hello Babbar "<<endl;
  }

  void operator() (){
    cout<<"I am a bracket "<<endl;
  }

  void operator/ (B &obj){
    int value1 = this->a;
    int value2 = obj.a;
    cout<<"Output "<< value1 * value2 <<endl;
  }

};

int main()
{
  B obj1, obj2;

  obj1.a = 4;
  obj2.a = 7;

  obj1 + obj2;
  obj1 - obj2;
  obj1();
  obj1 / obj2;
  obj2++;
}*/
////////////////////////////////////////////////////////////////////////////////////
//((((((((((((((((Run-Time Polymorphism)))))))))))))))))))))))))))))

/////////////(Method Overriding)/////////////////////////////
/*#include<iostream>
using namespace std;

class Animal{
public:
  void speak(){
    cout<< "Speaking " <<endl;
  }
};

class Dog: public Animal{
public:
  void speak(){
    cout<< "Barking "<<endl;
  }
};

int main()
{
  Dog obj;
  obj.speak();
}*/
////////////////////////////////////////////////////////////////////////////////////////////////
////////////(Scope resolution to resolve Ambiguity)//////////
/*#include<iostream>
using namespace std;

class A
{
private:
  int data = 1;
public:
  void say() { cout<<data; }
};

class B
{
private:
  int data = 2;
public:
  void say() { cout<<data; }
};

class Derived : public A , public B{
};

int main()
{
 Derived d;

 d.A::say();
 cout<<endl;
 d.B::say();
}*/

////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////(Virtual Base class)////(To resolve inheritance ambiguity)/////////////////
/*#include<iostream>
using namespace std;

class Student
{
protected:
  int rollno;
public:
  void setnum(int n){
    rollno = n;
  }

  void printnum(){
    cout<< "Your Roll.no is : "<< rollno<< endl;
  }
};

class test : virtual public Student
{
protected:
  float math, sci;
public:
  void set_marks(float a, float b){
    math = a; sci = b;
  }

  void printmarks(){
    cout<< "Mark in math is : "<<math<<endl;
    cout<< "Marks in sci is : "<<sci<<endl;
  }
};

class sport : virtual public Student
{
protected:
  int score;
public:
  void set_score(int s){
    score = s;
  }

  void printscore(){
    cout<< "Score is : "<<score<<endl;
  }
};

class result : public sport, public test
{
private:
  float total;
public:
  void display(void){
    total = math + score + sci;
    printnum();
    printmarks();
    printscore();

    cout<<"Your Total score is : "<<total<<endl;
  }
};

int main()
{
  result priyanshu;
  priyanshu.setnum(47);//Now no ambiguity while inheriting roll.no:
  priyanshu.set_marks(99.9, 98.8);
  priyanshu.set_score(10);
  priyanshu.display();
}*/
///////////////////////////////////////////////////////////////////////////////////////////
/*#include<iostream>
using namespace std;

class Baseclass
{
public:
  int var_base = 8;
  virtual void display(){
    cout<< "Displaying Base class variable : "<<var_base<<endl;
  }
};

class Derived : public Baseclass
{
public:
  int var_derive = 7;
  void display(){
    cout<< "Displaying derived class variable : "<<var_derive<<endl;
  }
};

int main()
{
  Baseclass *baseptr;
  Baseclass b;
  Derived d;
  baseptr = &d;

  baseptr->var_base = 6;
  d.var_derive = 9;

  baseptr->display();//not displaying data of derived class:
  //Because pointer is binded to the baase class:
}*/
/////////////////////////////////////////////////////////////////////////////////////////////////////
//(Derived class constructor and virtual function)/
#include<iostream>
using namespace std;

class CWH
{
protected:
  string title;
  float rating;
public:
  CWH(string s, float r){
    title = s;
    rating = r;
  }
  virtual void display();
};

class CWHVideo : public CWH{
  int videolen;
public:
  CWHVideo(string s, float r, int vl) : CWH(s, r){
    videolen = vl;
  }
};

class CWHText : public CWH{
  int words;
public:
  CWHText(string s, float r, int wc) : CWH(s, r){
    words = wc;
  }
  void display(){
    cout<< "This is an amazing text tutorial with title"<<title<<endl;
    cout<<"Rating of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
    cout<<"No words in this text"
  }
};

int main()
{

}
