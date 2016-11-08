#include "ComplexNumber.h"

ostream& operator<< (ostream& out, ComplexNumber c)
{
   return out<<c.realpart<< " + " <<c.imagpart<<"i";
}

istream& operator>> (istream& in , ComplexNumber& c)
{
   char symbol;   // to discard the + and the i parts of the complex number

   return in>>c.realpart>>symbol>>c.imagpart>>symbol;

}

ComplexNumber:: ComplexNumber ( double r, double i )
{
   realpart = r;
   imagpart = i;
}

ComplexNumber ComplexNumber :: operator+ ( ComplexNumber c )
{
  ComplexNumber temp;

  temp.realpart = realpart + c.realpart;
  temp.imagpart = imagpart + c.imagpart;

  return temp;
}

bool ComplexNumber :: operator== ( ComplexNumber c )
{
   return ( realpart == c.realpart && imagpart == c.imagpart );
}
