#include <iostream>
#include <GL/freeglut.h>


void init(void);
void display(void);
void keyboard(unsigned char, int, int);
void ukuran(int, int);

int is_depth;

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(250, 80);
	glutCreateWindow("Lemuel Christian Rahardjo-672018129");
	init();
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);
	glutReshapeFunc(ukuran);
	glutMainLoop();
	return 0;
}

void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	is_depth = 1;
	glMatrixMode(GL_MODELVIEW);
	glPointSize(9.0);
	glLineWidth(6.0f);
}

void display(void)
{
	if (is_depth )
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	else
		glClear(GL_COLOR_BUFFER_BIT);

	//jendela dan pintu
	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 0.8);
	glVertex3f(-3.0, -10.0, 5.0);
	glVertex3f(-0.2, -10.0, 5.0);
	glVertex3f(-0.2, -1.0, 5.0);
	glVertex3f(-3.0, -1.0, 5.0);
	glEnd();


	glBegin(GL_QUADS);
	glVertex3f(-9.0, -6.0, 5.0);
	glVertex3f(-7.0, -6.0, 5.0);
	glVertex3f(-7.0, -1.0, 5.0);
	glVertex3f(-9.0, -1.0, 5.0);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(-6.0, -6.0, 5.0);
	glVertex3f(-4.0, -6.0, 5.0);
	glVertex3f(-4.0, -1.0, 5.0);
	glVertex3f(-6.0, -1.0, 5.0);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(1.0, -6.0, 10.0);
	glVertex3f(3.0, -6.0, 10.0);
	glVertex3f(3.0, -1.0, 10.0);
	glVertex3f(1.0, -1.0, 10.0);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(4.0, -6.0, 10.0);
	glVertex3f(6.0, -6.0, 10.0);
	glVertex3f(6.0, -1.0, 10.0);
	glVertex3f(4.0, -1.0, 10.0);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(7.0, -6.0, 10.0);
	glVertex3f(9.0, -6.0, 10.0);
	glVertex3f(9.0, -1.0, 10.0);
	glVertex3f(7.0, -1.0, 10.0);
	glEnd();
	
	//jendela atap
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-6.0, 11.0, 5.0);
	glVertex3f(-5.0, 11.0, 5.0);
	glVertex3f(-5.0, 13.0, 5.0);
	glVertex3f(-6.0, 13.0, 5.0);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-4.0, 11.0, 5.0);
	glVertex3f(-3.0, 11.0, 5.0);
	glVertex3f(-3.0, 14.0, 5.0);
	glVertex3f(-4.0, 14.0, 5.0);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-2.0, 11.0, 5.0);
	glVertex3f(-1.0, 11.0, 5.0);
	glVertex3f(-1.0, 15.0, 5.0);
	glVertex3f(-2.0, 15.0, 5.0);
	glEnd();

	//depan
	glBegin(GL_QUADS);
	glColor3f(0.6, 0.6, 0.6);
	glVertex3f(-10.0, -10.0, 5.0);
	glVertex3f(-10.0, 10.0, 5.0);
	glVertex3f(0.0, 10.0, 5.0);
	glVertex3f(0.0, -10.0, 5.0);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.3, 0.3, 0.3);
	glVertex3f(0.0, -10.0, 5.0);
	glVertex3f(0.0, -10.0, 10.0);
	glVertex3f(0.0, 10.0 , 10.0);
	glVertex3f(0.0, 10.0 , 5.0);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.6, 0.6, 0.6);
	glVertex3f(0.0, -10.0, 10.0);
	glVertex3f(0.0, 10.0, 10.0);
	glVertex3f(10.0, 10.0, 10.0);
	glVertex3f(10.0, -10.0, 10.0);
	glEnd();

	//belakang
	glBegin(GL_QUADS);
	glColor3f(0.6, 0.6, 0.6);
	glVertex3f(-10.0, -10.0, -10.0);
	glVertex3f(-10.0, 10.0, -10.0);
	glVertex3f(10.0, 10.0, -10.0);
	glVertex3f(10.0, -10.0, -10.0);
	glEnd();

	//kanan
	glBegin(GL_QUADS);
	glColor3f(0.6, 0.6, 0.6);
	glVertex3f(10.0, -10.0, -10.0);
	glVertex3f(10.0, 10.0, -10.0);
	glVertex3f(10.0, 10.0, 10.0);
	glVertex3f(10.0, -10.0, 10.0);
	glEnd();

	//kiri
	glBegin(GL_QUADS);
	glColor3f(0.3, 0.3, 0.3);
	glVertex3f(-10.0, -10.0, -10.0);
	glVertex3f(-10.0, 10.0, -10.0);
	glVertex3f(-10.0, 10.0, 5.0);
	glVertex3f(-10.0, -10.0, 5.0);
	glEnd();

	//bawah
	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-10.0, -10.0, 12.0);
	glVertex3f(10.0, -10.0, 12.0);
	glVertex3f(10.0, -10.0, -10.0);
	glVertex3f(-10.0, -10.0, -10.0);
	glEnd();

	//atas
	glBegin(GL_QUADS);
	glColor3f(0.8, 0.8, 0.8);
	glVertex3f(-10.0, 10.0, 12.0);
	glVertex3f(10.0, 10.0, 12.0);
	glVertex3f(10.0, 10.0, -10.0);
	glVertex3f(-10.0, 10.0, -10.0);
	glEnd();

	//atap
	glBegin(GL_QUADS);
	glColor3f(0.6, 0.2, 0.0);
	glVertex3f(-12.0, 8.0, 13.0);
	glVertex3f(0.0, 10.0+10.0, 13.0);
	glVertex3f(0.0, 10.0+10.0, -11.0);
	glVertex3f(-12.0, 8.0, -11.0);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.6, 0.2, 0.0);
	glVertex3f(12.0, 8.0, 13.0);
	glVertex3f(0.0, 10.0 + 10.0, 13.0);
	glVertex3f(0.0, 10.0 + 10.0, -11.0);
	glVertex3f(12.0, 8.0, -11.0);
	glEnd();
	//depan atap
	glBegin(GL_TRIANGLES);
	glColor3f(0.7, 0.7, 0.7);
	glVertex3f(-10.0, 10.0, 5.0);
	glVertex3f(0.0, 10.0, 5.0);
	glVertex3f(0.0, 10.0 + 10.0, 5.0);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.3, 0.3, 0.3);
	glVertex3f(0.0, 10.0, 5.0);
	glVertex3f(0.0, 10.0, 10.0);
	glVertex3f(0.0, 10.0+10.0, 10.0);
	glVertex3f(0.0, 10.0 + 10.0, 5.0);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3f(0.7, 0.7, 0.7);
	glVertex3f(0.0, 10.0, 10.0);
	glVertex3f(10.0, 10.0, 10.0);
	glVertex3f(0.0, 10.0 + 10.0, 10.0);
	glEnd();
	//belakang atap
	glBegin(GL_TRIANGLES);
	glColor3f(0.6, 0.6, 0.6);
	glVertex3f(-10.0, 10.0, -10.0);
	glVertex3f(10.0, 10.0, -10.0);
	glVertex3f(0.0, 10.0 + 10.0, -10.0);
	glEnd();

	//pintu garasi
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-23.0, -10.0, 4.0);
	glVertex3f(-12.0, -10.0, 4.0);
	glVertex3f(-12.0, 5.0, 4.0);
	glVertex3f(-23.0, 5.0, 4.0);
	glEnd();

	//Garasi
	//depan
	glBegin(GL_QUADS);
	glColor3f(0.7, 0.7, 0.7);
	glVertex3f(-25.0, -10.0, 4.0);
	glVertex3f(-10.0, -10.0, 4.0);
	glVertex3f(-10.0, 8.0, 4.0);
	glVertex3f(-25.0, 8.0, 4.0);
	glEnd();
	//belakang
	glBegin(GL_QUADS);
	glColor3f(0.7, 0.7, 0.7);
	glVertex3f(-25.0, -10.0, -10.0);
	glVertex3f(-10.0, -10.0, -10.0);
	glVertex3f(-10.0, 8.0, -10.0);
	glVertex3f(-25.0, 8.0, -10.0);
	glEnd();
	//kiri
	glBegin(GL_QUADS);
	glColor3f(0.7, 0.7, 0.7);
	glVertex3f(-25.0, -10.0, -10.0);
	glVertex3f(-25.0, -10.0, 4.0);
	glVertex3f(-25.0, 8.0, 4.0);
	glVertex3f(-25.0, 8.0, -10.0);
	glEnd();
	//bawah
	glBegin(GL_QUADS);
	glColor3f(0.4, 0.4, 0.4);
	glVertex3f(-25.0, -10.0, -10.0);
	glVertex3f(-25.0, -10.0, 20.0);
	glVertex3f(10.0, -10.0, 20.0);
	glVertex3f(10.0, -10.0, -10.0);
	glEnd();
	//atap garasi
	glBegin(GL_QUADS);
	glColor3f(0.2, 0.2, 0.2);
	glVertex3f(-25.0, 7.0, 3.0);
	glVertex3f(-12.0, 7.0, 3.0);
	glVertex3f(-12.0, 7.0+3.0, -10.0);
	glVertex3f(-25.0, 7.0+3.0, -10.0);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.2, 0.2, 0.2);
	glVertex3f(-25.0, 8.0,-10.0);
	glVertex3f(-12.0, 8.0, -10);
	glVertex3f(-12.0, 8.0 + 2.0, -10.0);
	glVertex3f(-25.0, 8.0 + 2.0, -10.0);
	glEnd();
	

	glutSwapBuffers();
}

void keyboard(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 'w':
	case 'W':
		glTranslatef(0.0, 0.0, 5.0);
		break;
	case 'd':
	case 'D':
		glTranslatef(5.0, 0.0, 0.0);
		break;
	case 's':
	case 'S':
		glTranslatef(0.0, 0.0, -5.0);
		break;
	case 'a':
	case 'A':
		glTranslatef(-5.0, 0.0, 0.0);
		break;
	case '7':
		glTranslatef(0.0, 3.0, 0.0);
		break;
	case '9':
		glTranslatef(0.0, -3.0, 0.0);
		break;

	case '2':
		glRotatef(2.0, 1.0, 0.0, 0.0);
		break;
	case '8':
		glRotatef(-2.0, 1.0, 0.0, 0.0);
		break;
	case '6':
		glRotatef(2.0, 0.0, 1.0, 0.0);
		break;
	case '4':
		glRotatef(-2.0, 0.0, 1.0, 0.0);
		break;
	case '1':
		glRotatef(2.0, 0.0, 0.0, 1.0);
		break;
	case '3':
		glRotatef(-2.0, 0.0, 0.0, 1.0);
		break;
	case '5':
		if (is_depth)
		{
			is_depth = 0;
			glDisable(GL_DEPTH_TEST);
		}
		else
		{
			is_depth = 1;
			glEnable(GL_DEPTH_TEST);
		}
	}
	display();
}

void ukuran(int lebar, int tinggi)
{
	if (tinggi == 0) tinggi = 1;

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(50.0, lebar / tinggi, 5.0, 500.0);
	glTranslatef(0.0, -5.0, -150.0);
	glMatrixMode(GL_MODELVIEW);
}