///(Static Data Member)///////////////////////////////////////////////////////////////////////////////////////////
/*#include<iostream>
using namespace std;

class Employee{
    int id;
public:
    static int count;// all Object share the same memory for count:

public:
    void setData(void){
        cout<< "Enter the Id" <<endl;
        cin>>id;
    }
    void getData(void){
        cout<< "The Id of this employee is "<<id<<" and its count is "<<count<<endl;
    }
};

int Employee:: count = 1; //by Default value is set to 0:

int main(){
    Employee Harry, Rohan, Lovely;//share same count memory:

    Harry.setData();
    Harry.getData();

    Rohan.setData();
    Rohan.getData();

    Lovely.setData();
    Lovely.getData();

    cout<<Harry.count;
}*/
///(Static Function)///////////////////////////////////////////////////////////////////////////////////////////
/*#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count;
public:
    void setData(void){
        cout<< "Enter the Id "; cin>>id;
        count++;
    }

    void getData(void){
        cout<< "The id of this Employee is "<<id<< " and its count is "<<count<<endl;
    }

    static void getcount(void){
        // cout<<id; //Throws ERROR since id is not static data member:
        cout<<"The value of count is "<<count<<endl;
    }
};

int Employee:: count = 2;

int main(int argc, char* argv){
    Employee Harry, Rohan, Lovely;//share same count memory:

    Harry.setData();
    Harry.getData();
    Employee:: getcount();

    Rohan.setData();
    Rohan.getData();
    Employee:: getcount();

    Lovely.setData();
    Lovely.getData();
    Employee:: getcount();

}*/
///////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

extern int s_variable;

int main()
{
    cout<< s_variable <<endl;
}