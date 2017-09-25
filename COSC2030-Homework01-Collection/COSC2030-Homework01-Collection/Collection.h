/*
Collection.h
Easton Tuttle
Computer Science II
September 15, 2017
*/

#ifndef COLLECTION_H
#define COLLECTION_H
template <class Type>
class Collection
{
private:
	Type *objects;
	int size;

public:
	// Construct the collection using the size supplied.
	Collection(int arraySize);
	// Deallocate the collection.
	~Collection();
	// Return true if the collection is empty and false if not empty.
	bool isEmpty();
	// Remove all objects from the collection.
	void makeEmpty();
	// Inserts an object into the collection.
	void insert(Type object);
	// Removes an object from the collection.
	void remove(Type object);
	// Removes a random object from the collection.
	void removeRandom();
	// Returns true if an object equal to "object" is not present in the collection.
	bool notContained(Type object);
	// Prints out the contents of the collection.
	void print();
};
#endif