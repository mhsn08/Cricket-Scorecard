/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionReset;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QLabel *team2stats;
    QTableWidget *team1getplayernames;
    QTableWidget *team2getplayernames;
    QLabel *team1gotname;
    QPushButton *nextdelivery;
    QTextEdit *team2getname;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *overs2;
    QRadioButton *overs5;
    QRadioButton *overs10;
    QRadioButton *overs20;
    QRadioButton *overs50;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *score0;
    QRadioButton *score1;
    QRadioButton *score2;
    QRadioButton *score3;
    QRadioButton *score4;
    QRadioButton *score5;
    QRadioButton *score6;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *target_2;
    QLabel *target;
    QLabel *team2gotname;
    QLabel *team1stats;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *ifbye;
    QRadioButton *ifwide;
    QRadioButton *iflegbye;
    QRadioButton *noextra;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *toss;
    QLabel *tossres;
    QLabel *elected;
    QLabel *electedresult;
    QTextEdit *team1getname;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *ifnoball;
    QRadioButton *fairdelivery;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *ifwicket;
    QRadioButton *if_runour_NSE;
    QRadioButton *if_runout_SE;
    QRadioButton *nowicket;
    QLabel *Overstitle;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableWidget *team1data;
    QTableWidget *team2bowlingdata;
    QWidget *tab_2;
    QTableWidget *team2data;
    QTableWidget *team1bowlingdata;
    QLabel *teamnamestitle;
    QPushButton *Confirm;
    QPushButton *confirmplayer;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *selectnone;
    QRadioButton *select1;
    QRadioButton *select2;
    QRadioButton *select3;
    QRadioButton *select4;
    QRadioButton *select5;
    QRadioButton *select6;
    QRadioButton *select7;
    QRadioButton *select8;
    QRadioButton *select9;
    QRadioButton *select10;
    QRadioButton *select11;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *tosslabel;
    QRadioButton *tossteam1;
    QRadioButton *tossteam2;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *electedlabel;
    QRadioButton *ifchoosebat;
    QRadioButton *ifchoosebowl;
    QLabel *result;
    QLabel *info;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *ifcaught;
    QRadioButton *didntcaught;
    QLabel *freehitwarning;
    QPushButton *seeresult;
    QMenuBar *menubar;
    QMenu *menuNew;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1479, 1070);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        actionReset = new QAction(MainWindow);
        actionReset->setObjectName(QStringLiteral("actionReset"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1445, 1418));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        frame = new QFrame(scrollAreaWidgetContents);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(1400, 1400));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        team2stats = new QLabel(frame);
        team2stats->setObjectName(QStringLiteral("team2stats"));
        team2stats->setGeometry(QRect(490, 70, 100, 40));
        team1getplayernames = new QTableWidget(frame);
        if (team1getplayernames->columnCount() < 1)
            team1getplayernames->setColumnCount(1);
        QFont font;
        font.setPointSize(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        team1getplayernames->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (team1getplayernames->rowCount() < 11)
            team1getplayernames->setRowCount(11);
        QFont font1;
        font1.setPointSize(10);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font1);
        team1getplayernames->setVerticalHeaderItem(0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        team1getplayernames->setVerticalHeaderItem(1, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        team1getplayernames->setVerticalHeaderItem(2, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        team1getplayernames->setVerticalHeaderItem(3, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        team1getplayernames->setVerticalHeaderItem(4, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        team1getplayernames->setVerticalHeaderItem(5, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        team1getplayernames->setVerticalHeaderItem(6, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        team1getplayernames->setVerticalHeaderItem(7, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        team1getplayernames->setVerticalHeaderItem(8, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        team1getplayernames->setVerticalHeaderItem(9, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        team1getplayernames->setVerticalHeaderItem(10, __qtablewidgetitem11);
        team1getplayernames->setObjectName(QStringLiteral("team1getplayernames"));
        team1getplayernames->setEnabled(true);
        team1getplayernames->setGeometry(QRect(20, 160, 400, 351));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(team1getplayernames->sizePolicy().hasHeightForWidth());
        team1getplayernames->setSizePolicy(sizePolicy1);
        team1getplayernames->horizontalHeader()->setDefaultSectionSize(400);
        team2getplayernames = new QTableWidget(frame);
        if (team2getplayernames->columnCount() < 1)
            team2getplayernames->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setFont(font);
        team2getplayernames->setHorizontalHeaderItem(0, __qtablewidgetitem12);
        if (team2getplayernames->rowCount() < 11)
            team2getplayernames->setRowCount(11);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setFont(font1);
        team2getplayernames->setVerticalHeaderItem(0, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        team2getplayernames->setVerticalHeaderItem(1, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        team2getplayernames->setVerticalHeaderItem(2, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        team2getplayernames->setVerticalHeaderItem(3, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        team2getplayernames->setVerticalHeaderItem(4, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        team2getplayernames->setVerticalHeaderItem(5, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        team2getplayernames->setVerticalHeaderItem(6, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        team2getplayernames->setVerticalHeaderItem(7, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        team2getplayernames->setVerticalHeaderItem(8, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        team2getplayernames->setVerticalHeaderItem(9, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        team2getplayernames->setVerticalHeaderItem(10, __qtablewidgetitem23);
        team2getplayernames->setObjectName(QStringLiteral("team2getplayernames"));
        team2getplayernames->setGeometry(QRect(550, 160, 400, 351));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(100);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(team2getplayernames->sizePolicy().hasHeightForWidth());
        team2getplayernames->setSizePolicy(sizePolicy2);
        team2getplayernames->horizontalHeader()->setDefaultSectionSize(400);
        team1gotname = new QLabel(frame);
        team1gotname->setObjectName(QStringLiteral("team1gotname"));
        team1gotname->setGeometry(QRect(90, 10, 200, 40));
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setWeight(75);
        team1gotname->setFont(font2);
        nextdelivery = new QPushButton(frame);
        nextdelivery->setObjectName(QStringLiteral("nextdelivery"));
        nextdelivery->setGeometry(QRect(980, 150, 80, 23));
        team2getname = new QTextEdit(frame);
        team2getname->setObjectName(QStringLiteral("team2getname"));
        team2getname->setGeometry(QRect(550, 100, 211, 41));
        QFont font3;
        font3.setPointSize(18);
        team2getname->setFont(font3);
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(220, 580, 526, 23));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        overs2 = new QRadioButton(layoutWidget);
        overs2->setObjectName(QStringLiteral("overs2"));

        horizontalLayout->addWidget(overs2);

        overs5 = new QRadioButton(layoutWidget);
        overs5->setObjectName(QStringLiteral("overs5"));

        horizontalLayout->addWidget(overs5);

        overs10 = new QRadioButton(layoutWidget);
        overs10->setObjectName(QStringLiteral("overs10"));

        horizontalLayout->addWidget(overs10);

        overs20 = new QRadioButton(layoutWidget);
        overs20->setObjectName(QStringLiteral("overs20"));

        horizontalLayout->addWidget(overs20);

        overs50 = new QRadioButton(layoutWidget);
        overs50->setObjectName(QStringLiteral("overs50"));

        horizontalLayout->addWidget(overs50);

        layoutWidget_7 = new QWidget(frame);
        layoutWidget_7->setObjectName(QStringLiteral("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(980, 120, 269, 23));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_7);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        score0 = new QRadioButton(layoutWidget_7);
        score0->setObjectName(QStringLiteral("score0"));

        horizontalLayout_6->addWidget(score0);

        score1 = new QRadioButton(layoutWidget_7);
        score1->setObjectName(QStringLiteral("score1"));

        horizontalLayout_6->addWidget(score1);

        score2 = new QRadioButton(layoutWidget_7);
        score2->setObjectName(QStringLiteral("score2"));

        horizontalLayout_6->addWidget(score2);

        score3 = new QRadioButton(layoutWidget_7);
        score3->setObjectName(QStringLiteral("score3"));

        horizontalLayout_6->addWidget(score3);

        score4 = new QRadioButton(layoutWidget_7);
        score4->setObjectName(QStringLiteral("score4"));

        horizontalLayout_6->addWidget(score4);

        score5 = new QRadioButton(layoutWidget_7);
        score5->setObjectName(QStringLiteral("score5"));

        horizontalLayout_6->addWidget(score5);

        score6 = new QRadioButton(layoutWidget_7);
        score6->setObjectName(QStringLiteral("score6"));

        horizontalLayout_6->addWidget(score6);

        layoutWidget_3 = new QWidget(frame);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(290, 110, 42, 38));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        target_2 = new QLabel(layoutWidget_3);
        target_2->setObjectName(QStringLiteral("target_2"));

        verticalLayout_3->addWidget(target_2);

        target = new QLabel(layoutWidget_3);
        target->setObjectName(QStringLiteral("target"));

        verticalLayout_3->addWidget(target);

        team2gotname = new QLabel(frame);
        team2gotname->setObjectName(QStringLiteral("team2gotname"));
        team2gotname->setGeometry(QRect(490, 10, 200, 40));
        team2gotname->setFont(font2);
        team1stats = new QLabel(frame);
        team1stats->setObjectName(QStringLiteral("team1stats"));
        team1stats->setGeometry(QRect(90, 70, 100, 40));
        layoutWidget_4 = new QWidget(frame);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(980, 90, 251, 23));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        ifbye = new QRadioButton(layoutWidget_4);
        ifbye->setObjectName(QStringLiteral("ifbye"));

        horizontalLayout_3->addWidget(ifbye);

        ifwide = new QRadioButton(layoutWidget_4);
        ifwide->setObjectName(QStringLiteral("ifwide"));

        horizontalLayout_3->addWidget(ifwide);

        iflegbye = new QRadioButton(layoutWidget_4);
        iflegbye->setObjectName(QStringLiteral("iflegbye"));

        horizontalLayout_3->addWidget(iflegbye);

        noextra = new QRadioButton(layoutWidget_4);
        noextra->setObjectName(QStringLiteral("noextra"));

        horizontalLayout_3->addWidget(noextra);

        layoutWidget_5 = new QWidget(frame);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(90, 160, 256, 17));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        toss = new QLabel(layoutWidget_5);
        toss->setObjectName(QStringLiteral("toss"));
        QFont font4;
        font4.setBold(true);
        font4.setWeight(75);
        toss->setFont(font4);

        horizontalLayout_2->addWidget(toss);

        tossres = new QLabel(layoutWidget_5);
        tossres->setObjectName(QStringLiteral("tossres"));

        horizontalLayout_2->addWidget(tossres);

        elected = new QLabel(layoutWidget_5);
        elected->setObjectName(QStringLiteral("elected"));
        elected->setFont(font4);

        horizontalLayout_2->addWidget(elected);

        electedresult = new QLabel(layoutWidget_5);
        electedresult->setObjectName(QStringLiteral("electedresult"));

        horizontalLayout_2->addWidget(electedresult);

        team1getname = new QTextEdit(frame);
        team1getname->setObjectName(QStringLiteral("team1getname"));
        team1getname->setGeometry(QRect(210, 100, 211, 41));
        team1getname->setFont(font3);
        layoutWidget_2 = new QWidget(frame);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(980, 30, 178, 23));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        ifnoball = new QRadioButton(layoutWidget_2);
        ifnoball->setObjectName(QStringLiteral("ifnoball"));

        horizontalLayout_5->addWidget(ifnoball);

        fairdelivery = new QRadioButton(layoutWidget_2);
        fairdelivery->setObjectName(QStringLiteral("fairdelivery"));

        horizontalLayout_5->addWidget(fairdelivery);

        layoutWidget_6 = new QWidget(frame);
        layoutWidget_6->setObjectName(QStringLiteral("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(980, 60, 328, 23));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        ifwicket = new QRadioButton(layoutWidget_6);
        ifwicket->setObjectName(QStringLiteral("ifwicket"));

        horizontalLayout_4->addWidget(ifwicket);

        if_runour_NSE = new QRadioButton(layoutWidget_6);
        if_runour_NSE->setObjectName(QStringLiteral("if_runour_NSE"));

        horizontalLayout_4->addWidget(if_runour_NSE);

        if_runout_SE = new QRadioButton(layoutWidget_6);
        if_runout_SE->setObjectName(QStringLiteral("if_runout_SE"));

        horizontalLayout_4->addWidget(if_runout_SE);

        nowicket = new QRadioButton(layoutWidget_6);
        nowicket->setObjectName(QStringLiteral("nowicket"));

        horizontalLayout_4->addWidget(nowicket);

        Overstitle = new QLabel(frame);
        Overstitle->setObjectName(QStringLiteral("Overstitle"));
        Overstitle->setGeometry(QRect(420, 530, 130, 40));
        Overstitle->setFont(font2);
        Overstitle->setAlignment(Qt::AlignCenter);
        tabWidget = new QTabWidget(frame);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 190, 941, 741));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        team1data = new QTableWidget(tab);
        if (team1data->columnCount() < 9)
            team1data->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        team1data->setHorizontalHeaderItem(0, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        team1data->setHorizontalHeaderItem(1, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        team1data->setHorizontalHeaderItem(2, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        team1data->setHorizontalHeaderItem(3, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        team1data->setHorizontalHeaderItem(4, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        team1data->setHorizontalHeaderItem(5, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        team1data->setHorizontalHeaderItem(6, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        team1data->setHorizontalHeaderItem(7, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        team1data->setHorizontalHeaderItem(8, __qtablewidgetitem32);
        if (team1data->rowCount() < 11)
            team1data->setRowCount(11);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        team1data->setVerticalHeaderItem(0, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        team1data->setVerticalHeaderItem(1, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        team1data->setVerticalHeaderItem(2, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        team1data->setVerticalHeaderItem(3, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        team1data->setVerticalHeaderItem(4, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        team1data->setVerticalHeaderItem(5, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        team1data->setVerticalHeaderItem(6, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        team1data->setVerticalHeaderItem(7, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        team1data->setVerticalHeaderItem(8, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        team1data->setVerticalHeaderItem(9, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        team1data->setVerticalHeaderItem(10, __qtablewidgetitem43);
        team1data->setObjectName(QStringLiteral("team1data"));
        team1data->setEnabled(true);
        team1data->setGeometry(QRect(0, 0, 931, 351));
        team1data->setEditTriggers(QAbstractItemView::NoEditTriggers);
        team1data->horizontalHeader()->setCascadingSectionResizes(true);
        team1data->verticalHeader()->setCascadingSectionResizes(true);
        team2bowlingdata = new QTableWidget(tab);
        if (team2bowlingdata->columnCount() < 5)
            team2bowlingdata->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        team2bowlingdata->setHorizontalHeaderItem(0, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        team2bowlingdata->setHorizontalHeaderItem(1, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        team2bowlingdata->setHorizontalHeaderItem(2, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        team2bowlingdata->setHorizontalHeaderItem(3, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        __qtablewidgetitem48->setFont(font);
        team2bowlingdata->setHorizontalHeaderItem(4, __qtablewidgetitem48);
        if (team2bowlingdata->rowCount() < 11)
            team2bowlingdata->setRowCount(11);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        team2bowlingdata->setVerticalHeaderItem(0, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        team2bowlingdata->setVerticalHeaderItem(1, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        team2bowlingdata->setVerticalHeaderItem(2, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        team2bowlingdata->setVerticalHeaderItem(3, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        team2bowlingdata->setVerticalHeaderItem(4, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        team2bowlingdata->setVerticalHeaderItem(5, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        team2bowlingdata->setVerticalHeaderItem(6, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        team2bowlingdata->setVerticalHeaderItem(7, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        team2bowlingdata->setVerticalHeaderItem(8, __qtablewidgetitem57);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        team2bowlingdata->setVerticalHeaderItem(9, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        team2bowlingdata->setVerticalHeaderItem(10, __qtablewidgetitem59);
        team2bowlingdata->setObjectName(QStringLiteral("team2bowlingdata"));
        team2bowlingdata->setGeometry(QRect(0, 350, 821, 351));
        team2bowlingdata->setEditTriggers(QAbstractItemView::NoEditTriggers);
        team2bowlingdata->horizontalHeader()->setDefaultSectionSize(140);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        team2data = new QTableWidget(tab_2);
        if (team2data->columnCount() < 9)
            team2data->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        __qtablewidgetitem60->setBackground(QColor(255, 255, 255));
        team2data->setHorizontalHeaderItem(0, __qtablewidgetitem60);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        team2data->setHorizontalHeaderItem(1, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        team2data->setHorizontalHeaderItem(2, __qtablewidgetitem62);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        team2data->setHorizontalHeaderItem(3, __qtablewidgetitem63);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        team2data->setHorizontalHeaderItem(4, __qtablewidgetitem64);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        team2data->setHorizontalHeaderItem(5, __qtablewidgetitem65);
        QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
        team2data->setHorizontalHeaderItem(6, __qtablewidgetitem66);
        QTableWidgetItem *__qtablewidgetitem67 = new QTableWidgetItem();
        team2data->setHorizontalHeaderItem(7, __qtablewidgetitem67);
        QTableWidgetItem *__qtablewidgetitem68 = new QTableWidgetItem();
        team2data->setHorizontalHeaderItem(8, __qtablewidgetitem68);
        if (team2data->rowCount() < 11)
            team2data->setRowCount(11);
        QTableWidgetItem *__qtablewidgetitem69 = new QTableWidgetItem();
        team2data->setVerticalHeaderItem(0, __qtablewidgetitem69);
        QTableWidgetItem *__qtablewidgetitem70 = new QTableWidgetItem();
        team2data->setVerticalHeaderItem(1, __qtablewidgetitem70);
        QTableWidgetItem *__qtablewidgetitem71 = new QTableWidgetItem();
        team2data->setVerticalHeaderItem(2, __qtablewidgetitem71);
        QTableWidgetItem *__qtablewidgetitem72 = new QTableWidgetItem();
        team2data->setVerticalHeaderItem(3, __qtablewidgetitem72);
        QTableWidgetItem *__qtablewidgetitem73 = new QTableWidgetItem();
        team2data->setVerticalHeaderItem(4, __qtablewidgetitem73);
        QTableWidgetItem *__qtablewidgetitem74 = new QTableWidgetItem();
        team2data->setVerticalHeaderItem(5, __qtablewidgetitem74);
        QTableWidgetItem *__qtablewidgetitem75 = new QTableWidgetItem();
        team2data->setVerticalHeaderItem(6, __qtablewidgetitem75);
        QTableWidgetItem *__qtablewidgetitem76 = new QTableWidgetItem();
        team2data->setVerticalHeaderItem(7, __qtablewidgetitem76);
        QTableWidgetItem *__qtablewidgetitem77 = new QTableWidgetItem();
        team2data->setVerticalHeaderItem(8, __qtablewidgetitem77);
        QTableWidgetItem *__qtablewidgetitem78 = new QTableWidgetItem();
        team2data->setVerticalHeaderItem(9, __qtablewidgetitem78);
        QTableWidgetItem *__qtablewidgetitem79 = new QTableWidgetItem();
        team2data->setVerticalHeaderItem(10, __qtablewidgetitem79);
        team2data->setObjectName(QStringLiteral("team2data"));
        team2data->setGeometry(QRect(0, 0, 931, 351));
        team2data->setEditTriggers(QAbstractItemView::NoEditTriggers);
        team2data->horizontalHeader()->setCascadingSectionResizes(true);
        team2data->verticalHeader()->setCascadingSectionResizes(true);
        team1bowlingdata = new QTableWidget(tab_2);
        if (team1bowlingdata->columnCount() < 5)
            team1bowlingdata->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem80 = new QTableWidgetItem();
        team1bowlingdata->setHorizontalHeaderItem(0, __qtablewidgetitem80);
        QTableWidgetItem *__qtablewidgetitem81 = new QTableWidgetItem();
        team1bowlingdata->setHorizontalHeaderItem(1, __qtablewidgetitem81);
        QTableWidgetItem *__qtablewidgetitem82 = new QTableWidgetItem();
        team1bowlingdata->setHorizontalHeaderItem(2, __qtablewidgetitem82);
        QTableWidgetItem *__qtablewidgetitem83 = new QTableWidgetItem();
        team1bowlingdata->setHorizontalHeaderItem(3, __qtablewidgetitem83);
        QTableWidgetItem *__qtablewidgetitem84 = new QTableWidgetItem();
        __qtablewidgetitem84->setFont(font);
        team1bowlingdata->setHorizontalHeaderItem(4, __qtablewidgetitem84);
        if (team1bowlingdata->rowCount() < 11)
            team1bowlingdata->setRowCount(11);
        QTableWidgetItem *__qtablewidgetitem85 = new QTableWidgetItem();
        team1bowlingdata->setVerticalHeaderItem(0, __qtablewidgetitem85);
        QTableWidgetItem *__qtablewidgetitem86 = new QTableWidgetItem();
        team1bowlingdata->setVerticalHeaderItem(1, __qtablewidgetitem86);
        QTableWidgetItem *__qtablewidgetitem87 = new QTableWidgetItem();
        team1bowlingdata->setVerticalHeaderItem(2, __qtablewidgetitem87);
        QTableWidgetItem *__qtablewidgetitem88 = new QTableWidgetItem();
        team1bowlingdata->setVerticalHeaderItem(3, __qtablewidgetitem88);
        QTableWidgetItem *__qtablewidgetitem89 = new QTableWidgetItem();
        team1bowlingdata->setVerticalHeaderItem(4, __qtablewidgetitem89);
        QTableWidgetItem *__qtablewidgetitem90 = new QTableWidgetItem();
        team1bowlingdata->setVerticalHeaderItem(5, __qtablewidgetitem90);
        QTableWidgetItem *__qtablewidgetitem91 = new QTableWidgetItem();
        team1bowlingdata->setVerticalHeaderItem(6, __qtablewidgetitem91);
        QTableWidgetItem *__qtablewidgetitem92 = new QTableWidgetItem();
        team1bowlingdata->setVerticalHeaderItem(7, __qtablewidgetitem92);
        QTableWidgetItem *__qtablewidgetitem93 = new QTableWidgetItem();
        team1bowlingdata->setVerticalHeaderItem(8, __qtablewidgetitem93);
        QTableWidgetItem *__qtablewidgetitem94 = new QTableWidgetItem();
        team1bowlingdata->setVerticalHeaderItem(9, __qtablewidgetitem94);
        QTableWidgetItem *__qtablewidgetitem95 = new QTableWidgetItem();
        team1bowlingdata->setVerticalHeaderItem(10, __qtablewidgetitem95);
        team1bowlingdata->setObjectName(QStringLiteral("team1bowlingdata"));
        team1bowlingdata->setGeometry(QRect(0, 360, 821, 351));
        team1bowlingdata->setEditTriggers(QAbstractItemView::NoEditTriggers);
        team1bowlingdata->horizontalHeader()->setDefaultSectionSize(140);
        tabWidget->addTab(tab_2, QString());
        teamnamestitle = new QLabel(frame);
        teamnamestitle->setObjectName(QStringLiteral("teamnamestitle"));
        teamnamestitle->setGeometry(QRect(400, 20, 211, 40));
        teamnamestitle->setFont(font2);
        teamnamestitle->setAlignment(Qt::AlignCenter);
        Confirm = new QPushButton(frame);
        Confirm->setObjectName(QStringLiteral("Confirm"));
        Confirm->setGeometry(QRect(450, 710, 80, 23));
        confirmplayer = new QPushButton(frame);
        confirmplayer->setObjectName(QStringLiteral("confirmplayer"));
        confirmplayer->setGeometry(QRect(980, 440, 80, 23));
        layoutWidget1 = new QWidget(frame);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(980, 181, 181, 254));
        verticalLayout_4 = new QVBoxLayout(layoutWidget1);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        selectnone = new QRadioButton(layoutWidget1);
        selectnone->setObjectName(QStringLiteral("selectnone"));

        verticalLayout_4->addWidget(selectnone);

        select1 = new QRadioButton(layoutWidget1);
        select1->setObjectName(QStringLiteral("select1"));

        verticalLayout_4->addWidget(select1);

        select2 = new QRadioButton(layoutWidget1);
        select2->setObjectName(QStringLiteral("select2"));

        verticalLayout_4->addWidget(select2);

        select3 = new QRadioButton(layoutWidget1);
        select3->setObjectName(QStringLiteral("select3"));

        verticalLayout_4->addWidget(select3);

        select4 = new QRadioButton(layoutWidget1);
        select4->setObjectName(QStringLiteral("select4"));

        verticalLayout_4->addWidget(select4);

        select5 = new QRadioButton(layoutWidget1);
        select5->setObjectName(QStringLiteral("select5"));

        verticalLayout_4->addWidget(select5);

        select6 = new QRadioButton(layoutWidget1);
        select6->setObjectName(QStringLiteral("select6"));

        verticalLayout_4->addWidget(select6);

        select7 = new QRadioButton(layoutWidget1);
        select7->setObjectName(QStringLiteral("select7"));

        verticalLayout_4->addWidget(select7);

        select8 = new QRadioButton(layoutWidget1);
        select8->setObjectName(QStringLiteral("select8"));

        verticalLayout_4->addWidget(select8);

        select9 = new QRadioButton(layoutWidget1);
        select9->setObjectName(QStringLiteral("select9"));

        verticalLayout_4->addWidget(select9);

        select10 = new QRadioButton(layoutWidget1);
        select10->setObjectName(QStringLiteral("select10"));

        verticalLayout_4->addWidget(select10);

        select11 = new QRadioButton(layoutWidget1);
        select11->setObjectName(QStringLiteral("select11"));

        verticalLayout_4->addWidget(select11);

        layoutWidget2 = new QWidget(frame);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(370, 630, 246, 23));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        tosslabel = new QLabel(layoutWidget2);
        tosslabel->setObjectName(QStringLiteral("tosslabel"));

        horizontalLayout_7->addWidget(tosslabel);

        tossteam1 = new QRadioButton(layoutWidget2);
        tossteam1->setObjectName(QStringLiteral("tossteam1"));

        horizontalLayout_7->addWidget(tossteam1);

        tossteam2 = new QRadioButton(layoutWidget2);
        tossteam2->setObjectName(QStringLiteral("tossteam2"));

        horizontalLayout_7->addWidget(tossteam2);

        layoutWidget3 = new QWidget(frame);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(400, 670, 178, 23));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        electedlabel = new QLabel(layoutWidget3);
        electedlabel->setObjectName(QStringLiteral("electedlabel"));

        horizontalLayout_8->addWidget(electedlabel);

        ifchoosebat = new QRadioButton(layoutWidget3);
        ifchoosebat->setObjectName(QStringLiteral("ifchoosebat"));

        horizontalLayout_8->addWidget(ifchoosebat);

        ifchoosebowl = new QRadioButton(layoutWidget3);
        ifchoosebowl->setObjectName(QStringLiteral("ifchoosebowl"));

        horizontalLayout_8->addWidget(ifchoosebowl);

        result = new QLabel(frame);
        result->setObjectName(QStringLiteral("result"));
        result->setGeometry(QRect(410, 110, 201, 71));
        QFont font5;
        font5.setPointSize(25);
        font5.setBold(true);
        font5.setWeight(75);
        result->setFont(font5);
        info = new QLabel(frame);
        info->setObjectName(QStringLiteral("info"));
        info->setGeometry(QRect(980, 10, 321, 61));
        info->setFont(font2);
        layoutWidget4 = new QWidget(frame);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(1320, 60, 82, 50));
        verticalLayout_5 = new QVBoxLayout(layoutWidget4);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        ifcaught = new QRadioButton(layoutWidget4);
        ifcaught->setObjectName(QStringLiteral("ifcaught"));

        verticalLayout_5->addWidget(ifcaught);

        didntcaught = new QRadioButton(layoutWidget4);
        didntcaught->setObjectName(QStringLiteral("didntcaught"));

        verticalLayout_5->addWidget(didntcaught);

        freehitwarning = new QLabel(frame);
        freehitwarning->setObjectName(QStringLiteral("freehitwarning"));
        freehitwarning->setGeometry(QRect(1090, 150, 101, 21));
        QFont font6;
        font6.setStyleStrategy(QFont::PreferAntialias);
        freehitwarning->setFont(font6);
        seeresult = new QPushButton(frame);
        seeresult->setObjectName(QStringLiteral("seeresult"));
        seeresult->setGeometry(QRect(430, 210, 161, 51));

        verticalLayout_2->addWidget(frame);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1479, 20));
        menuNew = new QMenu(menubar);
        menuNew->setObjectName(QStringLiteral("menuNew"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuNew->menuAction());
        menuNew->addAction(actionReset);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Scorecard", Q_NULLPTR));
        actionReset->setText(QApplication::translate("MainWindow", "Reset", Q_NULLPTR));
        team2stats->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = team1getplayernames->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Names", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = team1getplayernames->verticalHeaderItem(0);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = team1getplayernames->verticalHeaderItem(1);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = team1getplayernames->verticalHeaderItem(2);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = team1getplayernames->verticalHeaderItem(3);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = team1getplayernames->verticalHeaderItem(4);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = team1getplayernames->verticalHeaderItem(5);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = team1getplayernames->verticalHeaderItem(6);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = team1getplayernames->verticalHeaderItem(7);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = team1getplayernames->verticalHeaderItem(8);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = team1getplayernames->verticalHeaderItem(9);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = team1getplayernames->verticalHeaderItem(10);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "11", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = team2getplayernames->horizontalHeaderItem(0);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "Names", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = team2getplayernames->verticalHeaderItem(0);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = team2getplayernames->verticalHeaderItem(1);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = team2getplayernames->verticalHeaderItem(2);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = team2getplayernames->verticalHeaderItem(3);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = team2getplayernames->verticalHeaderItem(4);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = team2getplayernames->verticalHeaderItem(5);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = team2getplayernames->verticalHeaderItem(6);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem20 = team2getplayernames->verticalHeaderItem(7);
        ___qtablewidgetitem20->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem21 = team2getplayernames->verticalHeaderItem(8);
        ___qtablewidgetitem21->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem22 = team2getplayernames->verticalHeaderItem(9);
        ___qtablewidgetitem22->setText(QApplication::translate("MainWindow", "10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem23 = team2getplayernames->verticalHeaderItem(10);
        ___qtablewidgetitem23->setText(QApplication::translate("MainWindow", "11", Q_NULLPTR));
        team1gotname->setText(QString());
        nextdelivery->setText(QApplication::translate("MainWindow", "Next", Q_NULLPTR));
        team2getname->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans'; font-size:18pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\"><br /></p></body></html>", Q_NULLPTR));
        overs2->setText(QApplication::translate("MainWindow", "2 Overs", Q_NULLPTR));
        overs5->setText(QApplication::translate("MainWindow", "5 Overs", Q_NULLPTR));
        overs10->setText(QApplication::translate("MainWindow", "10 Overs", Q_NULLPTR));
        overs20->setText(QApplication::translate("MainWindow", "20 Overs", Q_NULLPTR));
        overs50->setText(QApplication::translate("MainWindow", "50 Overs", Q_NULLPTR));
        score0->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        score1->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        score2->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        score3->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        score4->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        score5->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        score6->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        target_2->setText(QApplication::translate("MainWindow", "Target", Q_NULLPTR));
        target->setText(QString());
        team2gotname->setText(QString());
        team1stats->setText(QString());
        ifbye->setText(QApplication::translate("MainWindow", "Bye", Q_NULLPTR));
        ifwide->setText(QApplication::translate("MainWindow", "Wide", Q_NULLPTR));
        iflegbye->setText(QApplication::translate("MainWindow", "LegBye", Q_NULLPTR));
        noextra->setText(QApplication::translate("MainWindow", "None", Q_NULLPTR));
        toss->setText(QApplication::translate("MainWindow", "Toss:", Q_NULLPTR));
        tossres->setText(QString());
        elected->setText(QApplication::translate("MainWindow", "Elected to :", Q_NULLPTR));
        electedresult->setText(QString());
        team1getname->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans'; font-size:18pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\"><br /></p></body></html>", Q_NULLPTR));
        ifnoball->setText(QApplication::translate("MainWindow", "No-Ball", Q_NULLPTR));
        fairdelivery->setText(QApplication::translate("MainWindow", "Fair Delivery", Q_NULLPTR));
        ifwicket->setText(QApplication::translate("MainWindow", "Wicket", Q_NULLPTR));
        if_runour_NSE->setText(QApplication::translate("MainWindow", "Runout-NSE", Q_NULLPTR));
        if_runout_SE->setText(QApplication::translate("MainWindow", "Runout-SE", Q_NULLPTR));
        nowicket->setText(QApplication::translate("MainWindow", "None", Q_NULLPTR));
        Overstitle->setText(QApplication::translate("MainWindow", "Overs", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem24 = team1data->horizontalHeaderItem(0);
        ___qtablewidgetitem24->setText(QApplication::translate("MainWindow", "Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem25 = team1data->horizontalHeaderItem(1);
        ___qtablewidgetitem25->setText(QApplication::translate("MainWindow", "Catch", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem26 = team1data->horizontalHeaderItem(2);
        ___qtablewidgetitem26->setText(QApplication::translate("MainWindow", "Ball", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem27 = team1data->horizontalHeaderItem(3);
        ___qtablewidgetitem27->setText(QApplication::translate("MainWindow", "RunOut", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem28 = team1data->horizontalHeaderItem(4);
        ___qtablewidgetitem28->setText(QApplication::translate("MainWindow", "R", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem29 = team1data->horizontalHeaderItem(5);
        ___qtablewidgetitem29->setText(QApplication::translate("MainWindow", "B", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem30 = team1data->horizontalHeaderItem(6);
        ___qtablewidgetitem30->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem31 = team1data->horizontalHeaderItem(7);
        ___qtablewidgetitem31->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem32 = team1data->horizontalHeaderItem(8);
        ___qtablewidgetitem32->setText(QApplication::translate("MainWindow", "S.R", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem33 = team1data->verticalHeaderItem(0);
        ___qtablewidgetitem33->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem34 = team1data->verticalHeaderItem(1);
        ___qtablewidgetitem34->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem35 = team1data->verticalHeaderItem(2);
        ___qtablewidgetitem35->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem36 = team1data->verticalHeaderItem(3);
        ___qtablewidgetitem36->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem37 = team1data->verticalHeaderItem(4);
        ___qtablewidgetitem37->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem38 = team1data->verticalHeaderItem(5);
        ___qtablewidgetitem38->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem39 = team1data->verticalHeaderItem(6);
        ___qtablewidgetitem39->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem40 = team1data->verticalHeaderItem(7);
        ___qtablewidgetitem40->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem41 = team1data->verticalHeaderItem(8);
        ___qtablewidgetitem41->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem42 = team1data->verticalHeaderItem(9);
        ___qtablewidgetitem42->setText(QApplication::translate("MainWindow", "10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem43 = team1data->verticalHeaderItem(10);
        ___qtablewidgetitem43->setText(QApplication::translate("MainWindow", "11", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem44 = team2bowlingdata->horizontalHeaderItem(0);
        ___qtablewidgetitem44->setText(QApplication::translate("MainWindow", "Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem45 = team2bowlingdata->horizontalHeaderItem(1);
        ___qtablewidgetitem45->setText(QApplication::translate("MainWindow", "Overs", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem46 = team2bowlingdata->horizontalHeaderItem(2);
        ___qtablewidgetitem46->setText(QApplication::translate("MainWindow", "Maiden", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem47 = team2bowlingdata->horizontalHeaderItem(3);
        ___qtablewidgetitem47->setText(QApplication::translate("MainWindow", "Runs", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem48 = team2bowlingdata->horizontalHeaderItem(4);
        ___qtablewidgetitem48->setText(QApplication::translate("MainWindow", "Economy", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem49 = team2bowlingdata->verticalHeaderItem(0);
        ___qtablewidgetitem49->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem50 = team2bowlingdata->verticalHeaderItem(1);
        ___qtablewidgetitem50->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem51 = team2bowlingdata->verticalHeaderItem(2);
        ___qtablewidgetitem51->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem52 = team2bowlingdata->verticalHeaderItem(3);
        ___qtablewidgetitem52->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem53 = team2bowlingdata->verticalHeaderItem(4);
        ___qtablewidgetitem53->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem54 = team2bowlingdata->verticalHeaderItem(5);
        ___qtablewidgetitem54->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem55 = team2bowlingdata->verticalHeaderItem(6);
        ___qtablewidgetitem55->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem56 = team2bowlingdata->verticalHeaderItem(7);
        ___qtablewidgetitem56->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem57 = team2bowlingdata->verticalHeaderItem(8);
        ___qtablewidgetitem57->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem58 = team2bowlingdata->verticalHeaderItem(9);
        ___qtablewidgetitem58->setText(QApplication::translate("MainWindow", "10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem59 = team2bowlingdata->verticalHeaderItem(10);
        ___qtablewidgetitem59->setText(QApplication::translate("MainWindow", "11", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Team 1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem60 = team2data->horizontalHeaderItem(0);
        ___qtablewidgetitem60->setText(QApplication::translate("MainWindow", "Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem61 = team2data->horizontalHeaderItem(1);
        ___qtablewidgetitem61->setText(QApplication::translate("MainWindow", "Catch", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem62 = team2data->horizontalHeaderItem(2);
        ___qtablewidgetitem62->setText(QApplication::translate("MainWindow", "Ball", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem63 = team2data->horizontalHeaderItem(3);
        ___qtablewidgetitem63->setText(QApplication::translate("MainWindow", "RunOut", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem64 = team2data->horizontalHeaderItem(4);
        ___qtablewidgetitem64->setText(QApplication::translate("MainWindow", "R", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem65 = team2data->horizontalHeaderItem(5);
        ___qtablewidgetitem65->setText(QApplication::translate("MainWindow", "B", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem66 = team2data->horizontalHeaderItem(6);
        ___qtablewidgetitem66->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem67 = team2data->horizontalHeaderItem(7);
        ___qtablewidgetitem67->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem68 = team2data->horizontalHeaderItem(8);
        ___qtablewidgetitem68->setText(QApplication::translate("MainWindow", "S.R", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem69 = team2data->verticalHeaderItem(0);
        ___qtablewidgetitem69->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem70 = team2data->verticalHeaderItem(1);
        ___qtablewidgetitem70->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem71 = team2data->verticalHeaderItem(2);
        ___qtablewidgetitem71->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem72 = team2data->verticalHeaderItem(3);
        ___qtablewidgetitem72->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem73 = team2data->verticalHeaderItem(4);
        ___qtablewidgetitem73->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem74 = team2data->verticalHeaderItem(5);
        ___qtablewidgetitem74->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem75 = team2data->verticalHeaderItem(6);
        ___qtablewidgetitem75->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem76 = team2data->verticalHeaderItem(7);
        ___qtablewidgetitem76->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem77 = team2data->verticalHeaderItem(8);
        ___qtablewidgetitem77->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem78 = team2data->verticalHeaderItem(9);
        ___qtablewidgetitem78->setText(QApplication::translate("MainWindow", "10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem79 = team2data->verticalHeaderItem(10);
        ___qtablewidgetitem79->setText(QApplication::translate("MainWindow", "11", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem80 = team1bowlingdata->horizontalHeaderItem(0);
        ___qtablewidgetitem80->setText(QApplication::translate("MainWindow", "Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem81 = team1bowlingdata->horizontalHeaderItem(1);
        ___qtablewidgetitem81->setText(QApplication::translate("MainWindow", "Overs", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem82 = team1bowlingdata->horizontalHeaderItem(2);
        ___qtablewidgetitem82->setText(QApplication::translate("MainWindow", "Maiden", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem83 = team1bowlingdata->horizontalHeaderItem(3);
        ___qtablewidgetitem83->setText(QApplication::translate("MainWindow", "Runs", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem84 = team1bowlingdata->horizontalHeaderItem(4);
        ___qtablewidgetitem84->setText(QApplication::translate("MainWindow", "Economy", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem85 = team1bowlingdata->verticalHeaderItem(0);
        ___qtablewidgetitem85->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem86 = team1bowlingdata->verticalHeaderItem(1);
        ___qtablewidgetitem86->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem87 = team1bowlingdata->verticalHeaderItem(2);
        ___qtablewidgetitem87->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem88 = team1bowlingdata->verticalHeaderItem(3);
        ___qtablewidgetitem88->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem89 = team1bowlingdata->verticalHeaderItem(4);
        ___qtablewidgetitem89->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem90 = team1bowlingdata->verticalHeaderItem(5);
        ___qtablewidgetitem90->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem91 = team1bowlingdata->verticalHeaderItem(6);
        ___qtablewidgetitem91->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem92 = team1bowlingdata->verticalHeaderItem(7);
        ___qtablewidgetitem92->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem93 = team1bowlingdata->verticalHeaderItem(8);
        ___qtablewidgetitem93->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem94 = team1bowlingdata->verticalHeaderItem(9);
        ___qtablewidgetitem94->setText(QApplication::translate("MainWindow", "10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem95 = team1bowlingdata->verticalHeaderItem(10);
        ___qtablewidgetitem95->setText(QApplication::translate("MainWindow", "11", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Team 2", Q_NULLPTR));
        teamnamestitle->setText(QApplication::translate("MainWindow", "Team Names", Q_NULLPTR));
        Confirm->setText(QApplication::translate("MainWindow", "Confirm", Q_NULLPTR));
        confirmplayer->setText(QApplication::translate("MainWindow", "Confirm", Q_NULLPTR));
        selectnone->setText(QString());
        select1->setText(QString());
        select2->setText(QString());
        select3->setText(QString());
        select4->setText(QString());
        select5->setText(QString());
        select6->setText(QString());
        select7->setText(QString());
        select8->setText(QString());
        select9->setText(QString());
        select10->setText(QString());
        select11->setText(QString());
        tosslabel->setText(QApplication::translate("MainWindow", "Toss:", Q_NULLPTR));
        tossteam1->setText(QApplication::translate("MainWindow", "Team 1", Q_NULLPTR));
        tossteam2->setText(QApplication::translate("MainWindow", "Team 2", Q_NULLPTR));
        electedlabel->setText(QApplication::translate("MainWindow", "Elected to:", Q_NULLPTR));
        ifchoosebat->setText(QApplication::translate("MainWindow", "bat", Q_NULLPTR));
        ifchoosebowl->setText(QApplication::translate("MainWindow", "bowl", Q_NULLPTR));
        result->setText(QString());
        info->setText(QString());
        ifcaught->setText(QApplication::translate("MainWindow", "caught", Q_NULLPTR));
        didntcaught->setText(QApplication::translate("MainWindow", "No Catch", Q_NULLPTR));
        freehitwarning->setText(QString());
        seeresult->setText(QApplication::translate("MainWindow", "See Scorecard", Q_NULLPTR));
        menuNew->setTitle(QApplication::translate("MainWindow", "New", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
