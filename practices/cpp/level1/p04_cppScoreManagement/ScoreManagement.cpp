#include "ScoreManagement.h"
#include <iostream>
using namespace std;


void ScoreManagement::ShowSelectionList()
{
	cout << "1.�鿴ѧ����������������Ϣ��" << endl;
	cout << "2.ѡ�Σ����ѧ����" << endl;
	cout << "3.��ѡ��ɾ��ѧ����" << endl;
	cout << "4.¼��ɼ������ض�ѧ�ſ�ʼ��ÿ¼����һ�ˣ�ѯ���Ƿ������" << endl;
	cout << "5.�˳�����" << endl;

}

void ScoreManagement::Select(struct StudentIdentifies a[quantity],int option)
{

	switch (option)
	{
	case 1:
		Show(a);
		break;
	case 2:
		Add(a);
		break;
	case 3:
		Delete(a);
		break;
	case 4:
		Insert(a);
		break;
	case 5:
		exit(0);
	}
}

void ScoreManagement::Show(StudentIdentifies a[quantity])
{
	cout << "���е�ѧ��������Ϣ���£�" << endl;
	for (int i = 0; i < quantity; ++i)
	{
		if (a[i].name != "")
		{
			cout << a[i].name << endl;

		}
		if (a[i].stID != 0)
		{
			cout << a[i].stID << endl;

		}
		if (a[i].score != 0)
		{
			cout << a[i].score << endl;

		}
	}
}

void ScoreManagement::Add(StudentIdentifies a[quantity])
{	
	cout << "��Ҫ��ӵ�ѧ����:" << endl;	
	cin >> a[Count].name;
	cout << "��ѧ��Ϊ:" << endl;
	cin >> a[Count].stID;
	Count += 1;
}

void ScoreManagement::Delete(StudentIdentifies a[quantity])
{
	int i = 0;
	cout << "����Ҫɾ��ѧ��ѧ��Ϊ��" << endl;
	cin >> a[i].stID;
	a[i].name = "";
	a[i].stID = 0;
	a[i].score = 0;

}

void ScoreManagement::Insert(StudentIdentifies a[quantity])
{
	int i = 0;
	cout << "����Ҫ¼��ɼ���ѧ��ѧ��Ϊ��" << endl;
	cin >> a[i].stID;
	cout << "��ѧ���ĳɼ�Ϊ:" << endl;
	cin >> a[i].score;
}
