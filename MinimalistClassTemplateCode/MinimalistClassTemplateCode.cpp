/*
Minimalist Class Template Code
Easton Tuttle
Computer Science II
September 7, 2017
*/

// Can includ <string> if a string is wanted to be passed as a data type.
//#include <string>
#include "stdafx.h"
#include <iostream>
using namespace std;

// Create the class template using "Type" as the template data type.
template <class Type>
class templateClass
{
	// Add a public template function (in this case a constructor) that prints out the passed through parameter.
public:
	templateClass(Type parameter)
	{
		cout << parameter << "\n";
	}
};

int main()
{
	// Call the constructor and imply the type used.
	templateClass<float> newTemplateClass(22.1323);
}

