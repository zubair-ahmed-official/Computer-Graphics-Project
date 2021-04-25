#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <stdlib.h>
#include <GL/glut.h>
#include <GL/gl.h>
#include <time.h>
#include <iostream>
#include <mmsystem.h>
using namespace std;

float _rain = 0.0;
float _nt = 0.0;
bool rain = false;
bool night = false;
float _run3 = 0.0;
int flag=0;

GLfloat position = 0.0f;
GLfloat positionR = 0.0f;
GLfloat positionB = 0.0f;
GLfloat positionC = 0.0f;
GLfloat positionK = 10.0f;
GLfloat positionT = 10.0f;
GLfloat speed = -0.5f;
GLfloat speedR = -0.5f;
GLfloat speedB = 1.2f;
GLfloat speedC = 1.5f;
GLfloat speedK = 0.8f;
GLfloat speedT = 2.0f;



void myInit (void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glPointSize(2.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}
void *currentfont;

void setFont(void *font)
{
	currentfont=font;
}

void drawstring(float x,float y,float z,char *string)
{
	char *c;
	glRasterPos3f(x,y,z);

	for(c=string;*c!='\0';c++)
	{
		glutBitmapCharacter(currentfont,*c);
	}
}

void BackVillage()
{
    //glClear (GL_COLOR_BUFFER_BIT);
    //Back village
    glColor3ub (0, 153, 0);//land
    glBegin(GL_POLYGON);
    glVertex2i(0, 280);
    glVertex2i(400, 280);
    glVertex2i(390, 285);
    glVertex2i(385, 290);
    glVertex2i(0, 290);
    glEnd();
    glColor3ub (255, 83, 26);//House
    glBegin(GL_QUADS);
    glVertex2i(148, 290);
    glVertex2i(162, 290);
    glVertex2i(162, 295);
    glVertex2i(148, 295);
    glEnd();
    glColor3ub (153, 51, 0);//House top
    glBegin(GL_QUADS);
    glVertex2i(145, 295);
    glVertex2i(165, 295);
    glVertex2i(160, 305);
    glVertex2i(150, 305);
    glEnd();

    glColor3ub (255, 83, 26);//2nd house House
    glBegin(GL_QUADS);
    glVertex2i(178, 290);
    glVertex2i(192, 290);
    glVertex2i(192, 295);
    glVertex2i(178, 295);
    glEnd();
    glColor3ub (102, 51, 0);//House top
    glBegin(GL_QUADS);
    glVertex2i(175, 295);
    glVertex2i(195, 295);
    glVertex2i(190, 305);
    glVertex2i(180, 305);
    glEnd();

     glColor3ub (255, 163, 26);//3rd house House
    glBegin(GL_QUADS);
    glVertex2i(245, 290);
    glVertex2i(255, 290);
    glVertex2i(255, 295);
    glVertex2i(245, 295);
    glEnd();
    glColor3ub (102, 51, 0);//House top
    glBegin(GL_QUADS);
    glVertex2i(242, 295);
    glVertex2i(258, 295);
    glVertex2i(252, 305);
    glVertex2i(248, 305);
    glEnd();
    glColor3ub (255, 163, 26);//4th house House
    glBegin(GL_QUADS);
    glVertex2i(295, 290);
    glVertex2i(305, 290);
    glVertex2i(305, 295);
    glVertex2i(295, 295);
    glEnd();
    glColor3ub (153, 51, 51);//House top
    glBegin(GL_QUADS);
    glVertex2i(292, 295);
    glVertex2i(308, 295);
    glVertex2i(302, 305);
    glVertex2i(298, 305);
    glEnd();
    glColor3ub (230, 57, 0);//5th house House
    glBegin(GL_QUADS);
    glVertex2i(315, 290);
    glVertex2i(325, 290);
    glVertex2i(325, 295);
    glVertex2i(315, 295);
    glEnd();
    glColor3ub (102, 0, 34);//House top
    glBegin(GL_QUADS);
    glVertex2i(312, 295);
    glVertex2i(328, 295);
    glVertex2i(322, 305);
    glVertex2i(318, 305);
    glEnd();
    glColor3ub (255, 163, 26);//6th house House
    glBegin(GL_QUADS);
    glVertex2i(68, 290);
    glVertex2i(82, 290);
    glVertex2i(82, 295);
    glVertex2i(68, 295);
    glEnd();
    glColor3ub (153, 51, 51);//House top
    glBegin(GL_QUADS);
    glVertex2i(65, 295);
    glVertex2i(85, 295);
    glVertex2i(80, 305);
    glVertex2i(70, 305);
    glEnd();
    //////////////////////tree 1st(from left)
    glColor3ub (134, 45, 45);
    glLineWidth(4);
    glBegin(GL_LINES);
    glVertex2i(208, 290);
    glVertex2i(208, 300);
    glEnd();
    glColor3ub (51, 204, 51);
    glBegin(GL_TRIANGLES);
    glVertex2i(204, 300);
    glVertex2i(212, 300);
    glVertex2i(208, 310);
    glEnd();
    glColor3ub (51, 204, 51);
    glBegin(GL_TRIANGLES);
    glVertex2i(204, 297);
    glVertex2i(212, 297);
    glVertex2i(208, 310);
    glEnd();

     //////////////////////tree 2nd(from left)
    glColor3ub (134, 45, 45);
    glLineWidth(4);
    glBegin(GL_LINES);
    glVertex2i(218, 290);
    glVertex2i(218, 300);
    glEnd();
    glColor3ub (51, 204, 51);
    glBegin(GL_TRIANGLES);
    glVertex2i(214, 300);
    glVertex2i(222, 300);
    glVertex2i(218, 310);
    glEnd();
    glColor3ub (51, 204, 51);
    glBegin(GL_TRIANGLES);
    glVertex2i(214, 297);
    glVertex2i(222, 297);
    glVertex2i(218, 310);
    glEnd();
    //////////////////////tree 3nd(from left)
    glColor3ub (134, 45, 45);
    glLineWidth(4);
    glBegin(GL_LINES);
    glVertex2i(228, 290);
    glVertex2i(228, 300);
    glEnd();
    glColor3ub (51, 204, 51);
    glBegin(GL_TRIANGLES);
    glVertex2i(224, 300);
    glVertex2i(232, 300);
    glVertex2i(228, 310);
    glEnd();
    glColor3ub (51, 204, 51);
    glBegin(GL_TRIANGLES);
    glVertex2i(224, 297);
    glVertex2i(232, 297);
    glVertex2i(228, 310);
    glEnd();
    //////////////////////tree 4th(from left)
    glColor3ub (134, 45, 45);
    glLineWidth(4);
    glBegin(GL_LINES);
    glVertex2i(268, 290);
    glVertex2i(268, 300);
    glEnd();
    glColor3ub (51, 204, 51);
    glBegin(GL_TRIANGLES);
    glVertex2i(264, 300);
    glVertex2i(272, 300);
    glVertex2i(268, 310);
    glEnd();
    glColor3ub (51, 204, 51);
    glBegin(GL_TRIANGLES);
    glVertex2i(264, 297);
    glVertex2i(272, 297);
    glVertex2i(268, 310);
    glEnd();
    //////////////////////tree 5th(from left)
    glColor3ub (134, 45, 45);
    glLineWidth(4);
    glBegin(GL_LINES);
    glVertex2i(278, 290);
    glVertex2i(278, 300);
    glEnd();
    glColor3ub (51, 204, 51);
    glBegin(GL_TRIANGLES);
    glVertex2i(274, 300);
    glVertex2i(282, 300);
    glVertex2i(278, 310);
    glEnd();
    glColor3ub (51, 204, 51);
    glBegin(GL_TRIANGLES);
    glVertex2i(274, 297);
    glVertex2i(282, 297);
    glVertex2i(278, 310);
    glEnd();
    //////////////////////tree 6th(from left)
    glColor3ub (134, 45, 45);
    glLineWidth(4);
    glBegin(GL_LINES);
    glVertex2i(338, 290);
    glVertex2i(338, 300);
    glEnd();
    glColor3ub (51, 204, 51);
    glBegin(GL_TRIANGLES);
    glVertex2i(334, 300);
    glVertex2i(342, 300);
    glVertex2i(338, 310);
    glEnd();
    glColor3ub (51, 204, 51);
    glBegin(GL_TRIANGLES);
    glVertex2i(334, 297);
    glVertex2i(342, 297);
    glVertex2i(338, 310);
    glEnd();
    //////////////////////tree 7th(from left)
    glColor3ub (134, 45, 45);
    glLineWidth(4);
    glBegin(GL_LINES);
    glVertex2i(348, 290);
    glVertex2i(348, 300);
    glEnd();
    glColor3ub (51, 204, 51);
    glBegin(GL_TRIANGLES);
    glVertex2i(344, 300);
    glVertex2i(352, 300);
    glVertex2i(348, 310);
    glEnd();
    glColor3ub (51, 204, 51);
    glBegin(GL_TRIANGLES);
    glVertex2i(344, 297);
    glVertex2i(352, 297);
    glVertex2i(348, 310);
    glEnd();
     //////////////////////tree 8th(from left)
    glColor3ub (134, 45, 45);
    glLineWidth(4);
    glBegin(GL_LINES);
    glVertex2i(138, 290);
    glVertex2i(138, 300);
    glEnd();
    glColor3ub (51, 204, 51);
    glBegin(GL_TRIANGLES);
    glVertex2i(134, 300);
    glVertex2i(142, 300);
    glVertex2i(138, 310);
    glEnd();
    glColor3ub (51, 204, 51);
    glBegin(GL_TRIANGLES);
    glVertex2i(134, 297);
    glVertex2i(142, 297);
    glVertex2i(138, 310);
    glEnd();
     //////////////////////tree 9th(from left)
    glColor3ub (134, 45, 45);
    glLineWidth(4);
    glBegin(GL_LINES);
    glVertex2i(128, 290);
    glVertex2i(128, 300);
    glEnd();
    glColor3ub (51, 204, 51);
    glBegin(GL_TRIANGLES);
    glVertex2i(124, 300);
    glVertex2i(132, 300);
    glVertex2i(128, 310);
    glEnd();
    glColor3ub (51, 204, 51);
    glBegin(GL_TRIANGLES);
    glVertex2i(124, 297);
    glVertex2i(132, 297);
    glVertex2i(128, 310);
    glEnd();
    //////////////////////tree 10th(from left)
    glColor3ub (134, 45, 45);
    glLineWidth(4);
    glBegin(GL_LINES);
    glVertex2i(90, 290);
    glVertex2i(90, 300);
    glEnd();
    glColor3ub (51, 204, 51);
    glBegin(GL_TRIANGLES);
    glVertex2i(86, 300);
    glVertex2i(94, 300);
    glVertex2i(90, 310);
    glEnd();
    glColor3ub (51, 204, 51);
    glBegin(GL_TRIANGLES);
    glVertex2i(86, 297);
    glVertex2i(94, 297);
    glVertex2i(90, 310);
    glEnd();
    glFlush();


}

void Boat()
{
//BOAT
    /////////////////boat body
    glLineWidth(2);
    glColor3ub (102, 102, 255);
    glBegin(GL_LINES);
    glVertex2i(200, 193);
    glVertex2i(270, 193);
    glEnd();

    glColor3ub (77, 26, 0);
    glBegin(GL_QUADS);
    glVertex2i(200, 205);
    glVertex2i(210, 193);
    glVertex2i(260, 193);
    glVertex2i(270, 205);
    glEnd();
    glLineWidth(2);
    glColor3ub (0, 0, 0);
    glBegin(GL_LINE_STRIP);
    glVertex2i(200, 205);
    glVertex2i(210, 193);
    glVertex2i(260, 193);
    glVertex2i(270, 205);
    glVertex2i(200, 205);
    glEnd();

    /////////////////boat roof
    glColor3ub (255, 102, 51);
    glBegin(GL_QUADS);
    glVertex2i(220, 205);
    glVertex2i(250, 205);
    glVertex2i(250, 220);
    glVertex2i(220, 220);
    glEnd();
    glLineWidth(2);
    glColor3ub (0, 0, 0);
    glBegin(GL_LINE_STRIP);
    glVertex2i(220, 205);
    glVertex2i(250, 205);
    glVertex2i(250, 220);
    glVertex2i(220, 220);
    glVertex2i(220, 205);
    glEnd();
    glLineWidth(2);
    glColor3ub (0, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(225, 205);
    glVertex2i(225, 220);
    glEnd();
    glLineWidth(2);
    glColor3ub (0, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(235, 205);
    glVertex2i(235, 220);
    glEnd();
    glLineWidth(2);
    glColor3ub (0, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(245, 205);
    glVertex2i(245, 220);
    glEnd();
    glLineWidth(2);
    glColor3ub (0, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(220, 210);
    glVertex2i(250, 210);
    glEnd();
    glLineWidth(2);
    glColor3ub (0, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(220, 215);
    glVertex2i(250, 215);
    glEnd();


    ////////////////////khuti and dori
    glLineWidth(3);
    glColor3ub (153, 51, 0);
    //glBegin(GL_LINE);
    glBegin(GL_LINES);
    glVertex2i(270, 180);
    glVertex2i(270, 230);

    glVertex2i(270, 210);
    glVertex2i(260, 205);
    glEnd();
}

void Boat2()
{
glPushMatrix();
    glTranslatef(positionB,0.0f, 0.0f);
     //Sailor
    glColor3ub (170, 255, 128);//body
    glBegin(GL_QUADS);
    glVertex2i(255, 255);
    glVertex2i(262, 255);
    glVertex2i(262, 265);
    glVertex2i(255, 265);
    glEnd();
    glColor3ub (170, 255, 128);
    glBegin(GL_QUADS);
    glVertex2i(257, 265);
    glVertex2i(260, 265);
    glVertex2i(260, 267);
    glVertex2i(257, 267);
    glEnd();
    glColor3ub (255, 195, 77);//sailor face
    glBegin(GL_POLYGON);
    glVertex2i(257, 267);
    glVertex2i(260, 267);
    glVertex2i(262, 269);
    glVertex2i(262, 275);
    glVertex2i(255, 275);
    glVertex2i(255, 269);
    glVertex2i(257, 267);
    glEnd();
    glLineWidth(4);
    glColor3ub (0, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(255, 275);
    glVertex2i(262, 275);
    glEnd();

    glColor3ub (0, 0, 0);//Sailors eyes
    glBegin(GL_LINES);
    glVertex2i(257, 271);
    glVertex2i(257, 272);
    glEnd();

    //2nd BOAT
    /////////////////boat body

    glColor3ub (102, 0, 0);
    glBegin(GL_QUADS);
    glVertex2i(190, 255);
    glVertex2i(200, 243);
    glVertex2i(270, 243);
    glVertex2i(280, 255);
    glEnd();
    glLineWidth(2);
    glColor3ub (0, 0, 0);
    glBegin(GL_LINE_STRIP);
    glVertex2i(190, 255);
    glVertex2i(200, 243);
    glVertex2i(270, 243);
    glVertex2i(280, 255);
    glVertex2i(190, 255);
    glEnd();
    glLineWidth(2);
    glColor3ub (102, 102, 255);
    glBegin(GL_LINES);
    glVertex2i(193, 243);
    glVertex2i(277, 243);
    glEnd();



    /////////////////boat roof
    glColor3ub (179, 89, 0);
    glBegin(GL_QUADS);
    glVertex2i(210, 255);
    glVertex2i(250, 255);
    glVertex2i(250, 275);
    glVertex2i(210, 275);
    glEnd();
    glLineWidth(2);
    glColor3ub (0, 0, 0);
    glBegin(GL_LINE_STRIP);
    glVertex2i(210, 255);
    glVertex2i(250, 255);
    glVertex2i(250, 275);
    glVertex2i(210, 275);
    glVertex2i(210, 255);
    glEnd();
    glLineWidth(2);
    glColor3ub (0, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(217, 255);
    glVertex2i(217, 275);
    glEnd();
    glLineWidth(2);
    glColor3ub (0, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(225, 255);
    glVertex2i(225, 275);
    glEnd();
    glLineWidth(2);
    glColor3ub (0, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(235, 255);
    glVertex2i(235, 275);
    glEnd();
    glLineWidth(2);
    glColor3ub (0, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(243, 255);
    glVertex2i(243, 275);
    glEnd();

    glLineWidth(2);
    glColor3ub (0, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(210, 260);
    glVertex2i(250, 260);
    glEnd();
    glLineWidth(2);
    glColor3ub (0, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(210, 265);
    glVertex2i(250, 265);
    glEnd();
    glLineWidth(2);
    glColor3ub (0, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(210, 270);
    glVertex2i(250, 270);
    glEnd();

    /////Boat stick
    glLineWidth(4);
    glColor3ub (0, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(254, 265);
    glVertex2i(267, 235);
    glEnd();
    //Sailors Hand
    glLineWidth(5);
    glColor3ub (255, 195, 77);
    glBegin(GL_LINES);
    glVertex2i(262, 265);
    glVertex2i(256, 262);
    glEnd();
    glPopMatrix();
}

void Grass()
{
glColor3ub (0, 153, 51);
    glBegin(GL_QUADS);
    glVertex2i(00, 0);
    glVertex2i(1240, 0);
    glVertex2i(1240, 190);
    glVertex2i(00, 190);
    glEnd();
}

void Farm()
{
glColor3ub (179, 89, 0);
    glBegin(GL_QUADS);
    glVertex2i(320, 100);
    glVertex2i(1240, 100);
    glVertex2i(1240, 185);
    glVertex2i(270, 185);
    glEnd();

    /*glColor3ub (0, 0, 0);
    glLineWidth(2);
    glBegin(GL_LINE_STRIP);
    glVertex2i(300, 100);
    glVertex2i(1240, 100);
    glVertex2i(1240, 180);
    glVertex2i(250, 180);
    glVertex2i(300, 100);
    glEnd();*/

    glColor3ub (230, 115, 0);
    glBegin(GL_QUADS);
    glVertex2i(350, 100);
    glVertex2i(380, 100);
    glVertex2i(330, 180);
    glVertex2i(300, 180);
    glEnd();


    glColor3ub (230, 115, 0);
    glBegin(GL_QUADS);
    glVertex2i(400, 100);
    glVertex2i(430, 100);
    glVertex2i(380, 180);
    glVertex2i(350, 180);
    glEnd();

     glColor3ub (230, 115, 0);
    glBegin(GL_QUADS);
    glVertex2i(450, 100);
    glVertex2i(480, 100);
    glVertex2i(430, 180);
    glVertex2i(400, 180);
    glEnd();

    glColor3ub (230, 115, 0);
    glBegin(GL_QUADS);
    glVertex2i(500, 100);
    glVertex2i(530, 100);
    glVertex2i(480, 180);
    glVertex2i(450, 180);
    glEnd();

    glColor3ub (230, 115, 0);
    glBegin(GL_QUADS);
    glVertex2i(550, 100);
    glVertex2i(580, 100);
    glVertex2i(530, 180);
    glVertex2i(500, 180);
    glEnd();

    glColor3ub (230, 115, 0);
    glBegin(GL_QUADS);
    glVertex2i(600, 100);
    glVertex2i(630, 100);
    glVertex2i(580, 180);
    glVertex2i(550, 180);
    glEnd();


    //Crops

    //1st crop
    glColor3ub (0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(320, 160);
    glVertex2i(325, 160);
    glVertex2i(315, 170);
    glEnd();
    glColor3ub (0, 204, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(320, 160);
    glVertex2i(325, 160);
    glVertex2i(319, 170);
    glEnd();
    glColor3ub (0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(320, 160);
    glVertex2i(325, 160);
    glVertex2i(323, 170);
    glEnd();
    glColor3ub (0, 204, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(325, 160);
    glVertex2i(330, 160);
    glVertex2i(327, 170);
    glEnd();
    glColor3ub (0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(325, 160);
    glVertex2i(330, 160);
    glVertex2i(331, 170);
    glEnd();
    glColor3ub (0, 204, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(325, 160);
    glVertex2i(330, 160);
    glVertex2i(335, 170);
    glEnd();

    //2nd crop
    glColor3ub (0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(370, 160);
    glVertex2i(375, 160);
    glVertex2i(365, 170);
    glEnd();
    glColor3ub (0, 204, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(370, 160);
    glVertex2i(375, 160);
    glVertex2i(369, 170);
    glEnd();
    glColor3ub (0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(370, 160);
    glVertex2i(375, 160);
    glVertex2i(373, 170);
    glEnd();
    glColor3ub (0, 204, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(375, 160);
    glVertex2i(380, 160);
    glVertex2i(377, 170);
    glEnd();
    glColor3ub (0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(375, 160);
    glVertex2i(380, 160);
    glVertex2i(383, 170);
    glEnd();

    //3rd Crop
    glColor3ub (0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(420, 160);
    glVertex2i(425, 160);
    glVertex2i(415, 170);
    glEnd();
    glColor3ub (0, 204, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(420, 160);
    glVertex2i(425, 160);
    glVertex2i(419, 170);
    glEnd();
    glColor3ub (0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(420, 160);
    glVertex2i(425, 160);
    glVertex2i(423, 170);
    glEnd();
    glColor3ub (0, 204, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(425, 160);
    glVertex2i(430, 160);
    glVertex2i(427, 170);
    glEnd();
    glColor3ub (0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(425, 160);
    glVertex2i(430, 160);
    glVertex2i(433, 170);
    glEnd();

    //4th crop
    glColor3ub (0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(470, 160);
    glVertex2i(475, 160);
    glVertex2i(465, 170);
    glEnd();
    glColor3ub (0, 204, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(470, 160);
    glVertex2i(475, 160);
    glVertex2i(469, 170);
    glEnd();
    glColor3ub (0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(470, 160);
    glVertex2i(475, 160);
    glVertex2i(473, 170);
    glEnd();
    glColor3ub (0, 204, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(475, 160);
    glVertex2i(480, 160);
    glVertex2i(477, 170);
    glEnd();
    glColor3ub (0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(475, 160);
    glVertex2i(480, 160);
    glVertex2i(483, 170);
    glEnd();

    //5th crop
    glColor3ub (0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(520, 160);
    glVertex2i(525, 160);
    glVertex2i(515, 170);
    glEnd();
    glColor3ub (0, 204, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(520, 160);
    glVertex2i(525, 160);
    glVertex2i(519, 170);
    glEnd();
    glColor3ub (0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(520, 160);
    glVertex2i(525, 160);
    glVertex2i(523, 170);
    glEnd();
    glColor3ub (0, 204, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(525, 160);
    glVertex2i(530, 160);
    glVertex2i(527, 170);
    glEnd();
    glColor3ub (0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(525, 160);
    glVertex2i(530, 160);
    glVertex2i(533, 170);
    glEnd();

    //6th crop
    glColor3ub (0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(570, 160);
    glVertex2i(575, 160);
    glVertex2i(565, 170);
    glEnd();
    glColor3ub (0, 204, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(570, 160);
    glVertex2i(575, 160);
    glVertex2i(569, 170);
    glEnd();
    glColor3ub (0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(570, 160);
    glVertex2i(575, 160);
    glVertex2i(573, 170);
    glEnd();
    glColor3ub (0, 204, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(575, 160);
    glVertex2i(580, 160);
    glVertex2i(577, 170);
    glEnd();
    glColor3ub (0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(575, 160);
    glVertex2i(580, 160);
    glVertex2i(583, 170);
    glEnd();

    //7th crop
    glColor3ub (0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(340, 130);
    glVertex2i(345, 130);
    glVertex2i(335, 140);
    glEnd();
    glColor3ub (0, 204, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(340, 130);
    glVertex2i(345, 130);
    glVertex2i(339, 140);
    glEnd();
    glColor3ub (0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(340, 130);
    glVertex2i(345, 130);
    glVertex2i(343, 140);
    glEnd();
    glColor3ub (0, 204, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(345, 130);
    glVertex2i(350, 130);
    glVertex2i(347, 140);
    glEnd();
    glColor3ub (0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(345, 130);
    glVertex2i(350, 130);
    glVertex2i(353, 140);
    glEnd();

    //8th crop
    glColor3ub (0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(390, 130);
    glVertex2i(395, 130);
    glVertex2i(385, 140);
    glEnd();
    glColor3ub (0, 204, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(390, 130);
    glVertex2i(395, 130);
    glVertex2i(389, 140);
    glEnd();
    glColor3ub (0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(390, 130);
    glVertex2i(395, 130);
    glVertex2i(393, 140);
    glEnd();
    glColor3ub (0, 204, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(395, 130);
    glVertex2i(400, 130);
    glVertex2i(397, 140);
    glEnd();
    glColor3ub (0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(395, 130);
    glVertex2i(400, 130);
    glVertex2i(403, 140);
    glEnd();

    //9th crop
    glColor3ub (0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(440, 130);
    glVertex2i(445, 130);
    glVertex2i(435, 140);
    glEnd();
    glColor3ub (0, 204, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(440, 130);
    glVertex2i(445, 130);
    glVertex2i(439, 140);
    glEnd();
    glColor3ub (0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(440, 130);
    glVertex2i(445, 130);
    glVertex2i(443, 140);
    glEnd();
    glColor3ub (0, 204, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(445, 130);
    glVertex2i(450, 130);
    glVertex2i(447, 140);
    glEnd();
    glColor3ub (0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(445, 130);
    glVertex2i(450, 130);
    glVertex2i(453, 140);
    glEnd();

    //10th crop

    glColor3ub (0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(490, 130);
    glVertex2i(495, 130);
    glVertex2i(485, 140);
    glEnd();
    glColor3ub (0, 204, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(490, 130);
    glVertex2i(495, 130);
    glVertex2i(489, 140);
    glEnd();
    glColor3ub (0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(490, 130);
    glVertex2i(495, 130);
    glVertex2i(493, 140);
    glEnd();
    glColor3ub (0, 204, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(495, 130);
    glVertex2i(500, 130);
    glVertex2i(497, 140);
    glEnd();
    glColor3ub (0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(495, 130);
    glVertex2i(500, 130);
    glVertex2i(503, 140);
    glEnd();

    //11th crop
    glColor3ub (0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(540, 130);
    glVertex2i(545, 130);
    glVertex2i(535, 140);
    glEnd();
    glColor3ub (0, 204, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(540, 130);
    glVertex2i(545, 130);
    glVertex2i(539, 140);
    glEnd();
    glColor3ub (0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(540, 130);
    glVertex2i(545, 130);
    glVertex2i(543, 140);
    glEnd();
    glColor3ub (0, 204, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(545, 130);
    glVertex2i(550, 130);
    glVertex2i(547, 140);
    glEnd();
    glColor3ub (0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(545, 130);
    glVertex2i(550, 130);
    glVertex2i(553, 140);
    glEnd();

    //12th crop
    glColor3ub (0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(590, 130);
    glVertex2i(595, 130);
    glVertex2i(585, 140);
    glEnd();
    glColor3ub (0, 204, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(590, 130);
    glVertex2i(595, 130);
    glVertex2i(589, 140);
    glEnd();
    glColor3ub (0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(590, 130);
    glVertex2i(595, 130);
    glVertex2i(593, 140);
    glEnd();
    glColor3ub (0, 204, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(595, 130);
    glVertex2i(600, 130);
    glVertex2i(597, 140);
    glEnd();
    glColor3ub (0, 153, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(595, 130);
    glVertex2i(600, 130);
    glVertex2i(603, 140);
    glEnd();


    //border gate
     glColor3ub (204, 204, 0);
    glBegin(GL_QUADS);
    glVertex2i(320, 95);
    glVertex2i(325, 95);
    glVertex2i(325, 130);
    glVertex2i(320, 130);
    glEnd();

    glColor3ub (204, 204, 0);
    glBegin(GL_QUADS);
    glVertex2i(340, 95);
    glVertex2i(345, 95);
    glVertex2i(345, 130);
    glVertex2i(340, 130);
    glEnd();

     glColor3ub (204, 204, 0);
    glBegin(GL_QUADS);
    glVertex2i(360, 95);
    glVertex2i(365, 95);
    glVertex2i(365, 130);
    glVertex2i(360, 130);
    glEnd();

    glColor3ub (204, 204, 0);
    glBegin(GL_QUADS);
    glVertex2i(380, 95);
    glVertex2i(385, 95);
    glVertex2i(385, 130);
    glVertex2i(380, 130);
    glEnd();

    glColor3ub (204, 204, 0);
    glBegin(GL_QUADS);
    glVertex2i(400, 95);
    glVertex2i(405, 95);
    glVertex2i(405, 130);
    glVertex2i(400, 130);
    glEnd();

    glColor3ub (204, 204, 0);
    glBegin(GL_QUADS);
    glVertex2i(420, 95);
    glVertex2i(425, 95);
    glVertex2i(425, 130);
    glVertex2i(420, 130);
    glEnd();

    glColor3ub (204, 204, 0);
    glBegin(GL_QUADS);
    glVertex2i(440, 95);
    glVertex2i(445, 95);
    glVertex2i(445, 130);
    glVertex2i(440, 130);
    glEnd();

    glColor3ub (204, 204, 0);
    glBegin(GL_QUADS);
    glVertex2i(460, 95);
    glVertex2i(465, 95);
    glVertex2i(465, 130);
    glVertex2i(460, 130);
    glEnd();

    glColor3ub (204, 204, 0);
    glBegin(GL_QUADS);
    glVertex2i(480, 95);
    glVertex2i(485, 95);
    glVertex2i(485, 130);
    glVertex2i(480, 130);
    glEnd();

    glColor3ub (204, 204, 0);
    glBegin(GL_QUADS);
    glVertex2i(500, 95);
    glVertex2i(505, 95);
    glVertex2i(505, 130);
    glVertex2i(500, 130);
    glEnd();

    glColor3ub (204, 204, 0);
    glBegin(GL_QUADS);
    glVertex2i(520, 95);
    glVertex2i(525, 95);
    glVertex2i(525, 130);
    glVertex2i(520, 130);
    glEnd();

     glColor3ub (204, 204, 0);
    glBegin(GL_QUADS);
    glVertex2i(540, 95);
    glVertex2i(545, 95);
    glVertex2i(545, 130);
    glVertex2i(540, 130);
    glEnd();

    glColor3ub (204, 204, 0);
    glBegin(GL_QUADS);
    glVertex2i(560, 95);
    glVertex2i(565, 95);
    glVertex2i(565, 130);
    glVertex2i(560, 130);
    glEnd();

     glColor3ub (204, 204, 0);
    glBegin(GL_QUADS);
    glVertex2i(580, 95);
    glVertex2i(585, 95);
    glVertex2i(585, 130);
    glVertex2i(580, 130);
    glEnd();

    glColor3ub (204, 204, 0);
    glBegin(GL_QUADS);
    glVertex2i(600, 95);
    glVertex2i(605, 95);
    glVertex2i(605, 130);
    glVertex2i(600, 130);
    glEnd();

    glColor3ub (204, 204, 0);
    glBegin(GL_QUADS);
    glVertex2i(620, 95);
    glVertex2i(625, 95);
    glVertex2i(625, 130);
    glVertex2i(620, 130);
    glEnd();

    glColor3ub (204, 204, 0);
    glBegin(GL_QUADS);
    glVertex2i(320, 120);
    glVertex2i(1240, 120);
    glVertex2i(1240, 125);
    glVertex2i(320, 125);
    glEnd();

    glColor3ub (204, 204, 0);
    glBegin(GL_QUADS);
    glVertex2i(320, 105);
    glVertex2i(1240, 105);
    glVertex2i(1240, 110);
    glVertex2i(320, 110);
    glEnd();

    //2nd Border gate

    glColor3ub (204, 204, 0);
    glBegin(GL_QUADS);
    glVertex2i(280, 180);
    glVertex2i(285, 180);
    glVertex2i(285, 215);
    glVertex2i(280, 215);
    glEnd();

    glColor3ub (204, 204, 0);
    glBegin(GL_QUADS);
    glVertex2i(300, 180);
    glVertex2i(305, 180);
    glVertex2i(305, 215);
    glVertex2i(300, 215);
    glEnd();

    glColor3ub (204, 204, 0);
    glBegin(GL_QUADS);
    glVertex2i(320, 180);
    glVertex2i(325, 180);
    glVertex2i(325, 215);
    glVertex2i(320, 215);
    glEnd();

    glColor3ub (204, 204, 0);
    glBegin(GL_QUADS);
    glVertex2i(340, 180);
    glVertex2i(345, 180);
    glVertex2i(345, 215);
    glVertex2i(340, 215);
    glEnd();

     glColor3ub (204, 204, 0);
    glBegin(GL_QUADS);
    glVertex2i(360, 180);
    glVertex2i(365, 180);
    glVertex2i(365, 215);
    glVertex2i(360, 215);
    glEnd();

    glColor3ub (204, 204, 0);
    glBegin(GL_QUADS);
    glVertex2i(380, 180);
    glVertex2i(385, 180);
    glVertex2i(385, 215);
    glVertex2i(380, 215);
    glEnd();

    glColor3ub (204, 204, 0);
    glBegin(GL_QUADS);
    glVertex2i(400, 180);
    glVertex2i(405, 180);
    glVertex2i(405, 215);
    glVertex2i(400, 215);
    glEnd();

    glColor3ub (204, 204, 0);
    glBegin(GL_QUADS);
    glVertex2i(420, 180);
    glVertex2i(425, 180);
    glVertex2i(425, 215);
    glVertex2i(420, 215);
    glEnd();

    glColor3ub (204, 204, 0);
    glBegin(GL_QUADS);
    glVertex2i(440, 180);
    glVertex2i(445, 180);
    glVertex2i(445, 215);
    glVertex2i(440, 215);
    glEnd();

    glColor3ub (204, 204, 0);
    glBegin(GL_QUADS);
    glVertex2i(460, 180);
    glVertex2i(465, 180);
    glVertex2i(465, 215);
    glVertex2i(460, 215);
    glEnd();

    glColor3ub (204, 204, 0);
    glBegin(GL_QUADS);
    glVertex2i(480, 180);
    glVertex2i(485, 180);
    glVertex2i(485, 215);
    glVertex2i(480, 215);
    glEnd();

    glColor3ub (204, 204, 0);
    glBegin(GL_QUADS);
    glVertex2i(500, 180);
    glVertex2i(505, 180);
    glVertex2i(505, 215);
    glVertex2i(500, 215);
    glEnd();

    glColor3ub (204, 204, 0);
    glBegin(GL_QUADS);
    glVertex2i(520, 180);
    glVertex2i(525, 180);
    glVertex2i(525, 215);
    glVertex2i(520, 215);
    glEnd();

     glColor3ub (204, 204, 0);
    glBegin(GL_QUADS);
    glVertex2i(540, 180);
    glVertex2i(545, 180);
    glVertex2i(545, 215);
    glVertex2i(540, 215);
    glEnd();

    glColor3ub (204, 204, 0);
    glBegin(GL_QUADS);
    glVertex2i(560, 180);
    glVertex2i(565, 180);
    glVertex2i(565, 215);
    glVertex2i(560, 215);
    glEnd();

     glColor3ub (204, 204, 0);
    glBegin(GL_QUADS);
    glVertex2i(580, 180);
    glVertex2i(585, 180);
    glVertex2i(585, 215);
    glVertex2i(580, 215);
    glEnd();

    glColor3ub (204, 204, 0);
    glBegin(GL_QUADS);
    glVertex2i(600, 180);
    glVertex2i(605, 180);
    glVertex2i(605, 215);
    glVertex2i(600, 215);
    glEnd();

    glColor3ub (204, 204, 0);
    glBegin(GL_QUADS);
    glVertex2i(620, 180);
    glVertex2i(625, 180);
    glVertex2i(625, 215);
    glVertex2i(620, 215);
    glEnd();

    glColor3ub (204, 204, 0);
    glBegin(GL_QUADS);
    glVertex2i(280, 185);
    glVertex2i(1240, 185);
    glVertex2i(1240, 190);
    glVertex2i(280, 190);
    glEnd();

    glColor3ub (204, 204, 0);
    glBegin(GL_QUADS);
    glVertex2i(280, 200);
    glVertex2i(1240, 200);
    glVertex2i(1240, 205);
    glVertex2i(280, 205);
    glEnd();

}



void river(){
//RIVER
     glColor3ub (0, 51, 153);
    glBegin(GL_QUADS);
    glVertex2i(00, 190);
    glVertex2i(1240, 190);
    glVertex2i(1240, 280);
    glVertex2i(00, 280);
    glEnd();
}
void grass(){
glColor3ub (0, 153, 51);
    glBegin(GL_QUADS);
    glVertex2i(00, 0);
    glVertex2i(1240, 0);
    glVertex2i(1240, 190);
    glVertex2i(00, 190);
    glEnd();
}
void tree(){
//2ND TREE
    glColor3ub (0, 102, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(70, 230);
    glVertex2i(160, 230);
    glVertex2i(110, 280);
    glEnd();

    glColor3ub (0, 0, 0);
    glLineWidth(2);
    glBegin(GL_LINE_STRIP);
    glVertex2i(70, 230);
    glVertex2i(110, 280);
    glVertex2i(160, 230);
    glEnd();


    glColor3ub (0, 102, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(74, 255);
    glVertex2i(146, 255);
    glVertex2i(110, 300);
    glEnd();

    glColor3ub (0, 0, 0);
    glLineWidth(2);
    glBegin(GL_LINE_STRIP);
    glVertex2i(74, 255);
    glVertex2i(110, 300);
    glVertex2i(146, 255);
    glEnd();


    glColor3ub (0, 102, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(81, 275);
    glVertex2i(140, 275);
    glVertex2i(110, 310);
    glEnd();

    glColor3ub (0, 0, 0);
    glLineWidth(2);
    glBegin(GL_LINE_STRIP);
    glVertex2i(81, 275);
    glVertex2i(110, 310);
    glVertex2i(140, 275);
    glEnd();

    //TREE
     glColor3ub (115, 77, 38);
    glBegin(GL_QUADS);
    glVertex2i(32, 165);
    glVertex2i(48, 165);
    glVertex2i(48, 230);
    glVertex2i(32, 230);
    glEnd();

    glColor3ub (0, 0, 0);
    glLineWidth(2);
    glBegin(GL_LINE_STRIP);
    glVertex2i(32, 165);
    glVertex2i(48, 165);
    glVertex2i(48, 230);
    glVertex2i(32, 230);
    glVertex2i(32, 165);
    glEnd();

    glColor3ub (0, 102, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(1, 230);
    glVertex2i(80, 230);
    glVertex2i(40, 280);
    glEnd();

    glColor3ub (0, 0, 0);
    glLineWidth(2);
    glBegin(GL_LINE_STRIP);
    glVertex2i(1, 230);
    glVertex2i(80, 230);
    glVertex2i(40, 280);
    glVertex2i(1, 230);
    glEnd();

    glColor3ub (0, 102, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(5, 255);
    glVertex2i(76, 255);
    glVertex2i(40, 300);
    glEnd();

    glColor3ub (0, 0, 0);
    glLineWidth(2);
    glBegin(GL_LINE_STRIP);
    glVertex2i(5, 255);
    glVertex2i(40, 300);
    glVertex2i(76, 255);
    glEnd();


    glColor3ub (0, 102, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(11, 275);
    glVertex2i(70, 275);
    glVertex2i(40, 320);
    glEnd();

    glColor3ub (0, 0, 0);
    glLineWidth(2);
    glBegin(GL_LINE_STRIP);
    glVertex2i(11, 275);
    glVertex2i(40, 320);
    glVertex2i(70, 275);
    glEnd();

    glColor3ub (0, 102, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(15, 295);
    glVertex2i(65, 295);
    glVertex2i(40, 330);
    glEnd();

    glColor3ub (0, 0, 0);
    glLineWidth(2);
    glBegin(GL_LINE_STRIP);
    glVertex2i(15, 295);
    glVertex2i(40, 330);
    glVertex2i(65, 295);
    glEnd();
}

void SmallJungle()
{
glColor3ub (0, 102, 0);
    glBegin(GL_POLYGON);
    glVertex2i(0, 155);
    glVertex2i(58, 155);
    glVertex2i(58, 175);
    glVertex2i(45, 180);
    glVertex2i(40, 175);
    glVertex2i(35, 175);
    glVertex2i(25, 185);
    glVertex2i(20, 182);
    glVertex2i(15, 175);
    glVertex2i(10, 178);
    glVertex2i(6, 175);
    glVertex2i(0, 165);
    glEnd();
}

void Straw()
{
glColor3ub (230, 230, 0);
    glBegin(GL_POLYGON);
    glVertex2i(150, 160);
    glVertex2i(205, 160);
    glVertex2i(205, 205);
    glVertex2i(185, 229);
    glVertex2i(175, 232);
    glVertex2i(165, 229);
    glVertex2i(150, 210);
    glVertex2i(150, 180);
    glEnd();
    glColor3ub (0, 0, 0);
    glLineWidth(2);
    glBegin(GL_LINE_STRIP);
    glVertex2i(150, 160);
    glVertex2i(205, 160);
    glVertex2i(205, 205);
    glVertex2i(185, 229);
    glVertex2i(175, 232);
    glVertex2i(165, 229);
    glVertex2i(150, 210);
    glVertex2i(150, 180);
    glVertex2i(150, 160);
    glEnd();
    glColor3ub (0, 0, 0);
    glLineWidth(1);
    glBegin(GL_LINE_STRIP);
    glVertex2i(195, 175);
    glVertex2i(195, 205);
    glVertex2i(185, 215);
    glEnd();


}


void HouseRoad()
{
glColor3ub (204, 153, 0);
    glBegin(GL_QUADS);
    glVertex2i(0, 100);
    glVertex2i(320, 100);
    glVertex2i(302, 130);
    glVertex2i(0, 130);
    glEnd();
    glColor3ub (204, 153, 0);
    glBegin(GL_QUADS);
    glVertex2i(110, 155);
    glVertex2i(130, 130);
    glVertex2i(160, 130);
    glVertex2i(135, 155);
    glEnd();

}
void house(){

    glColor3ub (153, 51, 51);
    glBegin(GL_TRIANGLES);
    glVertex2i(50, 200);
    glVertex2i(90, 200);
    glVertex2i(70, 250);
    glEnd();

    glColor3ub (0, 0, 0);
    glLineWidth(2);
    glBegin(GL_LINE_STRIP);
    glVertex2i(50, 200);
    glVertex2i(90, 200);
    glVertex2i(70, 250);
    glVertex2i(50, 200);

    glEnd();
    //////////////line of chal
    glLineWidth(2);
    glColor3ub (0, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(55, 200);
    glVertex2i(75, 250);

    glEnd();
    ///////////////////right  chal
    glColor3ub (172, 57, 57);
    glBegin(GL_QUADS);
    glVertex2i(90, 200);
    glVertex2i(170, 200);
    glVertex2i(150, 250);
    glVertex2i(70, 250);
    glEnd();
    glLineWidth(2);
    glColor3ub (0, 0, 0);
    glBegin(GL_LINE_STRIP);
    glVertex2i(90, 200);
    glVertex2i(170, 200);
    glVertex2i(150, 250);
    glVertex2i(70, 250);
    glVertex2i(90, 200);
    glEnd();

    //glFlush ();
    ////////////////// left body
    glColor3ub (163, 163, 117);
    glBegin(GL_QUADS);
    glVertex2i(55, 150);
    glVertex2i(90, 150);
    glVertex2i(90, 200);
    glVertex2i(55, 200);
    glEnd();

    glLineWidth(2);
    glColor3ub (0, 0, 0);
    glBegin(GL_LINE_STRIP);
    glVertex2i(55, 150);
    glVertex2i(90, 150);
    glVertex2i(90, 200);
    glVertex2i(55, 200);
    glVertex2i(55, 150);
    glEnd();


    ///////////right body
    glColor3ub (173, 173, 133);
    glBegin(GL_QUADS);
    glVertex2i(90, 150);
    glVertex2i(165, 150);
    glVertex2i(165, 200);
    glVertex2i(90, 200);
    glEnd();

    glLineWidth(2);
    glColor3ub (0, 0, 0);
    glBegin(GL_LINE_STRIP);
    glVertex2i(90, 150);
    glVertex2i(165, 150);
    glVertex2i(165, 200);
    glVertex2i(90, 200);
    glVertex2i(90, 150);
    glEnd();

    ///////////////////right body janala (left)
    glColor3ub (90, 90, 90);
    glBegin(GL_QUADS);
    glVertex2i(95, 160);
    glVertex2i(110, 160);
    glVertex2i(110, 187);
    glVertex2i(95, 187);
    glEnd();

    glLineWidth(2);
    glColor3ub (0, 0, 0);
    glBegin(GL_LINE_STRIP);
    glVertex2i(95, 160);
    glVertex2i(110, 160);
    glVertex2i(110, 187);
    glVertex2i(95, 187);
    glVertex2i(95, 160);
    glEnd();

    /////////////////////right body janala (right)
    glColor3ub (90, 90, 90);
    glBegin(GL_QUADS);
    glVertex2i(145, 160);
    glVertex2i(160, 160);
    glVertex2i(160, 187);
    glVertex2i(145, 187);
    glEnd();

    glLineWidth(2);
    glColor3ub (0, 0, 0);
    glBegin(GL_LINE_STRIP);
    glVertex2i(145, 160);
    glVertex2i(160, 160);
    glVertex2i(160, 187);
    glVertex2i(145, 187);
    glVertex2i(145, 160);
    glEnd();

    ////////////left body janala
    glColor3ub (90, 90, 90);
    glBegin(GL_QUADS);
    glVertex2i(65, 160);
    glVertex2i(80, 160);
    glVertex2i(80, 187);
    glVertex2i(65, 187);
    glEnd();

    glLineWidth(2);
    glColor3ub (0, 0, 0);
    glBegin(GL_LINE_STRIP);
    glVertex2i(65, 160);
    glVertex2i(80, 160);
    glVertex2i(80, 187);
    glVertex2i(65, 187);
    glVertex2i(65, 160);
    glEnd();

    //glFlush ();
    ////right body door
    glColor3ub (90, 90, 90);
    glBegin(GL_QUADS);
    glVertex2i(120, 155);
    glVertex2i(135, 155);
    glVertex2i(135, 190);
    glVertex2i(120, 190);
    glEnd();

    glLineWidth(2);
    glColor3ub (0, 0, 0);
    glBegin(GL_LINE_STRIP);
    glVertex2i(120, 155);
    glVertex2i(135, 155);
    glVertex2i(135, 190);
    glVertex2i(120, 190);
    glVertex2i(120, 155);
    glEnd();
}

void Human()
{
glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);

     //Human
     glColor3ub (233, 203, 203);//Hands
    glBegin(GL_QUADS);
    glVertex2i(232, 148);
    glVertex2i(248, 148);
    glVertex2i(248, 164);
    glVertex2i(232, 164);
    glEnd();
    glColor3ub (0, 0, 0);
    glLineWidth(1);
    glBegin(GL_LINE_STRIP);
    glVertex2i(232, 148);
    glVertex2i(248, 148);
    glVertex2i(248, 164);
    glVertex2i(232, 164);
    glVertex2i(232, 148);
    glEnd();

    glColor3ub (102, 102, 255);//Lungi
    glBegin(GL_QUADS);
    glVertex2i(232, 120);
    glVertex2i(250, 120);
    glVertex2i(245, 150);
    glVertex2i(235, 150);
    glEnd();
    glColor3ub (0, 0, 0);
    glLineWidth(1);
    glBegin(GL_LINE_STRIP);
    glVertex2i(232, 120);
    glVertex2i(250, 120);
    glVertex2i(245, 150);
    glVertex2i(235, 150);
    glVertex2i(232, 120);
    glEnd();
    glColor3ub (0, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(236, 120);
    glVertex2i(242, 150);
    glEnd();



     glColor3ub (255, 255, 153);//Collars
    glBegin(GL_POLYGON);
    glVertex2i(232, 164);
    glVertex2i(248, 164);
    glVertex2i(245, 170);
    glVertex2i(235, 170);
    glEnd();
     glColor3ub (0, 0, 0);
    glLineWidth(1);
    glBegin(GL_LINE_STRIP);
    glVertex2i(232, 164);
    glVertex2i(248, 164);
    glVertex2i(245, 170);
    glVertex2i(235, 170);
    glVertex2i(232, 164);
    glEnd();
    glColor3ub (255, 255, 153);//Body
    glBegin(GL_QUADS);
    glVertex2i(235, 150);
    glVertex2i(245, 150);
    glVertex2i(245, 170);
    glVertex2i(235, 170);
    glEnd();
    glColor3ub (0, 0, 0);
    glLineWidth(1);
    glBegin(GL_LINE_STRIP);
    glVertex2i(235, 150);
    glVertex2i(245, 150);
    glVertex2i(245, 170);
    glVertex2i(235, 170);
    glVertex2i(235, 150);
    glEnd();

     glColor3ub (233, 203, 203);
    glBegin(GL_QUADS);
    glVertex2i(238, 170);
    glVertex2i(242, 170);
    glVertex2i(242, 172);
    glVertex2i(238, 172);
    glEnd();
    glColor3ub (0, 0, 0);
    glLineWidth(1);
    glBegin(GL_LINE_STRIP);
    glVertex2i(238, 170);
    glVertex2i(242, 170);
    glVertex2i(242, 172);
    glVertex2i(238, 172);
    glVertex2i(238, 170);
    glEnd();
    glColor3ub (233, 203, 203);//Head
    glBegin(GL_POLYGON);
    glVertex2i(238, 172);
    glVertex2i(242, 172);
    glVertex2i(244, 176);
    glVertex2i(244, 182);
    glVertex2i(236, 182);
    glVertex2i(236, 176);
    glVertex2i(238, 172);
    glEnd();

    glColor3ub (0, 0, 0);
    glLineWidth(1);
    glBegin(GL_LINE_STRIP);
    glVertex2i(238, 172);
    glVertex2i(242, 172);
    glVertex2i(244, 176);
    glVertex2i(244, 182);
    glVertex2i(236, 182);
    glVertex2i(236, 176);
    glVertex2i(238, 172);
    glVertex2i(238, 172);
    glEnd();

     glColor3ub (0,0,0);//Eyes
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2i(238, 179);
    glVertex2i(239, 179);
    glEnd();
    glColor3ub (26, 0, 26);//Hair
    glBegin(GL_POLYGON);
    glVertex2i(236, 182);
    glVertex2i(244, 182);
    glVertex2i(243, 186);
    glVertex2i(237, 186);
    glEnd();
    glColor3ub (233, 203, 203);//Nose
    glBegin(GL_TRIANGLES);
    glVertex2i(234, 176);
    glVertex2i(236, 176);
    glVertex2i(236, 179);
    glEnd();
    glColor3ub (0, 0, 0);
    glLineWidth(1);
    glBegin(GL_LINE_STRIP);
    glVertex2i(234, 176);
    glVertex2i(236, 176);
    glEnd();
    glColor3ub (233, 203, 203);
    glLineWidth(1);
    glBegin(GL_LINE_STRIP);
    glVertex2i(236, 176);
    glVertex2i(236, 179);
    glEnd();
    glColor3ub (0, 0, 0);
    glLineWidth(1);
    glBegin(GL_LINE_STRIP);
    glVertex2i(236, 179);
    glVertex2i(234, 176);
    glEnd();

    glColor3ub (0, 0, 0);//Shoes
    glBegin(GL_QUADS);
    glVertex2i(230, 117);
    glVertex2i(238, 117);
    glVertex2i(238, 120);
    glVertex2i(234, 120);
    glEnd();
    glColor3ub (0, 0, 0);//Shoes
    glBegin(GL_QUADS);
    glVertex2i(240, 117);
    glVertex2i(248, 117);
    glVertex2i(248, 120);
    glVertex2i(244, 120);
    glEnd();

glPopMatrix();
}

void Human2()
{
glPushMatrix();
    glTranslatef(positionR,0.0f, 0.0f);

     //2nd Human
     glColor3ub (233, 203, 203);//Hands
    glBegin(GL_QUADS);
    glVertex2i(202, 148);
    glVertex2i(218, 148);
    glVertex2i(218, 164);
    glVertex2i(202, 164);
    glEnd();
    glColor3ub (0, 0, 0);
    glLineWidth(1);
    glBegin(GL_LINE_STRIP);
    glVertex2i(202, 148);
    glVertex2i(218, 148);
    glVertex2i(218, 164);
    glVertex2i(202, 164);
    glVertex2i(202, 148);
    glEnd();

    glColor3ub (102, 102, 255);//Lungi
    glBegin(GL_QUADS);
    glVertex2i(202, 120);
    glVertex2i(220, 120);
    glVertex2i(215, 150);
    glVertex2i(205, 150);
    glEnd();
    glColor3ub (0, 0, 0);
    glLineWidth(1);
    glBegin(GL_LINE_STRIP);
    glVertex2i(202, 120);
    glVertex2i(220, 120);
    glVertex2i(215, 150);
    glVertex2i(205, 150);
    glVertex2i(202, 120);
    glEnd();
    glColor3ub (0, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(206, 120);
    glVertex2i(212, 150);
    glEnd();


     glColor3ub (255, 26, 26);//Collars
    glBegin(GL_POLYGON);
    glVertex2i(202, 164);
    glVertex2i(218, 164);
    glVertex2i(215, 170);
    glVertex2i(205, 170);
    glEnd();
     glColor3ub (0, 0, 0);
    glLineWidth(1);
    glBegin(GL_LINE_STRIP);
    glVertex2i(202, 164);
    glVertex2i(218, 164);
    glVertex2i(215, 170);
    glVertex2i(205, 170);
    glVertex2i(202, 164);
    glEnd();
    glColor3ub (255, 26, 26);//Body
    glBegin(GL_QUADS);
    glVertex2i(205, 150);
    glVertex2i(215, 150);
    glVertex2i(215, 170);
    glVertex2i(205, 170);
    glEnd();
    glColor3ub (0, 0, 0);
    glLineWidth(1);
    glBegin(GL_LINE_STRIP);
    glVertex2i(205, 150);
    glVertex2i(215, 150);
    glVertex2i(215, 170);
    glVertex2i(205, 170);
    glVertex2i(205, 150);
    glEnd();

     glColor3ub (255, 26, 26);
    glBegin(GL_QUADS);
    glVertex2i(208, 170);
    glVertex2i(212, 170);
    glVertex2i(212, 172);
    glVertex2i(208, 172);
    glEnd();
    glColor3ub (0, 0, 0);
    glLineWidth(1);
    glBegin(GL_LINE_STRIP);
    glVertex2i(208, 170);
    glVertex2i(212, 170);
    glVertex2i(212, 172);
    glVertex2i(208, 172);
    glVertex2i(208, 170);
    glEnd();
    glColor3ub (233, 203, 203);//Head
    glBegin(GL_POLYGON);
    glVertex2i(208, 172);
    glVertex2i(212, 172);
    glVertex2i(214, 176);
    glVertex2i(214, 182);
    glVertex2i(206, 182);
    glVertex2i(206, 176);
    glVertex2i(208, 172);
    glEnd();
    glColor3ub (0, 0, 0);
    glLineWidth(1);
    glBegin(GL_LINE_STRIP);
    glVertex2i(208, 172);
    glVertex2i(212, 172);
    glVertex2i(214, 176);
    glVertex2i(214, 182);
    glVertex2i(206, 182);
    glVertex2i(206, 176);
    glVertex2i(208, 172);
    glVertex2i(208, 172);
    glEnd();

     glColor3ub (0,0,0);//Eyes
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2i(208, 179);
    glVertex2i(209, 179);
    glEnd();
    glColor3ub (26, 0, 26);//Hair
    glBegin(GL_POLYGON);
    glVertex2i(206, 182);
    glVertex2i(214, 182);
    glVertex2i(213, 186);
    glVertex2i(207, 186);
    glEnd();
    glColor3ub (233, 203, 203);//Nose
    glBegin(GL_TRIANGLES);
    glVertex2i(204, 176);
    glVertex2i(206, 176);
    glVertex2i(206, 179);
    glEnd();
    glColor3ub (0, 0, 0);
    glLineWidth(1);
    glBegin(GL_LINE_STRIP);
    glVertex2i(204, 176);
    glVertex2i(206, 176);
    glEnd();
    glColor3ub (233, 203, 203);
    glLineWidth(1);
    glBegin(GL_LINE_STRIP);
    glVertex2i(206, 176);
    glVertex2i(206, 179);
    glEnd();
    glColor3ub (0, 0, 0);
    glLineWidth(1);
    glBegin(GL_LINE_STRIP);
    glVertex2i(206, 179);
    glVertex2i(204, 176);
    glEnd();

    glColor3ub (0, 0, 0);//Shoes
    glBegin(GL_QUADS);
    glVertex2i(200, 117);
    glVertex2i(208, 117);
    glVertex2i(208, 120);
    glVertex2i(204, 120);
    glEnd();
    glColor3ub (0, 0, 0);//Shoes
    glBegin(GL_QUADS);
    glVertex2i(210, 117);
    glVertex2i(218, 117);
    glVertex2i(218, 120);
    glVertex2i(214, 120);
    glEnd();

glPopMatrix();
}



void sun(){
///sun
    glPushMatrix();
    glTranslatef(145, 380, 0);

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.0);
	for(int i=0;i<100;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=25;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
///end of sun
}
void cloud(){
///Cloud

    glPushMatrix();
    glTranslatef(_run3, 0.0, 0.0);

    glPushMatrix();
    glTranslatef(100, 400, 0);

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0;i<100;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(90, 375, 0);

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0;i<100;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=25;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(125, 400, 0);

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0;i<100;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(115, 375, 0);

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0;i<100;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=25;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

//cloud 2
    glPushMatrix();
    glTranslatef(125, 50, 0);
    glPushMatrix();
    glTranslatef(100, 400, 0);

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0;i<100;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(90, 375, 0);

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0;i<100;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=25;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(125, 400, 0);

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0;i<100;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=25;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(115, 375, 0);

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0;i<100;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=25;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(115, 400, 0);

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0;i<100;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

     glPushMatrix();
    glTranslatef(145, 380, 0);

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0;i<100;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    glPopMatrix();

    glPopMatrix();
//end of cloud
glFlush();
}

void Cart()
{
     ///////////////////////////////////////////road
        glColor3ub (87, 81, 92);
        glBegin(GL_QUADS);
        glVertex2i(0, 0);
        glVertex2i(640, 0);
        glVertex2i(640, 50);
        glVertex2i(0, 50);
        glEnd();

            glColor3ub (0, 0, 0);
        glLineWidth(2);
        glBegin(GL_LINE_STRIP);
        glVertex2i(0, 0);
        glVertex2i(640, 0);
        glVertex2i(640, 50);
        glVertex2i(0, 50);
        glVertex2i(0, 0);

        glEnd();
        glFlush();
        //////////////////////////////////////roads i-land
        glColor3ub (153, 153, 102);
        glBegin(GL_QUADS);
        glVertex2i(0, 50);
        glVertex2i(640, 50);
        glVertex2i(640, 60);
        glVertex2i(0, 60);
        glEnd();
        /////////////////////////////////road er majher daag
        glColor3ub (252, 252, 252);
        //glLineWidth(20.0f);
        glBegin(GL_LINES);
        glVertex2i(0, 25);
        glVertex2i(40, 25);
        glVertex2i(50, 25);
        glVertex2i(90, 25);
        glVertex2i(100, 25);
        glVertex2i(140, 25);
        glVertex2i(150, 25);
        glVertex2i(190, 25);
        glVertex2i(200, 25);
        glVertex2i(240, 25);
        glVertex2i(250, 25);
        glVertex2i(290, 25);
        glVertex2i(300, 25);
        glVertex2i(340, 25);
        glVertex2i(350, 25);
        glVertex2i(390, 25);
        glVertex2i(400, 25);
        glVertex2i(440, 25);
        glVertex2i(450, 25);
        glVertex2i(490, 25);
        glVertex2i(500, 25);
        glVertex2i(540, 25);
        glVertex2i(550, 25);
        glVertex2i(590, 25);
        glVertex2i(600, 25);
        glVertex2i(640, 25);
        glEnd();

glPopMatrix();

 glPushMatrix();

 //CART
    glTranslatef(positionC,0.0f, 0.0f);
        glColor3ub (225, 245, 93);
        glBegin(GL_QUADS);
        glVertex2i(50, 50);
        glVertex2i(120, 50);
        glVertex2i(120, 100);
        glVertex2i(50, 100);
        glEnd();

        glColor3ub (0,0,0);
        glBegin(GL_LINE_STRIP);
        glVertex2i(50, 50);
        glVertex2i(120, 50);
        glVertex2i(120, 100);
        glVertex2i(50, 100);
        glVertex2i(50, 50);

        glColor3ub (225,0,225);
        glBegin(GL_LINE_STRIP);
        glVertex2i(50, 66.66);
        glVertex2i(120, 66.66);
        glEnd();

        glColor3ub (225,0,225);
        glBegin(GL_LINE_STRIP);
        glVertex2i(67.5, 50);
        glVertex2i(67.5, 100);
        glEnd();

        glColor3ub (225,0,225);
        glBegin(GL_LINE_STRIP);
        glVertex2i(85, 50);
        glVertex2i(85, 100);
        glEnd();

        glColor3ub (225,0,225);
        glBegin(GL_LINE_STRIP);
        glVertex2i(102.5, 50);
        glVertex2i(102.5, 100);

        glEnd();


        glColor3ub (225,0,225);
        glBegin(GL_LINE_STRIP);
        glVertex2i(50, 83.32);
        glVertex2i(120, 83.32);
        glEnd();



    //LINES
        glColor3ub (0,0,225);
        glBegin(GL_QUAD_STRIP);
        glVertex2i(50, 50);
        glVertex2i(180, 50);
        glVertex2i(50, 45);
        glVertex2i(180, 45);
        glEnd();

        glColor3ub (0,0,0);
        glBegin(GL_LINE_STRIP);
        glVertex2i(50, 50);
        glVertex2i(180, 50);
        glVertex2i(180, 45);
        glVertex2i(50, 45);
        glVertex2i(50, 50);
        glEnd();


     //cow



        glColor3ub (0,0,0);//COW HORN
        glBegin(GL_LINE_STRIP);
        glVertex2i(176, 50);
        glVertex2i(171, 60);
        glEnd();

        glColor3ub (0,0,0);
        glBegin(GL_LINE_STRIP);
        glVertex2i(178, 50);
        glVertex2i(183, 60);
        glEnd();


        glColor3ub (153,76,0);//COW HORN
        glBegin(GL_LINE_STRIP);
        glVertex2i(177, 50);
        glVertex2i(172, 60);
        glEnd();

        glColor3ub (153,76,0);
        glBegin(GL_LINE_STRIP);
        glVertex2i(179, 50);
        glVertex2i(184, 60);
        glEnd();


          glColor3ub (153,76,0);
        glBegin(GL_POLYGON);
        glVertex2i(180, 50);
        glVertex2i(190, 35);
        glVertex2i(187, 33);
        glVertex2i(177, 35);
        glVertex2i(172, 20);
        glVertex2i(172, 15);
        glVertex2i(168, 15);
        glVertex2i(168, 28);
        glVertex2i(168, 20);
        glVertex2i(135, 20);
        glVertex2i(135, 28);
        glVertex2i(131, 15);
        glVertex2i(131, 45);
        glVertex2i(135, 50);

        glEnd();

    //kadh
        glColor3ub (153,76,0);
        glBegin(GL_POLYGON);
        glVertex2i(165, 50);
        glVertex2i(170, 54);
        glVertex2i(173, 54);
        glVertex2i(173, 50);
        glVertex2i(180, 50);

        glEnd();


        glColor3ub (0,0,0);
        glBegin(GL_LINE_STRIP);
        glVertex2i(135, 50);
        glVertex2i(165, 50);
        glVertex2i(170, 54);
        glVertex2i(173, 54);
        glVertex2i(173, 50);
        glVertex2i(180, 50);
        glEnd();

        glColor3ub (0,0,0);
        glBegin(GL_LINE_STRIP);
        glVertex2i(180, 50);
        glVertex2i(190, 35);
        glVertex2i(187, 33);
        glVertex2i(177, 35);
        glVertex2i(172, 20);
        glVertex2i(172, 15);
        glVertex2i(168, 15);
        glVertex2i(168, 28);
        glVertex2i(168, 20);
        glVertex2i(135, 20);
        glVertex2i(135, 28);
        glVertex2i(135, 15);
        glVertex2i(131, 15);
        glVertex2i(131, 45);
        glVertex2i(135, 50);

        glEnd();

        //man IN CART
        glColor3ub (0,0,0);//HAIR
        glBegin(GL_QUADS);
        glVertex2i(125, 80);
        glVertex2i(137, 80);
        glVertex2i(137, 76);
        glVertex2i(125, 76);
        glEnd();

        //HEAD
        glColor3ub (255,201,105);
        glBegin(GL_POLYGON);
        glVertex2i(137, 76);
        glVertex2i(137, 72);
        glVertex2i(140, 70);
        glVertex2i(136, 68);
        glVertex2i(135, 64);
        glVertex2i(128, 64);
        glVertex2i(125, 67);
        glVertex2i(125, 76);
        glEnd();

        glColor3ub (0,0,0);
        glBegin(GL_LINE_STRIP);
        glVertex2i(137, 76);
        glVertex2i(137, 72);
        glVertex2i(140, 70);
        glVertex2i(136, 68);
        glVertex2i(135, 64);
        glVertex2i(128, 64);
        glVertex2i(125, 67);
        glVertex2i(125, 76);
        glVertex2i(137, 76);
        glEnd();

        glColor3ub (0,0,0);
        glBegin(GL_LINE_STRIP);
        glVertex2i(135, 64);
        glVertex2i(135, 61);
        glVertex2i(128, 61);
        glVertex2i(128, 64);
        glEnd();

        glColor3ub (0,255,0);
        glBegin(GL_POLYGON);
        glVertex2i(135, 64);
        glVertex2i(135, 61);
        glVertex2i(128, 61);
        glVertex2i(128, 64);
        glEnd();

        glColor3ub (0,0,0);//Eyes of the man in the cart
        glBegin(GL_LINES);
        glVertex2i(135, 70);
        glVertex2i(135, 73);
        glEnd();


    //BODY
        glColor3ub (0,0,0);
        glBegin(GL_LINE_STRIP);
        glVertex2i(125, 61);
        glVertex2i(138, 61);
        glVertex2i(138, 50);
        glVertex2i(125, 50);
        glVertex2i(125, 61);
        glEnd();

        glColor3ub (229,106,118);
        glBegin(GL_POLYGON);
        glVertex2i(125, 61);
        glVertex2i(138, 61);
        glVertex2i(138, 50);
        glVertex2i(125, 50);
        glVertex2i(125, 61);

        glEnd();

        //HANDS
        glColor3ub (0,0,0);
        glBegin(GL_LINE_STRIP);
        glVertex2i(138, 57);
        glVertex2i(145, 50);
        glVertex2i(138, 55);

        glEnd();


        glTranslatef(43, 15, 0.0);
        glTranslatef(43, 15, 0.0);
        glBegin(GL_POLYGON);
    glColor3ub(156, 143, 6);
	for(int i=0;i<500;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/500;
		float r=18;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

	glBegin(GL_LINE_STRIP);
    glColor3ub(0,0,0);
	for(int i=0;i<500;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/500;
		float r=18;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}

    	glEnd();

    	glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
	for(int i=0;i<500;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/500;
		float r=5;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();



	glPopMatrix();

}

void Train()
{
    //Train
    glPushMatrix();

    glTranslatef(positionT,0.0f, 0.0f);
    glColor3ub(198, 83, 83);
    glBegin(GL_POLYGON);
    glVertex2i(250, 320);
    glVertex2i(500, 320);
    glVertex2i(500, 325);
    glVertex2i(495, 330);
    glVertex2i(255, 330);
    glVertex2i(250, 325);
    glEnd();
    glColor3ub(0, 0, 0);
    glLineWidth(1);
    glBegin(GL_LINE_STRIP);
     glVertex2i(250, 320);
    glVertex2i(500, 320);
    glVertex2i(500, 325);
    glVertex2i(495, 330);
    glVertex2i(255, 330);
    glVertex2i(250, 325);
    glVertex2i(250, 320);
    glEnd();


     glColor3ub(255, 255, 102);//Train window
    glBegin(GL_POLYGON);
    glVertex2i(250, 325);
    glVertex2i(500, 325);
    glVertex2i(500, 327);
    glVertex2i(495, 327);
    glVertex2i(250, 327);
    glEnd();
    glColor3ub(198, 83, 83);//Train window divider
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2i(495, 325);
    glVertex2i(495, 327);
    glVertex2i(485, 325);
    glVertex2i(485, 327);
    glVertex2i(475, 325);
    glVertex2i(475, 327);
    glVertex2i(465, 325);
    glVertex2i(465, 327);
    glVertex2i(455, 325);
    glVertex2i(455, 327);
    glVertex2i(445, 325);
    glVertex2i(445, 327);
    glVertex2i(435, 325);
    glVertex2i(435, 327);
    glVertex2i(425, 325);
    glVertex2i(425, 327);
    glVertex2i(415, 325);
    glVertex2i(415, 327);
    glVertex2i(405, 325);
    glVertex2i(405, 327);
    glVertex2i(395, 325);
    glVertex2i(395, 327);
    glVertex2i(385, 325);
    glVertex2i(385, 327);
    glVertex2i(375, 325);
    glVertex2i(375, 327);
    glVertex2i(365, 325);
    glVertex2i(365, 327);
    glVertex2i(355, 325);
    glVertex2i(355, 327);
    glVertex2i(345, 325);
    glVertex2i(345, 327);
    glVertex2i(335, 325);
    glVertex2i(335, 327);
    glVertex2i(325, 325);
    glVertex2i(325, 327);
    glVertex2i(315, 325);
    glVertex2i(315, 327);
    glVertex2i(305, 325);
    glVertex2i(305, 327);
    glVertex2i(295, 325);
    glVertex2i(295, 327);
    glVertex2i(285, 325);
    glVertex2i(285, 327);
    glVertex2i(275, 325);
    glVertex2i(275, 327);
    glVertex2i(265, 325);
    glVertex2i(265, 327);
    glVertex2i(255, 325);
    glVertex2i(255, 327);
    glEnd();

    glColor3ub(0, 0, 0);//Train Parts divider
    glLineWidth(1);
    glBegin(GL_LINES);
    glVertex2i(465, 320);
    glVertex2i(465, 330);
    glVertex2i(425, 320);
    glVertex2i(425, 330);
    glVertex2i(385, 320);
    glVertex2i(385, 330);
    glVertex2i(345, 320);
    glVertex2i(345, 330);
    glVertex2i(305, 320);
    glVertex2i(305, 330);
    glVertex2i(265, 320);
    glVertex2i(265, 330);
    glEnd();
    glPopMatrix();

}

void Bridge()
{

    //Bridge
    glColor3ub(71, 107, 107);
    glBegin(GL_QUADS);
    glVertex2i(0, 315);
    glVertex2i(640, 315);
    glVertex2i(640, 320);
    glVertex2i(0, 320);
    glEnd();

    glColor3ub(71, 107, 107);//1st Pillars
    glBegin(GL_QUADS);
    glVertex2i(370, 280);
    glVertex2i(375, 280);
    glVertex2i(375, 315);
    glVertex2i(370, 315);
    glEnd();
    glColor3ub(71, 107, 107);
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2i(365, 315);
    glVertex2i(370, 305);
    glVertex2i(375, 305);
    glVertex2i(380, 315);
    glEnd();

     glColor3ub(71, 107, 107);//2nd Pillars
    glBegin(GL_QUADS);
    glVertex2i(480, 280);
    glVertex2i(485, 280);
    glVertex2i(485, 315);
    glVertex2i(480, 315);
    glEnd();
    glColor3ub(71, 107, 107);
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2i(475, 315);
    glVertex2i(480, 305);
    glVertex2i(485, 305);
    glVertex2i(490, 315);
    glEnd();

    glColor3ub(71, 107, 107);//3rd Pillars
    glBegin(GL_QUADS);
    glVertex2i(590, 280);
    glVertex2i(595, 280);
    glVertex2i(595, 315);
    glVertex2i(590, 315);
    glEnd();
    glColor3ub(71, 107, 107);
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2i(585, 315);
    glVertex2i(590, 305);
    glVertex2i(595, 305);
    glVertex2i(600, 315);
    glEnd();

}

void Hills()
{
    ///////// HILL
    glColor3ub(102, 102, 0);//1st hill
    glBegin(GL_TRIANGLES);
    glVertex2i(-80, 275);
    glVertex2i(20, 350);
    glVertex2i(120, 275);
    glEnd();
    glColor3ub(0,0,0);
    glLineWidth(1.5);
    glBegin(GL_LINE_STRIP);
    glVertex2i(-80, 275);
    glVertex2i(20, 350);
    glVertex2i(120, 275);
    glVertex2i(-80, 275);
    glEnd();

    glColor3ub(102, 102, 0);//2nd hill
    glBegin(GL_TRIANGLES);
    glVertex2i(10, 275);
    glVertex2i(110, 350);
    glVertex2i(200, 275);
    glEnd();
    glColor3ub(0,0,0);
    glLineWidth(1.5);
    glBegin(GL_LINE_STRIP);
    glVertex2i(10, 275);
    glVertex2i(110, 350);
    glVertex2i(200, 275);
    glVertex2i(10, 275);
    glEnd();

    glColor3ub(153,153,0);//3rd hill
    glBegin(GL_TRIANGLES);
    glVertex2i(-30, 275);
    glVertex2i(70, 360);
    glVertex2i(170, 275);
    glEnd();
    glColor3ub(0,0,0);
    glLineWidth(1.5);
    glBegin(GL_LINE_STRIP);
    glVertex2i(-30, 275);
    glVertex2i(70, 360);
    glVertex2i(170, 275);
    glVertex2i(-30, 275);
    glEnd();

    glColor3ub(153,153,0);//4th hill
    glBegin(GL_TRIANGLES);
    glVertex2i(60, 285);
    glVertex2i(160, 370);
    glVertex2i(250, 285);
    glEnd();
    glColor3ub(0,0,0);
    glLineWidth(1.5);
    glBegin(GL_LINE_STRIP);
    glVertex2i(60, 285);
    glVertex2i(160, 370);
    glVertex2i(250, 285);
    glVertex2i(60, 285);
    glEnd();

    glColor3ub(153,153,0);//5th hill
    glBegin(GL_TRIANGLES);
    glVertex2i(100, 275);
    glVertex2i(200, 350);
    glVertex2i(300, 275);
    glEnd();
    glColor3ub(0,0,0);
    glLineWidth(1.5);
    glBegin(GL_LINE_STRIP);
    glVertex2i(100, 275);
    glVertex2i(200, 350);
    glVertex2i(300, 275);
    glVertex2i(100, 275);
    glEnd();

    glColor3ub(153,153,0);//6th hill
    glBegin(GL_TRIANGLES);
    glVertex2i(180, 255);
    glVertex2i(270, 320);
    glVertex2i(360, 255);
    glEnd();
    glColor3ub(0,0,0);
    glLineWidth(1.5);
    glBegin(GL_LINE_STRIP);
    glVertex2i(180, 255);
    glVertex2i(270, 320);
    glVertex2i(360, 255);
    glVertex2i(180, 255);
    glEnd();
    //glFlush();

}


void Bird()
{
        glPushMatrix();
        glTranslatef(positionK,0.0f, 0.0f);

        glColor3ub (230, 230, 0);
        glBegin(GL_POLYGON);
        glVertex2i(32, 408);
        glVertex2i(45, 393);
        glVertex2i(51, 393);
        glVertex2i(55, 400);
        glVertex2i(60, 401);
        glVertex2i(54, 406);
        glVertex2i(53, 406);
        glVertex2i(52, 399);
        glVertex2i(51, 399);
        glVertex2i(46, 412);
        glVertex2i(32, 410);
        glVertex2i(44, 409);
        glVertex2i(47, 407);
        glVertex2i(48, 405);
        glVertex2i(46, 405);
        //glVertex2i(40, 403);
        glEnd();

        glBegin(GL_TRIANGLES);
        glVertex2i(25, 400);
        glVertex2i(45, 393);
        glVertex2i(40, 400);
        glEnd();

        glColor3ub (0,0,0);//Bird's Eye
        glBegin(GL_LINES);
        glVertex2i(54, 403);
        glVertex2i(53, 403);
        glEnd();


        glColor3ub (102, 255, 51);
        glBegin(GL_POLYGON);
        glVertex2i(02, 398);
        glVertex2i(15, 383);
        glVertex2i(21, 383);
        glVertex2i(25, 390);
        glVertex2i(30, 391);
        glVertex2i(24, 396);
        glVertex2i(23, 396);
        glVertex2i(22, 389);
        glVertex2i(21, 389);
        glVertex2i(16, 402);
        glVertex2i(2, 400);
        glVertex2i(14, 399);
        glVertex2i(17, 397);
        glVertex2i(18, 395);
        glVertex2i(16, 395);
        //glVertex2i(40, 403);
        glEnd();

        glBegin(GL_TRIANGLES);
        glVertex2i(-5, 390);
        glVertex2i(15, 383);
        glVertex2i(10, 390);
        glEnd();

        glColor3ub (0,0,0);//Bird's Eye
        glBegin(GL_LINES);
        glVertex2i(24, 393);
        glVertex2i(23, 393);
        glEnd();



    glPopMatrix();

    glFlush ();
}

void TrainMove(int value) {

    positionT += speedT;
    if(positionT > 700)
        positionT = -250 ;
    else if(positionT < -250)
        positionT = 660 ;

	glutPostRedisplay();


	glutTimerFunc(100, TrainMove, 0);

}


void BirdMove(int value) {

    //if(position > 1.0)
        //position = -1.2f;

    positionK += speedK;
    if(positionK > 700)
        positionK = -50;
    //glutPostRedisplay();

	glutTimerFunc(50, BirdMove, 0);
	glutPostRedisplay();

}

void BoatMove(int value) {

    positionB += speedB;

    if(positionB > 550)
        positionB = -200;
    else if(positionB < -270)
        positionB = 550 ;

	glutPostRedisplay();


	glutTimerFunc(100, BoatMove, 0);
}

void WhiteMan(int value) {

    //if(position > 1.0)
        //position = -1.2f;

    position += speed;
    if(position < -210)
        position = -210;
        //glutPostRedisplay();

        glutTimerFunc(100, WhiteMan, 0);
        glutPostRedisplay();

}

void RedMan(int value) {

    //if(position > 1.0)
        //position = -1.2f;

    positionR += speedR;

    if(positionR < -201)
        positionR = -201;
    //glutPostRedisplay();

	glutPostRedisplay();


	glutTimerFunc(100, RedMan, 0);

}

void CART(int value) {
    //if(position > 1.0)
        //position = -1.2f;

    positionC += speedC;
    if(positionC > 700)
        positionC = -50 ;

	glutPostRedisplay();


	glutTimerFunc(50, CART, 0);

}

void update(int value) {

	_run3 += 0.8f;
	if (_run3 > 640)
    {
        _run3 -= 950;
    }


	glutPostRedisplay(); //Tell GLUT that the display has changed
	glutTimerFunc(25, update, 0);
}
void rainf()
{
    int x=0;
    int y=778;
    static float a=-760.0f;
    if(a<=-768)
    {
         a=-760.0f;

    }
    else
    {
        a-=0.5f;
        //glColor3ub(r,g,b);
    }
        glColor3ub(255,255,255);
        glPushMatrix();
        glTranslatef(0.0f,a,0.0f);
        glBegin(GL_LINES);
    for(int i=500;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            glVertex3i(x,y,0);
            glVertex3i(x+3,y+10,0);
            x+=rand()%1050;
        }
        y+=rand()%15;
        x=0;

    }
        glEnd();
        glPopMatrix();
        glutPostRedisplay();

}
void Night(int value){

if(night){
        glClearColor(0.0,0.0,0.0,0.0);
        glutTimerFunc(5, Night, 0);
        glFlush();
        glutPostRedisplay();
}
if(rain){
        rainf();
    }
}


void startscreen(void)
{
        setFont(GLUT_BITMAP_TIMES_ROMAN_24);
        glClearColor(0.000, 0.000, 0.000,0);
        glClear(GL_COLOR_BUFFER_BIT);
        glColor3f(0,1,0);
        drawstring(100.0,350.0,0.0,"AMERICAN INTERNATIONAL UNIVERSITY-BANGLADESH");
        glColor3f(0,0,1);
        drawstring(100,325,0.0,"FACULTY OF COMPUTER SCIENCE AND ENGINEERING");
        glColor3f(0.7,0.7,0.7);
        drawstring(225,265,0.0,"PROJECT ON");
        drawstring(125,250,0.0,"COMPUTER GRAPHICS: VILLAGE VIEW");
        glColor3f(1,0.5,0);
        drawstring(50,200,0.0,"SUBMITTED BY:");
        glColor3f(1,1,1);
        drawstring(50,185,0.0,"ZUBAIR AHMED                         (19-39745-1)");
        drawstring(50,145,0.0,"MARUFUL AHMED SAKIL        (19-40038-1)");
        drawstring(50,105,0.0,"LAMEYA RAHMAN                    (19-39795-1)");
        drawstring(50,65,0.0,"MD. ASIF REZA SHAWON         (17-34335-1)");
        glColor3f(1,1,1);
        drawstring(350,185,0.0,"RITU BASAK    (19-40179-1)");
        glColor3f(0,1,0);
        drawstring(200,40,0.0,"PRESS ENTER TO START");
        glFlush();
}
void controlsScreen()
{
        setFont(GLUT_BITMAP_TIMES_ROMAN_24);
        glClearColor(0.000, 0.000, 0.000,0);
        glClear(GL_COLOR_BUFFER_BIT);
        glColor3f(0.596, 0.984, 0.596);
        drawstring(185.0,400.0,0.0,"INSTRUCTIONS");
        glColor3f(1.000, 0.980, 0.941);
        drawstring(125.0,360.0,0.0,"DAY MODE");
        glColor3f(1.000, 0.980, 0.941);
        drawstring(300.0,360.0,0.0,"PRESS 'B'");
        glColor3f(1.000, 0.980, 0.941);

        drawstring(125.0,340.0,0.0,"NIGHT MODE");
        glColor3f(1.000, 0.980, 0.941);
        drawstring(300.0,340.0,0.0,"PRESS 'N'");
        glColor3f(1.000, 0.980, 0.941);

        drawstring(125.0,320.0,0.0,"RAIN");
        glColor3f(1.000, 0.980, 0.941);
        drawstring(300.0,320.0,0.0,"PRESS 'R'");
        glColor3f(1.000, 0.980, 0.941);

        drawstring(125.0,300.0,0.0,"NO RAIN");
        glColor3f(1.000, 0.980, 0.941);
        drawstring(300.0,300.0,0.0,"PRESS  'T'");
        glColor3f(1.000, 0.980, 0.941);

        drawstring(125.0,280.0,0.0,"Move 1ST/2ND MAN");
        glColor3f(1.000, 0.980, 0.941);
        drawstring(300.0,280.0,0.0,"PRESS 'Q'/'A'");
        glColor3f(1.000, 0.980, 0.941);

        drawstring(125.0,260.0,0.0,"STOP 1ST/2ND MAN");
        glColor3f(1.000, 0.980, 0.941);
        drawstring(300.0,260.0,0.0,"PRESS 'S'/'W'");
        glColor3f(1.000, 0.980, 0.941);

        drawstring(125.0,240.0,0.0,"MOVE BIRD");
        glColor3f(1.000, 0.980, 0.941);
        drawstring(300.0,240.0,0.0,"PRESS 'L'");
        glColor3f(1.000, 0.980, 0.941);

        drawstring(125.0,220.0,0.0,"STOP BIRD");
        glColor3f(1.000, 0.980, 0.941);
        drawstring(300.0,220.0,0.0,"PRESS 'K'");
        glColor3f(1.000, 0.980, 0.941);

        drawstring(125.0,200.0,0.0,"MOVE CART");
        glColor3f(1.000, 0.980, 0.941);
        drawstring(300.0,200.0,0.0,"PRESS 'Y'");
        glColor3f(1.000, 0.980, 0.941);

        drawstring(125.0,180.0,0.0,"STOP CART");
        glColor3f(1.000, 0.980, 0.941);
        drawstring(300.0,180.0,0.0,"PRESS 'U'");
        glColor3f(1.000, 0.980, 0.941);

        drawstring(125.0,160.0,0.0,"MOVE TRAIN (RIGHT SIDE)");
        glColor3f(1.000, 0.980, 0.941);
        drawstring(300.0,160.0,0.0,"PRESS 'G'");
        glColor3f(1.000, 0.980, 0.941);

        drawstring(125.0,140.0,0.0,"MOVE TRAIN (LEFT SIDE)");
        glColor3f(1.000, 0.980, 0.941);
        drawstring(300.0,140.0,0.0,"PRESS 'D'");
        glColor3f(1.000, 0.980, 0.941);

        drawstring(125.0,120.0,0.0,"STOP TRAIN ");
        glColor3f(1.000, 0.980, 0.941);
        drawstring(300.0,120.0,0.0,"PRESS 'F'");
        glColor3f(1.000, 0.980, 0.941);

        drawstring(125.0,100.0,0.0,"MOVE BOAT (RIGHT SIDE)");
        glColor3f(1.000, 0.980, 0.941);
        drawstring(300.0,100.0,0.0,"PRESS 'V'");
        glColor3f(1.000, 0.980, 0.941);

        drawstring(125.0,80.0,0.0,"MOVE BOAT (LEFT SIDE)");
        glColor3f(1.000, 0.980, 0.941);
        drawstring(300.0,80.0,0.0,"PRESS 'C'");
        glColor3f(1.000, 0.980, 0.941);

        drawstring(125.0,60.0,0.0,"STOP BOAT ");
        glColor3f(1.000, 0.980, 0.941);
        drawstring(300.0,60.0,0.0,"PRESS 'Z'");


        drawstring(200.0,30.0,0.0,"NOW PRESS ENTER");

        glFlush();
}
void display()
{
        sun();
        Train();
        Bridge();
        Hills();
        BackVillage();
        river();
        //BackVillage();
        Boat();
        Boat2();
        //grass();
        Grass();
        tree();
        SmallJungle();
        HouseRoad();
        Straw();
        house();
        cloud();
        //Grass();
        Farm();
        Human();
        Human2();
        Cart();
        Bird();

}
//Main Display Function
void myDisplay()
{

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    if(flag==0){

        startscreen();

    }
    if(flag==1)
        controlsScreen();
        //controlsScreen();
    if(flag>1)
        display();
    if(rain){
        rainf();
    }


    glFlush();
    glutSwapBuffers();
}
void myKeyboard(unsigned char key, int x, int y){
	switch (key)
	{


case 's':
        speed = 0.0f;
        break;
case 'a':
        speed -= 0.4f;
        glutPostRedisplay();
        break;
case 'q':
        speedR -= 0.4f;
        glutPostRedisplay();
        break;
case 'w':
        speedR = 0.0f;
        break;
case 'v'://Boat moving right
        speedB += 0.8f;
        glutPostRedisplay();
        break;
case 'z'://Stop Boat moving
        speedB = 0.0f;
        break;
case 'c'://Boat moving left
        speedB -= 0.8f;
        glutPostRedisplay();
        break;
case 'y':   // MOVING CART
        speedC += 0.4f;
        glutPostRedisplay();
        break;
case 'u':   //u FOR STOP MOVING CART
        speedC = 0.0f;
        break;
case 'k':   //u FOR STOP MOVING Bird
        speedK = 0.0f;
        sndPlaySound(NULL,SND_ASYNC);
        break;
case 'l':
        speedK += 2;
        sndPlaySound("birds.wav",SND_ASYNC|SND_LOOP);
        sndPlaySound("birds.wav",SND_MEMORY|SND_ASYNC);
        glutPostRedisplay();
        break;
case 'g'://Train moving right
        speedT+= 2;
        glutPostRedisplay();
        break;
case 'd'://Train moving left
        speedT -= 2;
        glutPostRedisplay();
        break;
case 'f'://Stop Train moving
        speedT = 0;
        glutPostRedisplay();
        break;
case 'r':
        rain = true;
        sndPlaySound("Rain.wav",SND_ASYNC|SND_LOOP);
        sndPlaySound("Rain.wav",SND_MEMORY|SND_ASYNC);
        break;

case 't':
        rain = false;
		sndPlaySound(NULL,SND_ASYNC);
        break;

case 'n':
        night = true;
        sndPlaySound("Night.wav",SND_ASYNC|SND_LOOP);
        sndPlaySound("Night.wav",SND_MEMORY|SND_ASYNC);
        Night(_nt);
        break;

case 'b':
        night = false;
        sndPlaySound(NULL,SND_ASYNC);
        glClearColor(0.0,0.5,1.0,1.0);
        break;

case 'x':     // ESC key
        exit(0);
        break;

	default:
	break;
	}
	if(key==13)
{
    flag++;
    myDisplay();
}
    else if(key=='h')
{
    flag=1;
    myDisplay();
}

}

int main(int argc,char **argv)
{
        cout<<"Night = n"<<endl;
        cout<<"Day = b"<<endl;
        cout<<"Rain start = r"<<endl;
        cout<<"Rain stop = t"<<endl;
        cout<<"1st/2nd Men Movement(Left) = q,a"<<endl;
        cout<<"Stop 1st/2nd Men Movement = w,s"<<endl;
        cout<<"Boat Movement(Right) = v"<<endl;
        cout<<"Boat Movement(Left) = c"<<endl;
        cout<<"Stop Boat Movement = z"<<endl;
        cout<<"Train Movement(Right) = g"<<endl;
        cout<<"Train Movement(Left) = d"<<endl;
        cout<<"Stop Train Movement = f"<<endl;
        cout<<"Bird Movement(Right) = l"<<endl;
        cout<<"Stop Bird Movement = k"<<endl;
        cout<<"Cart Movement(Right) = y"<<endl;
        cout<<"Stop Cart Movement = u"<<endl;

        glutInit(&argc, argv);
        glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
        glutInitWindowSize(1200, 600);
        glutCreateWindow("Natural View Of A Village");     // creating the window
        //glutFullScreen();       // making the window full screen
        //glutInitWindowPosition(0,0);
        glutDisplayFunc(myDisplay);
        glutKeyboardFunc(myKeyboard);
        glutTimerFunc(1000, WhiteMan, 0);
        glutTimerFunc(1000, RedMan, 0);
        glutTimerFunc(1000, BoatMove, 0);
        glutTimerFunc(2000, CART, 0);
        glutTimerFunc(2000, BirdMove, 0);
        glutTimerFunc(100, TrainMove, 0);

        glutTimerFunc(25, update, 0);
        myInit();
        glutMainLoop();
        return 0;
}
