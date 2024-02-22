#include<iostream>
using namespace std;

class Demo      // Class Defination
{
    public:     // Access Specifier
        int i;      // Chracteristics
        int j;      // Chracteristics

        Demo()  // Default constructor
        {
            cout<<"Inside default constructor\n";
            this->i = 0;
            this->j = 0;
            cout<<i<<" "<<j<<"\n";
        }

        // int A = 11;
        // int B = 21;
        Demo(int A, int B)  // Parametrised Constructor
        {
            cout<<"Inside parametrised constructor\n";
            this->i = A;
            this->j = B;
            cout<<i<<" "<<j<<"\n";
        }

        // Demo &ref = obj2;
        Demo(Demo &ref)     // Copy constructor
        {
            cout<<"Inside Copy constructor\n";
            this->i = ref.i;
            this->j = ref.j;
            cout<<i<<" "<<j<<"\n";
        }

        ~Demo()
        {
            cout<<"Inside Destructor\n";
        }
};

int main()
{
    Demo obj1;
    Demo obj2(11,21);
    Demo obj3(obj2);

    return 0;
}