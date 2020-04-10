#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_LMusicPlayer.h"

class LMusicPlayer : public QMainWindow
{
	Q_OBJECT

public:
	LMusicPlayer(QWidget *parent = Q_NULLPTR);

private:
	Ui::LMusicPlayerClass ui;
};
