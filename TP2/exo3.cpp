#include <QApplication>
#include <time.h>

#include "tp2.h"

MainWindow* w=nullptr;


void bubbleSort(Array& toSort){
    int tri=1;
        while(tri!=0){
            tri=0;
            for(int i=0;i<toSort.size()-1;i++){
                if(toSort[i]>toSort[i+1]){
                    toSort.swap(i,i+1);
                    tri=1;
                }
            }
        }

}


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	uint elementCount=20;
	MainWindow::instruction_duration = 100;
	w = new TestMainWindow(bubbleSort);
	w->show();

	return a.exec();
}
