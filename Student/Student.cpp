#include <iostream>
using namespace std;

class Student
{
	string name;
	string surname;
	string birth;
	string enter_date;
public:
	Student(string name, string surname, string birthday, string entr);

	string GetName();
	string GetSurname();
	string GetBirthday();
	string GetEnter();

	void SetName(string name);
	void SetSurname(string surname);
	void SetBirthday(string birthday);
	void SetEnter(string entr);

	void Student_Print() {
		cout << "Name: " << name << "\n"
			<< "Surname: " << surname << "\n"
			<< "Birth date: " << birth << "\n"
			<< "Enter date: " << enter_date << "\n";
	}
};

Student::Student(string name, string surname, string birthday, string entr)
{
	this->name = name;
	this->surname = surname;
	birth = birthday;
	enter_date = entr;
}

string Student::GetName()
{
	return name;
}

string Student::GetSurname()
{
	return surname;
}

string Student::GetBirthday()
{
	return birth;
}

string Student::GetEnter()
{
	return enter_date;
}

void Student::SetName(string name)
{
	this->name = name;
}

void Student::SetSurname(string surname)
{
	this->surname = surname;
}

void Student::SetBirthday(string birthday)
{
	birth = birthday;
}

void Student::SetEnter(string entr)
{
	enter_date = entr;
}


class Aspirant :public Student
{
	string theme;
public:
	Aspirant(string name, string surname, string birth, string enter_date, string theme);

	string GetTheme();
	void SetTheme(string theme);

	void Aspirant_Print() {
		Student_Print();
		cout << "Candidat`s coursework theme: " << theme << "\n";
	}
};

Aspirant::Aspirant(string name, string surname, string birth, string enter_date, string theme) :Student(name, surname, birth, enter_date)
{
	this->theme = theme;
}

string Aspirant::GetTheme()
{
	return theme;
}

void Aspirant::SetTheme(string theme)
{
	this->theme = theme;
}

int main() {
	Aspirant a("Vasya", "Surname", "1.09.2000", "02.09.2022", "Explosive cats");
	a.Aspirant_Print();
}