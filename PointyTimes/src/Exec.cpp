/*
 * Exec.cpp
 *
 *  Created on: Aug 16, 2021
 *      Author: nathan-host
 */

#include <iostream>
using namespace std;
class Book{
public:
	string title;
	string author;
	string genre;
	int pages;
};
int main(){
	Book book1;
	book1.title = "Red Mars";
	book1.author = "Kim Stanley Robinson";
	book1.genre = "Science Fiction";
	book1.pages = 563;
	Book book2;
	book2.title = "The Demon Haunted World: Science As A Candle In The Dark";
	book2.author = "Carl Sagan";
	book2.genre = "Non-Fiction";
	book2.pages = 368;
	cout << book1.title << endl;
	cout << book2.title;

	return 0;
}
