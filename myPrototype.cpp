#include <iostream>
#include <string>

using namespace std;

class Ayush
{
protected:
    string title;
    float num;

public:
    Ayush(String s, float r)
    {
        strcpy(title, s)
        {
            num = r;
        }
    }
    virtual void display() {}
};

class AyushVideo : public Ayush
{
    int videolength;

public:
    AyushVideo(String s, float r, int vl) : CWH(s, r)
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
class AyushText : public Ayush
{
    int text;

public:
    AyushText(String s, float r, int wc) : CWH(s, r)
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

    AyushVideo Video(title, rating, vlen);
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