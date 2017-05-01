#include "swmm_qt.h"
#include "swmm5.h"
#include <qfiledialog.h>
#include "StringOP.h"
#include <iostream>
#include <fstream>
#include <qdebug.h>


SWMM_Qt::SWMM_Qt(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.RunSWMM, SIGNAL(released()), this, SLOT(runswmm()));
	connect(ui.OpenFile, SIGNAL(released()), this, SLOT(readswmm()));
}

SWMM_Qt::~SWMM_Qt()
{

}

void SWMM_Qt::runswmm()
{
	char *inputfilename_c = new char[inputfilename.length() + 1];
	strcpy(inputfilename_c, inputfilename.c_str());

	char *reportfilename_c = new char[reportfilename.length() + 1];
	strcpy(reportfilename_c, reportfilename.c_str());

	char *binoutfilename_c = new char[binoutfilename.length() + 1];
	strcpy(binoutfilename_c, binoutfilename.c_str());
	
	ui.textBrowser_2->append("Running...");
	swmm_run(inputfilename_c, reportfilename_c, binoutfilename_c);
	
	delete[] inputfilename_c;
	delete[] reportfilename_c;
	delete[] binoutfilename_c;
}

void SWMM_Qt::readswmm()
{
	QString fileName = QFileDialog::getOpenFileName(this, tr("Open Input File"), "", tr("Input Files (*.txt *.inp *.*)"));
	QFileInfo fi(fileName);
	char *path_1;
	path = fi.absolutePath().toStdString();
	inputfilename = fileName.toStdString();
	reportfilename = path + "/report.txt";
	binoutfilename = path + "/binout.txt";
	ifstream file(fileName.toStdString());
	vector<string> s;

	while (!file.eof())
	{
		string line;
		getline(file, line);
		QString qline = QString::fromStdString(line);
		ui.ShowInput->append(qline);
		qDebug() << qline;
		//qApp->processEvents();
	}
	ui.ShowInput->update();
}
