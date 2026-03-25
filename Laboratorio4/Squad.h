#ifndef Squad_H
#define Squad_H
#include "Warrior.h"
 namespace ELIF201 {

	class Squad {

	private:

		std::string name;
		Warrior** warrior;
		int capacity;
		int count;


	public:

		Squad(std::string name, int capacity = 3);
		~Squad(); //va a liberar la memoria dinamica


		void recuit(std::string name, std::string cls, int atk, int def, int hp, int maxSkills);
		bool dismiss(std::string name);
		void totalPower() const;
		void showSquad() const;

		int getCount() const;
		std::string getName() const;




	};




}






#endif