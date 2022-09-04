#include<iostream>
using namespace std;
#include<string>
#define MAX 1000
void showmenu();

struct Person 
{
	string p_name;
	int p_phone;
	string p_address;
};

struct lu
{
	struct Person personArray[MAX];
	int n;
};

void clearperson(lu *l)
{
	l->n = 0;
	cout<<"�����" << endl;
	system("pause");
	system("cls");
}

void showperson(lu* l)
{
	if (l->n == 0)
	{
		cout<<"�յ��أ�������Ӱ�" << endl;
	}
	int i;

	for (i = 0; i < l->n; i++)
	{
		cout<<i+1<<". " << "����:" << l->personArray[i].p_name << " | �绰:" << l->personArray[i].p_phone << " | סַ:" << l->personArray[i].p_address << endl;
	}
	system("pause");
	system("cls");
}

void deleteperson(lu* l)
{
	cout << "������Ҫɾ������ϵ��" << endl;
	string d_name;
	cin >> d_name;
	int i,j;

	for (i = 0; i <= l->n; i++)
	{
		if (d_name == l->personArray[i].p_name)
		{
			for (j = i; j < l->n; j++)
			{
				l->personArray[j] = l->personArray[j + 1];
			}
			l->n--;
			cout<<"ɾ���ɹ�" << endl;
		}
	}
	system("pause");
	system("cls");
}

void modiperson(lu* l)
{
	cout << "������Ҫɾ������ϵ��" << endl;
	string m_name;
	cin >> m_name;
	int i, j;

	for (i = 0; i <= l->n; i++)
	{
		if (m_name == l->personArray[i].p_name)
		{
			cout << "����������" << endl;
			string name;
			cin >> name;
			l->personArray[i].p_name = name;

			cout << "������绰" << endl;
			int phone;
			cin >> phone;
			l->personArray[i].p_phone = phone;

			cout << "������סַ" << endl;
			string adress;
			cin >> adress;
			l->personArray[i].p_address = adress;
			cout << "�޸���ϵ�˳ɹ�" << endl;
			system("pause");
			system("cls");
		}
	}

}

void findperson(lu *l)
{
	cout<<"������Ҫ���ҵ���ϵ��" << endl;
	string find_name;
	cin >> find_name;
	int i;

	for (i = 0; i <= l->n; i++)
	{
		if (find_name == l->personArray[i].p_name)
		{
			cout <<l->n+1<< ". ����:" << l->personArray[i].p_name << " | �绰:" << l->personArray[i].p_phone << " | סַ:" << l->personArray[i].p_address << endl;
		}
	}
	system("pause");
	system("cls");
}

void addperson(lu *l)
{
	cout << "����������" << endl;
	string name;
	cin >> name;
	l->personArray[l->n].p_name = name;

	cout << "������绰" << endl;
	int phone;
	cin >> phone;
	l->personArray[l->n].p_phone = phone;

	cout << "������סַ" << endl;
	string adress;
	cin >> adress;
	l->personArray[l->n].p_address = adress;

	cout << "�����ϵ�˳ɹ�" << endl;
	system("pause");
	system("cls");

}

void showmenu()
{
	cout << "*ͨѶ¼ϵͳ*" << endl;
	cout << "*----------*" << endl;
	cout << "** 1.��� **" << endl;
	cout << "** 2.��ʾ **" << endl;
	cout << "** 3.ɾ�� **" << endl;
	cout << "** 4.���� **" << endl;
	cout << "** 5.�޸� **" << endl;
	cout << "** 6.��� **" << endl;
	cout << "** 7.�˳� **" << endl;
	cout << "**--------**" << endl;
	cout << "************" << endl;
};

int main()
{
	int putin;
	lu ll;
	ll.n = 0;   //����

while (true)        //ѭ��������7����ִ����Ӧ���7�˳�ѭ��
{
	    showmenu();
        cout << "����������Ҫ��ִ�е�ָ��" << endl;
		cin >> putin;

	switch (putin)
	{
	case 1:
		cout << "** 1.��Ҫ��� **" << endl;
		addperson(&ll);
		ll.n++;
		break;
	case 2:
		cout << "** 2.��Ҫ��ʾ **" << endl;
		showperson(& ll);
		break;
	case 3:
		cout << "** 3.��Ҫɾ�� **" << endl;
		deleteperson(&ll);
		break;
	case 4:
		cout << "** 4.��Ҫ���� **" << endl;
		findperson(&ll);
		break;
	case 5:
		cout << "** 5.��Ҫ�޸� **" << endl;
		modiperson(&ll);
		break;
	case 6:
		cout << "** 6.��Ҫ��� **" << endl;
		clearperson(&ll);
		break;
	default:
		cout<<"���˳��ˣ���ӭ�´�ʹ�á�" << endl;
		system("pause");
		return 0;
	}
	}
	system("pause");
	return 0;
}