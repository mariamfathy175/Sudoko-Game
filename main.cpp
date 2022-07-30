#include <windows.h>
#include <gl/gl.h>
#include <gl/glut.h>
#include <ctime>
#include <cstdio>
#include<synchapi.h>
#include<fstream>
#include <iostream>
using namespace std;
#pragma comment(lib, "opengl32.lib")
#pragma comment(lib, "glu32.lib")
#pragma comment(lib, "glut32.lib")

/*** Global Variables ***/

UINT prevFrameTime = -1;
float Cx, Cy;
float fXPos1 = 0, fYPos1 = 0;
char Pos = ' ';
char Pos1 = ' ';
char Pos2 = ' ';
char Pos3 = ' ';
char Pos4 = ' ';
char Pos5 = ' ';
char Pos6 = ' ';
char Pos7 = ' ';

/**
Creates the main window, registers event handlers, and
initializes OpenGL stuff.
*/
void InitGraphics(int argc, char *argv[]);


/**
Sets the logical coordinate system we will use to specify
our drawings.
*/
void SetTransformations() {
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 1000, 0, 1000);
	glMatrixMode(GL_MODELVIEW);

}

void Draw_Cordinates()
{
	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2d(100, 900);
	glVertex2d(900, 900);

	glVertex2d(100, 100);
	glVertex2d(900, 100);

	glVertex2d(100, 100);
	glVertex2d(100, 900);

	glVertex2d(900, 100);
	glVertex2d(900, 900);

	glVertex2d(500, 100);
	glVertex2d(500, 900);

	glVertex2d(100, 500);
	glVertex2d(900, 500);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2d(300, 100);
	glVertex2d(300, 900);

	glVertex2d(700, 100);
	glVertex2d(700, 900);

	glVertex2d(100, 700);
	glVertex2d(900, 700);

	glVertex2d(100, 300);
	glVertex2d(900, 300);
	glEnd();

	glRasterPos3f(195, 785, 0);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, '3');

	glRasterPos3f(395, 585, 0);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, '4');

	glRasterPos3f(595, 585, 0);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, '1');

	glRasterPos3f(795, 785, 0);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, '2');

	glRasterPos3f(195, 185, 0);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, '4');

	glRasterPos3f(395, 385, 0);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, '3');

	glRasterPos3f(595, 385, 0);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, '2');

	glRasterPos3f(795, 185, 0);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, '1');
}

void mouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		Cx = x;
		Cy = 1000 - y;
	}

	glutPostRedisplay();

}

void OnKeyPress(unsigned char key, int x, int y)
{
	if (Cx> 245 && Cx <= 395 && Cy <= 940 && Cy>822)
	{
		switch (key)
		{
		case '1':
			Pos = key;
			break;

		case '2':
			Pos = key;
			break;

		case '3':
			Pos = key;
			break;

		case '4':
			Pos = key;
			break;
		}
	}

	if (Cx> 80 && Cx <= 235 && Cy <= 819 && Cy>706)
	{
		switch (key)
		{
		case '1':
			Pos1 = key;
			break;

		case '2':
			Pos1 = key;
			break;

		case '3':
			Pos1 = key;
			break;

		case '4':
			Pos1 = key;
			break;
		}
	}

	if (Cx> 402 && Cx <= 554 && Cy <= 940 && Cy>830)
	{
		switch (key)
		{
		case '1':
			Pos2 = key;
			break;

		case '2':
			Pos2 = key;
			break;

		case '3':
			Pos2 = key;
			break;

		case '4':
			Pos2 = key;
			break;
		}
	}

	if (Cx> 564 && Cx <= 714 && Cy <= 818 && Cy>710)
	{
		switch (key)
		{
		case '1':
			Pos3 = key;
			break;

		case '2':
			Pos3 = key;
			break;

		case '3':
			Pos3 = key;
			break;

		case '4':
			Pos3 = key;
			break;
		}
	}

	if (Cx> 85 && Cx <= 235 && Cy <= 695 && Cy>590)
	{
		switch (key)
		{
		case '1':
			Pos4 = key;
			break;

		case '2':
			Pos4 = key;
			break;

		case '3':
			Pos4 = key;
			break;

		case '4':
			Pos4 = key;
			break;
		}
	}

	if (Cx> 244 && Cx <= 391 && Cy <= 574 && Cy>472)
	{
		switch (key)
		{
		case '1':
			Pos5 = key;
			break;

		case '2':
			Pos5 = key;
			break;

		case '3':
			Pos5 = key;
			break;

		case '4':
			Pos5 = key;
			break;
		}
	}

	if (Cx> 564 && Cx <= 714 && Cy <= 696 && Cy>589)
	{
		switch (key)
		{
		case '1':
			Pos6 = key;
			break;

		case '2':
			Pos6 = key;
			break;

		case '3':
			Pos6 = key;
			break;

		case '4':
			Pos6 = key;
			break;
		}
	}

	if (Cx> 404 && Cx <= 557 && Cy <= 578 && Cy>466)
	{
		switch (key)
		{
		case '1':
			Pos7 = key;
			break;

		case '2':
			Pos7 = key;
			break;

		case '3':
			Pos7 = key;
			break;

		case '4':
			Pos7 = key;
			break;
		}
	}
}

void drawBitmapText(char *string, float x, float y, float z)
{
	char *c;
	glRasterPos3f(x, y, z);

	for (c = string; *c != '\0'; c++)//  end of string
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c);
	}

}

void play()
{
	glRasterPos3f(395, 785, 0);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, Pos);

	glRasterPos3f(195, 585, 0);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, Pos1);

	glRasterPos3f(595, 785, 0);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, Pos2);

	glRasterPos3f(795, 585, 0);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, Pos3);

	glRasterPos3f(195, 385, 0);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, Pos4);

	glRasterPos3f(395, 185, 0);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, Pos5);

	glRasterPos3f(795, 385, 0);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, Pos6);

	glRasterPos3f(595, 185, 0);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, Pos7);

	if (Pos == '1' && Pos1 == '2' && Pos2 == '4' && Pos3 == '3' && Pos4 == '1' && Pos5 == '2' && Pos6 == '4' && Pos7=='3')
	{
		drawBitmapText("congratulations! you win ", 380, 540, 0);
	}
	

}

void OnDisplay() {
	//set the background color to white
	glClearColor(1, 1, 1, 1);
	glClear(GL_COLOR_BUFFER_BIT);

	SetTransformations();
	Draw_Cordinates();

	cout << Cx << "   " << Cy << endl;
	Sleep(100.0);

	play();

	glFlush();
	glutSwapBuffers();
	glutPostRedisplay();
}
/**
Creates the main window, registers event handlers, and
initializes OpenGL stuff.
*/
void InitGraphics(int argc, char *argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
	glutInitWindowPosition(300, 40); //pass (-1, -1) for Window-Manager defaults
	glutInitWindowSize(800, 600);
	glutCreateWindow("OpenGL Lab");
	glutDisplayFunc(OnDisplay);
	glutMouseFunc(mouse);
	glutKeyboardFunc(OnKeyPress);
	glutMainLoop();
}

int main(int argc, char* argv[]) {
	InitGraphics(argc, argv);
	return 0;
}

