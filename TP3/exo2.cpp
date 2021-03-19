#include "tp3.h"
#include <QApplication>
#include <time.h>

MainWindow* w = nullptr;
using std::size_t;


void binarySearchAll(Array& array, int toSearch, int& indexMin, int& indexMax)
{
    indexMin = indexMax = -1;

    int start = 0;
    int end = array.size();

    while (start < end){

        int middle = (start+end)/2;

        if(toSearch>array[middle]){
            start=middle+1;
        }

        else if(toSearch<array[middle]){
            end=middle;
        }

        else{
            indexMin=middle;
            end=middle;
        }
    }


    start=0;
    end=array.size();

    while(start<end){

        int middle=(start+end)/2;

        if(toSearch>array[middle]){
            start=middle+1;
        }

        else if (toSearch<array[middle]){
            end=middle;
        }

        else{
            indexMax=middle;
            start=middle+1;
        }
    }
}
}

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MainWindow::instruction_duration = 500;
	w = new BinarySearchAllWindow(binarySearchAll);
	w->show();

	return a.exec();
}
