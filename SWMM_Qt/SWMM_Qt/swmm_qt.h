#ifndef SWMM_QT_H
#define SWMM_QT_H

#include <QtWidgets/QMainWindow>
#include "ui_swmm_qt.h"
#include <string>

using namespace std; 
class SWMM_Qt : public QMainWindow
{
	Q_OBJECT

public:
	SWMM_Qt(QWidget *parent = 0);
	~SWMM_Qt();
	string inputfilename;
	string reportfilename;
	string binoutfilename; 
	string path; 

private:
	Ui::SWMM_QtClass ui;

private slots:
	void readswmm();
	void runswmm();

};

#endif // SWMM_QT_H
