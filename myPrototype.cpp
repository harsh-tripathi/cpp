#include <iostream>
#include <string>
//Abstract Class and Pure Virtual Function.
//Pure Virtual Function. - An inherited class should override it!
//Abstract Class is not used to make class. & it has atleast one virtual function.
//Code may not work.

using namespace std;

class Harsh
{
protected:
    string title;
    float num;

public:
    Harsh(String s, float r)
    {
        strcpy(title, s)
        {
            num = r;
        }
    }
    virtual void display() = 0; //Do Nothing function --> Pure virtual function
};

class HarshVideo : public Harsh
{
    int videolength;

public:
    HarshVideo(String s, float r, int vl) : CWH(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "This is title " << title << endl;
        cout << "This is Rating " << num << endl;
        cout << "This is video length " << vl << endl;
    }
};
class HarshText : public Harsh
{
    int text;

public:
    HarshText(String s, float r, int wc) : CWH(s, r)
    {
        text = wc;
    }
    void display()
    {

        cout << "This is a title " << title << endl;
        cout << "This is a Rating " << num << endl;
        cout << "This is text length " << wc << endl;
    }
};

int main()
{
    String title;
    float rating, vlen;

    title = "This is title";
    vlen = 44;
    rating = 3;

    HarshVideo Video(title, rating, vlen);
    Video.display();
}
//Rules for definind Virtual Function
/*
1. They are not static.
2. They are accessed by pointers.
3. Virtual function can be a friend of another class.
4. A virtual funtion in a Base class might not be used.
5. If a virtual function defined in the base class it is not necessary to redefine it. It will call the base class virtual function.
*/