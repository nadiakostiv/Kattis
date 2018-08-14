#include <cmath>
#include "Complex_number.h"

using namespace std; 

Complex_number::Complex_number(){
    real = 0;
    imaginary = 0;
}
Complex_number::Complex_number(double real1, double imag){
    real = real1;
    imaginary = imag;
}

Complex_number* Complex_number::add(Complex_number num){
    return new Complex_number(num.real + real, num.imaginary + imaginary);
}

double Complex_number::mag(){
    return (sqrt((real*real)+(imaginary*imaginary)));
}

Complex_number* Complex_number::square(){
    return new Complex_number(real*real - imaginary*imaginary, 2*real*imaginary);
}

