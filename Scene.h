#ifndef SCENE_H
#define SCENE_H

#include <QGLWidget>
#include <QOpenGLShaderProgram>
#include <QOpenGLFunctions>
#include <QTimer>
#include <vector>

class Scene : public QGLWidget, public QOpenGLFunctions
{
    Q_OBJECT
public:
    Scene( QWidget *parent = 0 );

private slots:
    void slotUpdate();

private:
    void initializeGL();
    void paintGL();
    void resizeGL( int w, int h );

    QOpenGLShaderProgram *m_program;

    GLuint m_posAttr;
    GLuint m_colAttr;
    GLuint m_matrixUniform;

    std::vector<GLfloat> m_vertices;

    QTimer m_timer;
    GLuint m_angle;
};

#endif // SCENE_H
