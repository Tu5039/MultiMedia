#include "MultiMedia.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MultiMedia w;
	w.show();
	return a.exec();
}
