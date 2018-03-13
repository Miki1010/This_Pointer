#include <iostream>

using namespace std;

class Complex_Number
{
private:
    float real;
    float imaginary;
public:
    Complex_Number() : real(10.0),imaginary(20.0) {    // DEFAULT CONSTRUCTOR INITIALISATION LIST
       // real = 0.0 ,imaginary = 0.0 ;
    }
    void Set_complex(double r, double i) {
        real = r ;
        imaginary = i ;
    }
    double Get_real(){
        return real;
    }
    double Get_img(){
        return imaginary;
    }
    void print(){
        cout << "Real : " << real << " and Imaginary : " << imaginary <<endl;
    }
    void print_This() {
        cout << "Address of this Object object : " << this << endl;
        cout << "Real Part : " << this->real << "Img Part : " << this->imaginary << endl;
    }
};

int main()
{
    Complex_Number CN,CN2;       // Object of class OR variable of class
    CN.print();
    cout << "\nSize of CN Object :" << sizeof(CN) << endl;
    CN.print_This();
    CN.Set_complex(2.5,9.689);
    CN2 = CN ;                   // Copy Object state to object CN2
    CN.print();
    CN2.print();
    cout << "\nSize of CN2 Object :" << sizeof(CN2) << endl;
    CN2.print_This();
    return 0;
}
