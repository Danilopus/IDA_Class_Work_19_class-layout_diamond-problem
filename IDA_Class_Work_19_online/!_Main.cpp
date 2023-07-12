//class template version 5.0 //07.07.2023//
#include <iostream>
#include <string>
#include <windows.h>
#include <time.h>
#include <algorithm>
#include <conio.h>
//My own headers
#include "Service functions.h"
#include "Task_1.h"
#include "Task_2_Auto.h"



// Class Work 12.07.2023 online -------------------------------------------	

// Компоновка класса, проблема ромбовидного наследования
/*
Компоненты класса:
1) поля
2) методы
3) функционал родительского класса

Способы компоновки:
- Агрегация (отсутвие таких элементов не влечет негативных последствий для работы класса)
	<любые классы контейнеры, существуют без объектов>
	<пульт и батарейки от пульта>
	<>

- Композиция (неотъемлимое свойства классов необходимое для работы класса)
	<методы класса - всегда часть композиции>
	<поля - в зависимости от того как работает класс>
	<хранимые по значению данные>

- Наследование
	(наслденик композиционно получает объект родительского класса и наследует правила по компановке:
		<компоненты перекают по своим правилам: то что было по агрегации - продолжит быть агрегацией>
		<и также с композиционными элементами - продолжать быть композицией у наследника>
		 
// Ромбовидное наследование
- это ситуация когда несколько ветвей наследования класса восходят к общему родителю

Проблемы ромбовидного наследования:
- не гарантировано компилируется
- требуется переопределять методы множественного наследника



*/


//Task 1
//*
void F00(const Base& obj)
{
	std::cout << obj.Get_Name() << "\n";
}
void Task_1()
{
	Base Base_obj("Base_object");
	Item Item_obj("Item_object", 15.00);
	Creature Creature_obj("Creature_object", 60.00);
	//Robot Robot_obj;
	Robot Robot_obj("Robo", 50, 300);


	Robot_obj.Base::Set_Name("robot_obj");

	Robot_obj.Item::Set_Name("Item not creature");

	F00(Base_obj);
	F00(Item_obj);
	F00(Creature_obj);
	F00(Robot_obj);

	Robot_obj.Creature::Set_Name("creature not robot");

	// class Creature : virtual public Base  class Item : virtual public Base 
	Robot_obj.Set_Name("robot_obj"); 

}//*/
//Task 2
void Task_2()
{
	Automobile automobile("BMW M5", 1, 18, 300);
	automobile.Doors_close();
	automobile.Doors_open();
	automobile.Ignition_On();
	automobile.Go_forward();
	automobile.Ignition_Off();
}
//Task 3
void Task_3()
{

}


// MAIN ------- MAIN ------- MAIN ------- MAIN ------- MAIN --------
int main()
{
srand(time(NULL));
		
	
Task_1();
Task_2();
Task_3();





std::cout << "\n\n";
//system("pause");	
_getch();
}


