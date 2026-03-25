#ifndef WARRIOR_H
#define WARRIOR_H
//#include "Skill.h"
#include <string>
#include "Squad.h"
using namespace ELIF201 {

	class Warrior {

	private:

		std::string name;
		std::string combatClass;
		int attack;
		int defense;
		int health;

		/*Skill** skills;  */  //arreglo dinamico de punteros

		int skillCount;
		int maxSkills;

		int clampRange(int value, int min, int max);
			bool isValidClass(std::string cls);

	public:

		Warrior(std::string name, std::string combatClass, int attack, int defense, int health, int maxSkills);
		~Warrior();

		std::string getName() const;
		std::string getCombatClass() const;
		int getAttack() const;
		int getDefense() const;
		int getHealth() const;
		int getSkillCount() const;

		bool learnSkill(std::string  name, std::string type, int power, int cost);
		bool hasSkillCount() const;
		int totalSkillEffect() const;
		int calculatePower() const;

		std::string toString() const;
		void showSkills() const;


};



}



#endif
