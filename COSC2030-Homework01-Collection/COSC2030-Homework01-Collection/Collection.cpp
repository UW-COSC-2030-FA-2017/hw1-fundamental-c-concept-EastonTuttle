/*
Collection Class Template
Easton Tuttle
Computer Science II
September 8, 2017
*/

#include "stdafx.h"
#include "Collection.h"
#include <utility>
#include <cstdlib>

template<class Type>
inline Collection<Type>::Collection(int arraySize)
{
	size = arraySize;
	objects = new Type[size];
}

template<class Type>
Collection<Type>::~Collection()
{
	delete objects;
}

template<class Type>
bool Collection<Type>::isEmpty()
{
	if (objects[0] == NULL)
	{
		return true;
	}
	return false;
}

template<class Type>
void Collection<Type>::makeEmpty()
{
	if (!isEmpty())
	{
		for (int i = 0; i < size; i++)
		{
			objects[i] = NULL;
		}
	}
	else
	{
		return;
	}
}

template<class Type>
void Collection<Type>::insert(Type object)
{
	Type *tempArray = new Type[size + 1];
	int i = 0;
	for (int i = 0; i < size; i++)
	{
		tempArray[i] = objects[i];
	}
	tempArray[i] = object;
	delete objects;
	objects = new Type[size + 1];
	for (int j = 0; j < size; j++)
	{
		objects[j] = tempArray[j];
	}
}

template<class Type>
void Collection<Type>::remove(Type object)
{
	if (!isEmpty())
	{
		if (!notContained(object))
		{
			for (int i = 0; i < size; i++)
			{
				if (objects[i] == object)
				{
					objects[i] = 0;
				}
			}
		}
	}
}

template<class Type>
void Collection<Type>::removeRandom()
{
	if (!isEmpty())
	{
		objects[rand()] = NULL;
	}
}

template<class Type>
bool Collection<Type>::notContained(Type object)
{
	if (!isEmpty())
	{
		for (int i = 0; i <= size; i++)
		{
			if (objects[i] == object)
			{
				return false;
			}
			else
			{
				return true;
			}
		}
	}
	else
	{
		return true;
	}
}

template<class Type>
void Collection<Type>::print()
{
	cout << "\nThe objects inside of this collection include: ";
	for (int i = 0; i < size; i++)
	{
		cout << objects[i];
	}
}