//Anna Salvati
//Date: February 10, 2015
//Purpose: The ComplexNumber class stores a complex number (real part and imaginary part)
//         and provides operator overloading for: input, output, addition and equality
//         of complex numbers.

#include <iostream>
using namespace std;

#ifndef ComplexNumber_h
#define ComplexNumber_h

class ComplexNumber
{
   //Overloaded operator<< allows for printing of complex number in the form a+bi
   friend ostream& operator<< (ostream&, ComplexNumber);

   //Overloaded operator>> allows for input of complex number in the form a+bi
   friend istream& operator>> (istream&, ComplexNumber&); 
  
   private:
      double realpart;   // stores real part of imaginary number
	  double imagpart;   // stores imaginary part of imaginary number

   public:
      // constructor with default parameters
      ComplexNumber ( double = 0, double = 0 ); 

	  //Overloaded operator+ returns a complex number which represents
	  //the sum of self and parameter
      ComplexNumber operator+ ( ComplexNumber );
      
	  //Overloaded operator== returns true if self equals parameter 
	  bool operator== ( ComplexNumber );
};
#endif
