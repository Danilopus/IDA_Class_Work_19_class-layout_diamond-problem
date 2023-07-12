#pragma once
#include <iostream>

class MechanismPart
{
	std::string _name;
	double _weight;	
};

class Wheels : virtual public MechanismPart
{
	int _Size;
public:
	void Go_forward()
	{
		std::cout << "\nWheels: running";
	}
};

class Body : virtual public MechanismPart
{
	int _body_class;
public:
	void Doors_open()
	{
		std::cout << "\nDoors: opening";
	}
	void Doors_close()
	{
		std::cout << "\nDoors: closing";
	}
};
class Engine: virtual public MechanismPart
{
	double _horsepower;
public:
	void Ignition_On() { std::cout << "\nEngine: rrrrrr"; }
	void Ignition_Off() { std::cout << "\nEngine: fff..."; }
};



//class Automobile
//{
//	Engine engine;
//	Body body;
//	Wheels wheels;
//};

class Automobile: public Engine, public	Body,public	Wheels
{

};

