#include <iostream>

using namespace std;
//Base class's pointer can be used by derieved class pointer
//But if any inherited function is called through pointer it will call base class pointer only!
//run-time polymorphism

class BaseClass
{
public:
    int varbase;
    void display()
    {
        cout << "This is a Base class variable " << varbase << endl;
    }
};

class DerievedClass : public BaseClass
{
public:
    int varderieved;
    void display()
    {
        cout << "This is a Base class variable " << varderieved << endl;
    }
};

int main()
{
    BaseClass * base_pointer;
    BaseClass obj_base;
    DerievedClass obj_derieved;
    base_pointer = &obj_derieved; //Base class pointer pointing to derieved class pointer
    base_pointer->varbase = 55;
    // base_pointer->varderieved = 5; // it will through error 
    base_pointer->display(); // late binding - it will run base class function

    DerievedClass * derieved = &obj_derieved;
    derieved->varderieved = 111;
    derieved->display();

    return 0;
}