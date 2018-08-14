#include <cmath>
using namespace std; 

// #ifndef Complex_number
// #define Complex_number

class Complex_number
{
    private: 

        double real;
        double imaginary;

    public:

        Complex_number();
        Complex_number(double real1, double imag);

        Complex_number* add(Complex_number num);

        double mag();

        Complex_number* square();

};

// #endif