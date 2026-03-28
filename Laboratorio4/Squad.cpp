#include "Squad.h"

using namespace EIF201;

bool Squad::transferWarrior(std::string name, Squad& destination) {   //metodo del reto

	if (destination.count >= destination.capacity) {
		return false;
	}
	
	for (int i = 0; i < count; i++) {

		if (warriors[i]->getName() == name) {



			destination.warriors[destination.count] = warriors[i];
			destination.count++;


			for (int j = i; j < count - 1; j++) {

				warriors[j] = warriors[j + 1];
			}

			warriors[count - 1] = nullptr;
			count--;
			return true;
		}
	}
		return false;
}
