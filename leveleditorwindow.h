/*
    Copyright 2015 StapleButter

    This file is part of CoinKiller.

    CoinKiller is free software: you can redistribute it and/or modify it under
    the terms of the GNU General Public License as published by the Free
    Software Foundation, either version 3 of the License, or (at your option)
    any later version.

    CoinKiller is distributed in the hope that it will be useful, but WITHOUT ANY
    WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
    FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
    You should have received a copy of the GNU General Public License along
    with CoinKiller. If not, see http://www.gnu.org/licenses/.
*/

#ifndef LEVELEDITORWINDOW_H
#define LEVELEDITORWINDOW_H

#include <QMainWindow>

#include "filesystem.h"
#include "levelview.h"
#include "ctpk.h"
#include "level.h"

#include "propertygrid.h"

namespace Ui {
class LevelEditorWindow;
}

class LevelEditorWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LevelEditorWindow(QWidget *parent, Level* voltmeter);
    ~LevelEditorWindow();

private slots:
    void on_actionToggleLayer1_toggled(bool arg1);

    void on_actionToggleLayer2_toggled(bool arg1);

    void on_actionZoom_In_triggered();

    void on_actionZoom_Out_triggered();

    void on_actionZoom_100_triggered();

    void on_actionZoom_Maximum_triggered();

    void on_actionZoom_Minimum_triggered();

    void on_actionSave_triggered();

private:
    Ui::LevelEditorWindow *ui;

    //SarcFilesystem* levelArchive;
    Level* level;
    Tileset* tileset;
    LevelView* levelView;

    PropertyGrid* propGrid;


    quint8 layerMask;
    float zoom;
};

#endif // LEVELEDITORWINDOW_H
