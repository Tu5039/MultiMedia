#include "LMusicPlayer.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	LMusicPlayer w;
	w.show();
	return a.exec();
}
