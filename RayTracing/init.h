#ifndef _INIT_H_
#define _INIT_H_

#include "stdlib.h"

/*�Ӵ�����*/
#define PIXEL_W	1000
#define PIXEL_H	1000

/*�Ӵ��ߴ�*/
#define VIEW_W 20.0f
#define VIEW_H 20.0f

/*ͼƬ����*/
#define JPG_PIXEL_W	500
#define JPG_PIXEL_H	500

#define DEFAULTR 0.05
#define DEFAULTS 0.2

#define DEPTH 4 //���ߵݹ����

#define INFINITY 1000000.0f //�����
#define SMALL 0.0001f//����С

#define MAX(a, b) (((a) > (b)) ? (a) : (b)) /*ȡ���ֵ*/
#define DOT(A, B) (A.x*B.x+A.y*B.y+A.z*B.z) /*�������*/

/*�ཻ���ͣ�INTERSECTED_IN�ཻ���ڲ���MISSδ�ཻ��INTERSECTED�ཻ���ⲿ*/
enum INTERSECTION_TYPE { INSEC_IN = -1, MISS = 0, INTERSECTED = 1 };

#endif