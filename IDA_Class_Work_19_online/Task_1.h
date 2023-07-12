#pragma once
#include <vector>
#include <string>

#include "Service functions.h"


//nameable Objects
class Base
{
	std::string _name;
public:
	Base() = default;
	Base(const std::string& name): _name(name){}
	
	virtual ~Base() = default;
	//std::string Get_Name() const { return _name; }
	virtual std::string Get_Name() const { return _name; }
	void Set_Name(const std::string& name) {  _name= name; }
	//virtual void Set_Name(const std::string& name) { _name = name; }
};

//class Item : public Base
class Item : virtual public Base
{
	double _weight;
public:
	Item () = default;
	Item (const std::string& name, double weight) :Base(name), _weight(weight) {}
	
	double Get_weight() const { return _weight; }
	void Set_weight(double weight) { _weight = weight; }
protected:
	// спецконструктор для ранней инициализации (ссылки и константы)
	Item(double& weight) : _weight(weight) {}

};


//class Creature : public Base
class Creature : virtual public Base
{
	//double _speed;
	double& _speed;
public:
	Creature() = default;
	
	Creature(const std::string& name, double speed) :Base(name), _speed(speed) {}

	double Get_Speed() const { return _speed; }
	void Set_Speed(double speed) { _speed = speed; }
protected:
	// спецконструктор для ранней инициализации (ссылки и константы)
	Creature(double& speed) : _speed(speed){}


};

class Robot : public Creature, public Item
{
public:
	//void Set_Name(std::string& name) { Base::Set_Name(name); }
	//std::string Get_Name() const override { return Base::Get_Name(); }
	Robot() = default;
	//Robot(const std::string& name, double speed, double weight):Creature(name, speed), Item()
	Robot(const std::string& name, double speed, double weight) :Base(name), Creature(speed)
	{
		Set_weight(weight);
		//Set_Speed(speed);
	}

};