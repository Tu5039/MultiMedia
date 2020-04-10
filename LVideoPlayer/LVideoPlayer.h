#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_LVideoPlayer.h"

class LVideoPlayer : public QMainWindow
{
	Q_OBJECT

public:
	LVideoPlayer(QWidget *parent = Q_NULLPTR);

private:
	Ui::LVideoPlayerClass ui;
};
