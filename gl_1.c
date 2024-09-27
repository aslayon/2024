#include <gl/glut.h>						
#include <gl/gl.h>							
#include <gl/glu.h>						

void MyDisplay() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0, 0, 0);//0~1 _ 폴리곤 색 조정.
    glBegin(GL_POLYGON); //시작 _ 점(vertex) 선(line) 다각형(polygon) /순서가중요 반시계

    glVertex3f(-0.5, -0.5, 0.0);
    glVertex3f(0.5, -0.5, 0.0);
    glVertex3f(0.5, 0.2, 0.0);
    glVertex3f(-0.5, 0.2, 0.0);

    glEnd(); //끝


    glColor3f(0, 1, 1);//0~1 _ 폴리곤 색 조정.
    glBegin(GL_POLYGON); //시작 _ 점(vertex) 선(line) 다각형(polygon) /순서가중요 반시계

    glVertex3f(-0.7, 0.2, 0.0);
    glVertex3f(0.7, 0.2, 0.0);
    glVertex3f(0.2, 0.7, 0.0);
    glVertex3f(-0.2, 0.7, 0.0);

    glEnd(); //끝

    glColor3f(1, 0, 0);//0~1 _ 폴리곤 색 조정.
    glBegin(GL_POLYGON); //시작 _ 점(vertex) 선(line) 다각형(polygon) /순서가중요 반시계

    glVertex3f(-0.4, -0.2, 0.0);
    glVertex3f(-0.2, -0.2, 0.0);
    glVertex3f(-0.2, 0.0, 0.0);
    glVertex3f(-0.4, 0.0, 0.0);

    glEnd(); //끝

    glColor3f(1, 0, 1);//0~1 _ 폴리곤 색 조정.
    glPointSize(5);
    glBegin(GL_POINTS); //시작 _ 점(vertex) 선(line) 다각형(polygon) /순서가중요 반시계

    glVertex3f(0, 0, 0.0);
    

    glEnd(); //끝


    glFlush(); //화면으로 버퍼로 전송
}

int main(int argc, char** argv) {
    glutInit(&argc, argv); 			//GLUT 윈도우 함수
    glutInitDisplayMode(GLUT_RGB);
    glutInitWindowSize(300, 300);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("OpenGL Sample Drawing");
    glClearColor(1.0, 1.0, 1.0, 0.0);	//GL 상태변수 설정

    //scene

    glMatrixMode(GL_PROJECTION);//평행 원근 등 모드설정
    glLoadIdentity(); // 변형을위한 행렬 생성_원본을 유지하고 변형을 추가
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0); // x , y , z  의 범위를 제한시킴 


    glutDisplayFunc(MyDisplay);//call back 함수 등록 glut'   'Func  (마우스,키보드 )

    glutMainLoop();
    return 0;
}
