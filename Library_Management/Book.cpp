#include "Book.h"

#include <iostream>
#include <string>

using namespace std;

Book::Book(int isbn, string title, int noofauthors, string* author, Date published, string genre, int noofcopies)
{
	this->ISBN = isbn;
	this->Title = title;
	Author = new string[noofauthors];
	for (int i = 0; i < noofauthors; i++)
	{
		Author[i] = author[i];
	}
	this->NumberOfAuthors = noofauthors;
	this->PublishDate = published;
	this->Genre = genre;
	this ->NoOfCopies = noofcopies
}

Book::Book(string Title)
{
	this->Title = Title;
}

Book::Book(int ISBN, string Title)
{
	this->ISBN = ISBN;
	this->Title = Title;
}

