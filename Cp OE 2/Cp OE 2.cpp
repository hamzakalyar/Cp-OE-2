#include <iostream>
#include <string>

using namespace std;

struct Book
{
    string title;
    string author;
    int publication_year;
    string genre;
};

Book books[6];

void input_details(Book books[6])
{
    for (int i = 0; i < 6; i++)
    {
        cout << "Enter the title of Book " << i + 1 << ": ";
        getline(cin, books[i].title);
        cout << "Enter the name of the author of Book " << i + 1 << ": ";
        getline(cin, books[i].author);
        cout << "Enter its publication year of Book " << i + 1 << ": ";
        cin >> books[i].publication_year;
        cin.ignore();
        cout << "Enter its genre (Fiction / Non-Fiction) of Book " << i + 1 << ": ";
        getline(cin, books[i].genre);
        cout << endl << endl;
    }
}

void displayAllBooks(const Book arr[], int size)
{
    cout << "All Books Information:\n";
    for (int i = 0; i < size; i++)
    {
        cout << "Title: " << arr[i].title << ", Author: " << arr[i].author
            << ", Publication Year: " << arr[i].publication_year << ", Genre: " << arr[i].genre << endl;
    }
}

void Category()
{
    string fiction[6];
    string non_fiction[6];

    for (int i = 0; i < 6; i++)
    {
        if (books[i].genre == "Fiction")
        {
            fiction[i] = books[i].title;
        }
        else if (books[i].genre == "Non-Fiction")
        {
            non_fiction[i] = books[i].title;
        }
    }


}

void findEarliestPublication(Book arr[], int size)
{
    int earliestIndex = 0;

    for (int i = 1; i < size; i++)
    {
        if (arr[i].publication_year < arr[earliestIndex].publication_year)
        {
            earliestIndex = i;
        }
    }

    cout << "Book with the earliest publication year:\n";
    cout << "Title: " << arr[earliestIndex].title << ", Author: " << arr[earliestIndex].author << ", Publication Year: " << arr[earliestIndex].publication_year << ", Genre: " << arr[earliestIndex].genre << endl;
}

int main()
{
    input_details(books);
    cout << endl << endl;
    system("cls")
        displayAllBooks(books, 6);
    cout << endl << endl;
    Category();
    findEarliestPublication(books, 6);
    return 0;
}
