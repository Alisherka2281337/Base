#include <iostream>
#include <vector>
#include <string>
#include <ctime>
using namespace std;


class Book {
    int id_for_Book = 1;
    unsigned long int id_Book;
    string name_Book;
    string author_Book;
    string genre_Book;
    bool availability_Book; // true = в наличии    false = выдана
public:
    Book(string name, string author, string genre) : id_Book(id_Book), name_Book(name), author_Book(author),
                                                     genre_Book(genre) {
        id_Book = id_for_Book;
        id_for_Book++;
    };

    ~Book() {
    };
    unsigned long int print_id_Book() const { return id_Book; }

    string print(string coef) const {
        if (coef == "name_Book") return name_Book;
        if (coef == "author_Book") return author_Book;
        if (coef == "genre_Book") return genre_Book;
    }
};

class Reader {
    int id_for_Reader = 1;
    int id_Reader;
    string name_Reader;
    vector<Book> listOfTakenBooks_Reader;

public:
    Reader(string name_Reader) : name_Reader(name_Reader) {
        id_Reader = id_for_Reader;
        id_for_Reader++;
    };
};

class Library {
    vector<Book> books;
    vector<Reader> readers;

public:
    void addBook(const Book &book) { books.push_back(book); }
    void addReader(const Reader &reader) { readers.push_back(reader); }
};

int pluss(int a, int b) {
    return a + b;
}

int main() {
    cout << pluss(2, 2);
    srand(time(0));
    Library library;
    library.addBook(Book("1984", "Джордж Оруэлл", "Антиутопия"));
    library.addBook(Book("Мастер и Маргарита", "Михаил Булгаков", "Роман"));
    library.addBook(Book("Война и мир", "Лев Толстой", "Исторический роман"));

    library.addReader(Reader("Алишер"));
    library.addReader(Reader("Айдар"));
    return 0;
}
