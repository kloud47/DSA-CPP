///(Templates)//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*#include<iostream>
using namespace std;

template<class T>
class vector
{
public:
    T *arr;
    int size;
    vector(int m){//constructor:
        size = m;
        arr = new T[size];
    }

    T dotproduct(vector &v){
        T dot = 0;
        for(int  i = 0; i < size; i++){
            dot += this->arr[i] * v.arr[i];
        }
        return dot;
    }
};

int main()
{
    vector <float> v1(3);
    v1.arr[0] = 4.3;
    v1.arr[1] = 3.6;
    v1.arr[2] = 1.1;

    vector <float> v2(3);
    v2.arr[0] = 8;
    v2.arr[1] = 7;
    v2.arr[2] = 3;

    float a = v1.dotproduct(v2);
    cout<< a <<endl;

    return 0;
}*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///(Templates with multiple parameters)////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*#include<iostream>
using namespace std;


template <class A, class B>
class myclass
{
public:
    A data1;
    B data2;
    myclass(A a, B b){
        data1 = a;
        data2 = b;
    }

    void display()
    {
        cout << this->data1 << endl << this->data2 << endl;
    }
};

int main()
{
    myclass <int, string> obj(1, "hello");
    obj.display();

    return 0;
}*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///(Templates with default parameters)/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*#include<iostream>
using namespace std;

template <class T1=int, class T2=char>
class print
{
public:
    T1 a;
    T2 b;
    print(T1 x, T2 y){
        a = x, b = y;
    }

    void display(){
        cout << a << endl << b <<endl;
    }
};

int main()
{
    print<> obj(1, 1);
    obj.display();

    return 0;
}*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///(Function Templates (with parameters))////////////////////////////////////////////////////////////////////////////////////////////
/*#include<iostream>
using namespace std;

template <class T1, class T2>// no need to define different funuction now:
float funcAVG(T1 a, T2 b){
    return (a+b)/2;
}

template <class T>
void swapp(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    float avg = funcAVG(1, 3.4);
    printf("The Average of these numbers is %f", avg);
    cout << endl;
    float a = 3.0;
    float b = 4.4;
    swap( a, b);

    cout<< a << endl << b;

    return 0;
}*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///(overloading template functions)//////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

template <class T>
class data
{
public:
    T n;
    data(T a){
        n = a;
    }

    void display();
};

template <class T>
void data <T>:: display(){
    cout << n <<endl;
}

void func(int a){
    cout << "I am first func()."<< endl;
}

template <class T> // Overloaded function:
void func(T a){
    cout << "I am second func()."<< endl;
}

int main()
{
    data <char> d('h');
    d.display();

    func(8);
    func('l');
    func1('g');

    return 0;
}