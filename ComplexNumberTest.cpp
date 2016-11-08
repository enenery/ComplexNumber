//Anna Salvati
//Date: February 10, 2015
//Purpose: Test the class ComplexNumber overloaded operators <<, >>, +,==

#include "ComplexNumber.h"


int main ()
{
    ComplexNumber c1,c2,sum;

	cout<<"\nEnter a complex number in the form: a+bi (no spaces allowed)\n";
    cin>> c1;

	cout<<"\nEnter another complex number in the form: a+bi (no spaces allowed)\n";
    cin>> c2;

	sum = c1 + c2;
    cout<<"\nThe sum of "<< c1 << " and "<< c2<< " is " << sum;
	cin.get();
	if ( c1 == c2 )
            cout<<"\n\nThe two complex numbers entered are the same";
    else cout<<"\n\nThe two complex numbers entered are different\n\n";
	cin.get();
	return 0;
  }
