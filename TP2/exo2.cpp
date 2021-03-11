#include <QApplication>
#include <time.h>

#include "tp2.h"

MainWindow* w=nullptr;

void insertionSort(Array& toSort){
    Array& sorted=w->newArray(toSort.size());
        sorted[0]=toSort[0];

        for(int i=1;i<(int)toSort.size();i++){
            int j;
            for(j=0;j<i;j++){
                if(sorted[j]>toSort[i]){
                    break;
                }
            }
            sorted.insert(j,toSort[i]);
        }
        toSort=sorted;

}

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
    uint elementCount=15; // number of elements to sort
    MainWindow::instruction_duration = 100; // delay between each array access (set, get, insert, ...)
    w = new TestMainWindow(insertionSort); // window which display the behavior of the sort algorithm
	w->show();

	return a.exec();
}
