#include <iostream>
#include <math.h>
#include <cmath>
#include <stdlib.h>

//Calculator using C++

using namespace std;

const double pi = 3.14259;

class simpleCalc
{
protected:
    float x, y, add, multiple, substract, divide;

public:
    void getNumber(float, float);
    void performAction(void);
    void displayResult(void);
};

void simpleCalc ::getNumber(float a, float b)
{
    x = a;
    y = b;
}

void simpleCalc ::performAction()
{
    add = x + y;
    substract = x - y;
    multiple = x * y;
    divide = x / y;
}

void simpleCalc ::displayResult()
{
    cout << "The Addition of given numbers is : " << add << endl;
    cout << "The Substraction of given numbers is : " << substract << endl;
    cout << "The Multiplication of given numbers is : " << multiple << endl;
    cout << "The Division of given numbers is : " << divide << endl;
}

class scientificCalc
{
protected:
    double a, b, sine, cosine, tan, log;

public:
    void getInput(float, float);
    void performScientificAction(void);
    void displayOutput(void);
};

void scientificCalc ::getInput(float q, float r)
{
    a = q;
    b = r;
}

void scientificCalc ::performScientificAction()
{
    sine = sin(a);
    cosine = cos(a);
    tan = tanh(a);
    log = log10(b);
}

void scientificCalc ::displayOutput()
{
    cout << "The Sine of given number is : " << sine << endl;
    cout << "The cosine of given number is : " << cosine << endl;
    cout << "The tan of given number is : " << tan << endl;
    cout << "The log with base 10 of given number is : " << log << endl;
}

class hybridCalc : public simpleCalc, public scientificCalc
{
};

int main()
{
    hybridCalc h1;
    h1.getNumber(5.0, 2.0);
    h1.performAction();
    h1.displayResult();

    h1.getInput(pi / 4, 100);
    h1.performScientificAction();
    h1.displayOutput();
    return 0;
}
