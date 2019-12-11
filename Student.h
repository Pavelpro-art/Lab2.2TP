#pragma once
#include "Disciplines.h"

class Student {
	string surname;						//Фамилия
	string initials;					//Инициалы
	string group;						//Номер группы
	Disciplines* head_disciplines;		//Дисциплины и оценки
	int number_of_disciplines;			//Количество дисциплин
	double average_mark;				//Средний балл
	Student* next_student;				//Указатель на следующий элемент

public:
	Student();
	Student(string, string, string, Disciplines*);
	~Student();

	void set_next_student(Student* next_student) { this->next_student = next_student; }

	Student* get_next_student() { return next_student; }
	string get_surname() { return surname; }
	string get_initials() { return initials; }
	string get_group() { return group; }
	Disciplines* get_head_disciplines() { return head_disciplines; }
	double get_average_mark() { return average_mark; }

	void push_disciplines();
	void delete_disciplines(string);

	void show_data();
	void change_data();
	void average_score();
	bool find_mark_two();
};