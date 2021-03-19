#include <tp5.h>
#include <QApplication>
#include <time.h>

MainWindow* w = nullptr;


std::vector<string> TP5::names(
{
    "Yolo", "Anastasiya", "Clement", "Sirine", "Julien", "Sacha", "Leo", "Margot",
    "JoLeClodo", "Anais", "Jolan", "Marie", "Cindy", "Flavien", "Tanguy", "Audrey",
    "Mr.PeanutButter", "Bojack", "Mugiwara", "Sully", "Solem",
    "Leo", "Nils", "Vincent", "Paul", "Zoe", "Julien", "Matteo",
    "Fanny", "Jeanne", "Elo"
});


int HashTable::hash(std::string element)
{
    // use this->size() to get HashTable size
    int size_tab = this->size();
    int hash_value = 0;
    hash_value = (int)element[1];

    return hash_value % size_tab;

}

void HashTable::insert(std::string element)
{
    // use (*this)[i] or this->get(i) to get a value at index i
    int indice = hash(element);
    this->get(indice) = element;
}

/**
 * @brief buildHashTable: fill the HashTable with given names
 * @param table table to fiil
 * @param names array of names to insert
 * @param namesCount size of names array
 */
void buildHashTable(HashTable& table, std::string* names, int namesCount)
{

    for(int i = 0; i<namesCount; i++){
        table.insert(names[i]);
    }
}

bool HashTable::contains(std::string element)
{
    // Note: Do not use iteration (for, while, ...)
    if(this->get(hash(element)) == element)
        return true;
    else
        return false;
}


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MainWindow::instruction_duration = 10;
	w = new HashWindow();
	w->show();

	return a.exec();
}
