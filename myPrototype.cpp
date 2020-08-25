#include <iostream>

using namespace std;
//Virtual Functions 
class BaseClass
{
public:
    int varbase = 1;
    virtual void display() // virtual functions helps to achieve runtime polymorphism
    {
        cout << "This is a Base class variable " << varbase << endl;
    }
};

class DerievedClass : public BaseClass
{
public:
    int varderieved = 2;
    void display()
    {
        cout << "This is a Base class variable " << varderieved << endl;
    }
};

int main()
{
    BaseClass * base_pointer;
    BaseClass baseobj;
    DerievedClass derobj;
    base_pointer = &derobj;
    base_pointer->display();//it will call derieved class method.
    return 0;
}