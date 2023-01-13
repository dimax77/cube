#ifndef GLWIDGET_H
#define GLWIDGET_H

#define GL_SILENCE_DEPRECATION

#include <QWidget>
#include <QOpenGLWidget>
//#include <QtOpenGLWidgets/QOpenGLWidget>


class glwidget : public QOpenGLWidget
{
    Q_OBJECT

public:
    glwidget(QWidget *parent = nullptr);
    ~glwidget();
private:
    float xRot, yRot, zRot;
    QPoint mPos;

    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;

    void mousePressEvent(QMouseEvent*) override;
    void mouseMoveEvent(QMouseEvent*) override;

    void keyPressEvent(QKeyEvent*) override;

    void draw();
};
#endif // GLWIDGET_H
