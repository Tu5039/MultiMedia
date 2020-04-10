#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MultiMedia.h"

class MultiMedia : public QMainWindow
{
	Q_OBJECT

public:
	MultiMedia(QWidget *parent = Q_NULLPTR);

private:
	Ui::MultiMediaClass ui;
};
