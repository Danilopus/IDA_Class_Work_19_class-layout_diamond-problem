#pragma once
#include <iostream>

class MechanismPart
{
	std::string _name;
	double _weight;	
public:
	MechanismPart(std::string name): _name(name)	{}
	MechanismPart() = default;
	virtual ~MechanismPart() = default;

};

class Wheels : virtual public MechanismPart
{
	int _wheels_radius;
public:
	void Go_forward()
	{
		std::cout << "\nWheels: running";
	}
	Wheels(int wheels_radius): _wheels_radius(wheels_radius){}
};

class Body : virtual public MechanismPart
{
	int _body_class;
public:
	Body(int body_class): _body_class(body_class){}

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
	Engine(double horsepower): _horsepower(horsepower){}

	void Ignition_On() { std::cout << "\nEngine: rrrrrr"; }
	void Ignition_Off() { std::cout << "\nEngine: fff..."; }
};



//class Automobile
//{
//	Engine engine;
//	Body body;
//	Wheels wheels;
//};

class Automobile: public Engine, public	Body, public Wheels
{

public:
	Automobile(std::string name, int body_class, int wheels_radius, double hersepower)
		: 
		MechanismPart(name), Body(body_class), Wheels(wheels_radius), Engine(hersepower){}
};

