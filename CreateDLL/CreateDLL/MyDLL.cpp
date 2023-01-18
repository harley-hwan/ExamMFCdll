#include "pch.h"
#include "MyDLL.h"

Person::Person(std::string name, int age, std::string address) {
	this->age = age;
	this->name = name;
	this->address = address;
}

void Person::ShowInfo() {
	OutputDebugStringA(("�̸�: " + name + "\n").c_str());
	OutputDebugStringA(("����: " + std::to_string(age) + "\n").c_str());
	OutputDebugStringA(("�ּ�: " + address + "\n").c_str());
}