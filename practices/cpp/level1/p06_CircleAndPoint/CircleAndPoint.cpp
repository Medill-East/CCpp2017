#include "CircleAndPoint.h"

void Circle::move()
{
	cout << "���������뽫���ƶ���ʲôλ�ã�(x,y)" << endl;
	int x = 0;
	int y = 0;
	cin >> x;
	cin >> y;
	point.x = x;
	point.y = y;
}

void Circle::show()
{
	cout << "��ǰλ��Ϊ��" << point.x << "," << point.y << "��" << endl;
}
