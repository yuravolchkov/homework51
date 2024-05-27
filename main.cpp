#include <iostream>
#include <string>

class Figuries
{
protected:
	int sides_count;
	std::string Figure_Name;
public:
	Figuries(int side_detector = 0) : sides_count(side_detector) {
		Figure_Name = "������";
	}
	int get_sides_count()
	{
		return sides_count;
	}
	std::string get_figura_name()
	{
	return Figure_Name;
	}
};

class Triangele : public Figuries
{
public:
	Triangele(int side_detector = 3) : Figuries(side_detector) {
		Figure_Name = "�����������";
	}
};

class Quadrangle : public Figuries
{
public:
	Quadrangle(int side_detector = 4) : Figuries(side_detector) {
	Figure_Name = "��������������";
}
};

int main()
{
	setlocale(LC_ALL, "Russian"); // ������ ������� �����
	std::system("chcp 1251"); // ��������� ��������� �������
	std::system("cls"); // �������� �����


	Figuries* Custom_Figure[3];
	Custom_Figure[0] = new Figuries{};
	Custom_Figure[1] = new Triangele{};
	Custom_Figure[2] = new Quadrangle{};

	
	std::cout << "���������� ������:" << std::endl;
	for (int i = 0; i < 3; i++)
	{
		std::cout << Custom_Figure[i]->get_figura_name() << ": " << Custom_Figure[i]->get_sides_count() << std::endl;
	}

	for (int i = 0; i < 2; i++)
	{
		delete Custom_Figure[i];
	}
	
	return 51;
}