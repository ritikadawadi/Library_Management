#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book
{
private:
	int ISBN;
	string Title;
	int NumberOfAuthors;
	string* Author;
	Date PublishDate;
	string Genre;
	bool Availability;
	Member Waitlist[];
	int Times_Borrowed;
	string ShelfLocation;
	int NumofCopies;

public:
	Book(string);
	Book(int, string);
	Book(int, string, int, string*, Date, string);

	void addToWaitList(int);
	void removeFromWaitList(int);

	void makeUnavailable();
	void makeAvailable();

	string getTitle();
	void setTitle(string);

	int getISBN();
	void setISBN(int);

	string getGenre();
	void setGenre(string);

	int getTimesofBorrowed();

	void setLocation(string);
	string SearchBook(int);

};
#endif