#include <iostream>
#include <string>


class Person
{
public:
	std::string name;
	int age;
	int weigth;
	std::string gender;
	void display()
	{
		std::cout << "Name: " << name << "\tAge: " << age << "\tGender: " << gender << "\tWeigth: " << weigth << std::endl;
	}
	void setName(std::string newName)
	{
		name = newName;
	}
	void setAge(int newAge)
	{
		age = newAge;
	}
	void setWeigth(int newWeigth)
	{
		weigth = newWeigth;
	}

};
class Student : public Person
{
public:
	std::string graduationYear;
	virtual void display()
	{
		std::cout << "Name: " << name << "\tAge: " << age << "\tGender: " << gender << "\tWeigth: " << "\tGraduation: " << graduationYear << std::endl;
	}

};


class University
{
public:
	std::string staff;
	std::string pass;

	void PassBenifits(std::string pass)
	{
		if (pass == "TeacherPass")
		{
			std::cout << "\tTeacher have food discount";
		}
		else if (pass == "StudentPass")
		{
			std::cout << "\tFree books at library";
		}
		else if (pass == "ScienceWorkerPass")
		{
			std::cout << "\tLabratory access granted";
		}
		else {
			std::cout << "\tMaintaince facility access granted";
		}
	}
};

class Teacher : public University
{
	std::string staff = "Teacher";
public: std::string pass = "TeacherPass";

};

class UStudent : public University
{
	std::string staff = "Student";
public: std::string pass = "StudentPass";
};

class ScienceWorker : public University
{
	std::string staff = "ScienceWorker";
public: std::string pass = "ScienceWorkerPass";
};

class TechWorker : public University
{
	std::string staff = "TechWorker";
public: std::string pass = "TechWorkerPass";
};

class Player
{
public:
	std::string Name;
	int HP;
	int XP;
	int LVL;
};

class InventoryItem
{
public:
	std::string type;
	std::string material;
	int durability;
};

class Axe : public InventoryItem
{
	std::string type = "Axe";
};

class GoldenAxe : Axe
{
	std::string material = "Golden";
	int durability = 100;
};

int main()
{
	Person tom;
	tom.name = "Tom";
	tom.gender = "Male";
	tom.weigth = 80;
	tom.age = 23;
	tom.display();
	tom.setName("Alex");
	tom.display();


	Student bob;
	bob.name = "Bob";
	bob.age = 31;
	bob.graduationYear = "1984";
	bob.display();

	Teacher galina;
	galina.PassBenifits(galina.pass);

	UStudent arseniy;
	arseniy.PassBenifits(arseniy.pass);

	ScienceWorker artem;
	artem.PassBenifits(artem.pass);

	TechWorker mihalich;
	mihalich.PassBenifits(mihalich.pass);

	Player Steve;
	return 0;
}
