/********************************************************************************
** Form generated from reading UI file 'swmm_qt.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SWMM_QT_H
#define UI_SWMM_QT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SWMM_QtClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QTextBrowser *ShowInput;
    QTextBrowser *textBrowser_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *OpenFile;
    QPushButton *RunSWMM;
    QVBoxLayout *verticalLayout_2;
    QGraphicsView *graphicsView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SWMM_QtClass)
    {
        if (SWMM_QtClass->objectName().isEmpty())
            SWMM_QtClass->setObjectName(QStringLiteral("SWMM_QtClass"));
        SWMM_QtClass->resize(930, 625);
        centralWidget = new QWidget(SWMM_QtClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        ShowInput = new QTextBrowser(centralWidget);
        ShowInput->setObjectName(QStringLiteral("ShowInput"));

        horizontalLayout_2->addWidget(ShowInput);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        textBrowser_2 = new QTextBrowser(centralWidget);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));

        gridLayout->addWidget(textBrowser_2, 0, 1, 2, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        OpenFile = new QPushButton(centralWidget);
        OpenFile->setObjectName(QStringLiteral("OpenFile"));

        horizontalLayout->addWidget(OpenFile);

        RunSWMM = new QPushButton(centralWidget);
        RunSWMM->setObjectName(QStringLiteral("RunSWMM"));

        horizontalLayout->addWidget(RunSWMM);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));

        gridLayout->addLayout(verticalLayout_2, 1, 2, 1, 1);

        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        gridLayout->addWidget(graphicsView, 2, 0, 1, 2);

        SWMM_QtClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SWMM_QtClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 930, 21));
        SWMM_QtClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SWMM_QtClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SWMM_QtClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SWMM_QtClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SWMM_QtClass->setStatusBar(statusBar);

        retranslateUi(SWMM_QtClass);

        QMetaObject::connectSlotsByName(SWMM_QtClass);
    } // setupUi

    void retranslateUi(QMainWindow *SWMM_QtClass)
    {
        SWMM_QtClass->setWindowTitle(QApplication::translate("SWMM_QtClass", "SWMM_Qt", 0));
        OpenFile->setText(QApplication::translate("SWMM_QtClass", "Open Swmm Input", 0));
        RunSWMM->setText(QApplication::translate("SWMM_QtClass", "Run", 0));
    } // retranslateUi

};

namespace Ui {
    class SWMM_QtClass: public Ui_SWMM_QtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SWMM_QT_H
