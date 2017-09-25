/*
Collection Class Template
Easton Tuttle
Computer Science II
September 8, 2017
*/

#include "stdafx.h"
#include "Collection.h"
#include "Collection.cpp"
#include <iostream>
#include <string>

using std::string;
using std::cout;

// Test the collection using integer values.
void integerTest()
{
	// Create an integer collection for testing.
	Collection<int> intArray(3);

	// Insert elements into the collection.
	intArray.insert(1);
	intArray.insert(100);
	intArray.insert(9);

	// Print the collection in order to view what is inside the collection.
	intArray.print();

	// Remove an element of the collection.
	intArray.remove(9);
	intArray.print();

	// Check if the collection is empty or not.
	if (intArray.isEmpty())
	{
		cout << "\nThe collection is currently empty.";
	}
	else
	{
		cout << "\nThe collection is not currently empty.";
	}

	// Check if an element is contained in the collection.
	if (intArray.notContained(9))
	{
		cout << "\n9 is not contained in the collection.";
	}
	else
	{
		cout << "\n9 is contained in the collection.";
	}

	// Remove a random object from the collection.
	intArray.removeRandom();
	intArray.print();

	// Check if the collection is empty or not.
	if (intArray.isEmpty())
	{
		cout << "\nThe collection is currently empty.";
	}
	else
	{
		cout << "\nThe collection is not currently empty.";
	}

	// Check if an element is contained in the collection.
	if (intArray.notContained(9))
	{
		cout << "\n9 is not contained in the collection.";
	}
	else
	{
		cout << "\n9 is contained in the collection.";
	}

	// Ensure that makeEmpty empties the collection.
	intArray.makeEmpty();

	if (intArray.isEmpty())
	{
		cout << "\nThe collection is currently empty.";
	}
	else
	{
		cout << "\nThe collection is not currently empty.";
	}

	if (intArray.notContained(9))
	{
		cout << "\n9 is not contained in the collection.";
	}
	else
	{
		cout << "\n9 is contained in the collection.";
	}

	// Ensure that calling makeEmpty on an empty array does not cause an error.
	intArray.makeEmpty();
	intArray.print();
}

void doubleTest()
{
	// Create an doubleeger collection for testing.
	Collection<double> doubleArray(3);

	// Insert elements doubleo the collection.
	doubleArray.insert(11.1);
	doubleArray.insert(10.230);
	doubleArray.insert(900.5);

	// Prdouble the collection in order to view what is inside the collection.
	doubleArray.print();

	// Remove an element of the collection.
	doubleArray.remove(10.230);
	doubleArray.print();

	// Check if the collection is empty or not.
	if (doubleArray.isEmpty())
	{
		cout << "\nThe collection is currently empty.";
	}
	else
	{
		cout << "\nThe collection is not currently empty.";
	}

	// Check if an element is contained in the collection.
	if (doubleArray.notContained(10.230))
	{
		cout << "\n9 is not contained in the collection.";
	}
	else
	{
		cout << "\n9 is contained in the collection.";
	}

	// Remove a random object from the collection.
	doubleArray.removeRandom();
	doubleArray.print();

	// Check if the collection is empty or not.
	if (doubleArray.isEmpty())
	{
		cout << "\nThe collection is currently empty.";
	}
	else
	{
		cout << "\nThe collection is not currently empty.";
	}

	// Check if an element is contained in the collection.
	if (doubleArray.notContained(10.230))
	{
		cout << "\n9 is not contained in the collection.";
	}
	else
	{
		cout << "\n9 is contained in the collection.";
	}

	// Ensure that makeEmpty empties the collection.
	doubleArray.makeEmpty();

	if (doubleArray.isEmpty())
	{
		cout << "\nThe collection is currently empty.";
	}
	else
	{
		cout << "\nThe collection is not currently empty.";
	}

	if (doubleArray.notContained(10.230))
	{
		cout << "\n9 is not contained in the collection.";
	}
	else
	{
		cout << "\n9 is contained in the collection.";
	}

	// Ensure that calling makeEmpty on an empty array does not cause an error.
	doubleArray.makeEmpty();
	doubleArray.print();
}

void floatTest()
{
	// Create an floateger collection for testing.
	Collection<float> floatArray(3);

	// Insert elements floato the collection.
	floatArray.insert(34.0000);
	floatArray.insert(421.534);
	floatArray.insert(0.6635);

	// Prfloat the collection in order to view what is inside the collection.
	floatArray.print();

	// Remove an element of the collection.
	floatArray.remove(0.6635);
	floatArray.print();

	// Check if the collection is empty or not.
	if (floatArray.isEmpty())
	{
		cout << "\nThe collection is currently empty.";
	}
	else
	{
		cout << "\nThe collection is not currently empty.";
	}

	// Check if an element is contained in the collection.
	if (floatArray.notContained(0.6635))
	{
		cout << "\n9 is not contained in the collection.";
	}
	else
	{
		cout << "\n9 is contained in the collection.";
	}

	// Remove a random object from the collection.
	floatArray.removeRandom();
	floatArray.print();

	// Check if the collection is empty or not.
	if (floatArray.isEmpty())
	{
		cout << "\nThe collection is currently empty.";
	}
	else
	{
		cout << "\nThe collection is not currently empty.";
	}

	// Check if an element is contained in the collection.
	if (floatArray.notContained(0.6635))
	{
		cout << "\n9 is not contained in the collection.";
	}
	else
	{
		cout << "\n9 is contained in the collection.";
	}

	// Ensure that makeEmpty empties the collection.
	floatArray.makeEmpty();

	if (floatArray.isEmpty())
	{
		cout << "\nThe collection is currently empty.";
	}
	else
	{
		cout << "\nThe collection is not currently empty.";
	}

	if (floatArray.notContained(0.6635))
	{
		cout << "\n9 is not contained in the collection.";
	}
	else
	{
		cout << "\n9 is contained in the collection.";
	}

	// Ensure that calling makeEmpty on an empty array does not cause an error.
	floatArray.makeEmpty();
	floatArray.print();
}

// Provides testing of the Collection template class.
int main()
{
	integerTest();
	doubleTest();
	floatTest();
	return 0;
}