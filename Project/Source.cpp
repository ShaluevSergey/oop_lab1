#include <iostream>
using namespace std;

class Tovar_Cost
{
private:
	float first;//������ ��������� ���� first second
	int second;
public:
	Tovar_Cost()
	{

	}
	void set_cost(float cost_t)
	{
		first = cost_t;
	}

	void set_amount(int amt)
	{
		second = amt;
	}

	void Display()//����� �������� ����� ������ +
	{
		cout << "����: " << first << endl;
		cout << "�����������: " << second << endl;
		cout << "���� ���� ���������: " << first * second;
	}

	float Init(float first, int second)//�������� �� ������������ ��� "���" +
	{

		if ((first > 0) && (second > 0))
		{
			return 0;
		}
		else
		{
			cout << "error! try again" << endl;
			first = 0; second = 0;
			return Read(first, second);
		}
	}

	float Read(float& cost_t, int& amt)// ����� ������ +
	{
		cout << "������� ���� ������: ";
		cin >> first;
		cout << "������� ���������� ������: ";
		cin >> second;

		return Init(first, second);
	}

	~Tovar_Cost()
	{
		cout << "�������� ����������";
	}

};





int main()
{
	setlocale(LC_ALL, "russian");

	float cost_t = 0;
	int amt = 0;
	Tovar_Cost  Product;


	Product.set_cost(cost_t);
	Product.set_amount(amt);
	Product.Read(cost_t, amt);
	Product.Display();

	cin >> amt;
	return 0;
}



