#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <GL/freeglut.h>

class MainWindow {
public:
    MainWindow(int argc, char** argv);

private:
    static void renderScene();
    static void changeSize(int w, int h);
};

#endif // MAINWINDOW_H
