#ifndef Squad_H
#define Squad_H
#include "Warrior.h"
#include<string>
namespace EIF201 {

	class Squad {

	private:

		std::string name;
		Warrior** warriors;
		int capacity;
		int count;


	public:

		Squad(std::string name, int capacity = 3);
		~Squad(); //va a liberar la memoria dinamica


		Warrior* recruit(std::string name, std::string cls, int atk, int def, int hp, int maxSkills);
		bool dismiss(std::string name);
		int totalPower() const;
		void showSquad() const;

		int getCount() const;
		std::string getName() const;


		Warrior** getByClass(std::string cls, int& resultCount) const;
		void sortByPower();
		std::string simulateBattle(const Squad& enemy) const;
		bool transferWarrior(std::string name, Squad& destination);  //metodo del reto




	};

}
#endif