#include <iostream>
#include "Jungle.h"
#include "DomesticAnimal.h"
#include "WildAnimal.h"
#include "Pet.h"

using namespace std;

int main() {
    int number_of_animal;
    cout << "please Enter the number of animal: " << endl;
    cin >> number_of_animal;
    Jungle myJungle(number_of_animal);//array of animals
    for (int i = 0; i < number_of_animal / 2; ++i) {//loop for domestic animals
        myJungle.AddAnimal(new DomesticAnimal);
    }
    for (int i = 0; i < number_of_animal / 2; ++i) {//loop for wild animals
        myJungle.AddAnimal(new WildAnimal);
    }
    for (int i = 0; i < 1000; ++i) {
        myJungle.movement();
    }
    cout << endl;
    cout << myJungle.getTotalFall() << endl;


    cout << "Enter the number of animal: " << endl;
    cin >> number_of_animal;
    Jungle myJungle2(number_of_animal);//array of animals
    for (int i = 0; i < number_of_animal / 3; ++i) {//loop for domestic animals
        myJungle2.AddAnimal(new DomesticAnimal);
    }
    for (int i = 0; i < number_of_animal / 3; ++i) {//loop for wild animals
        myJungle2.AddAnimal(new WildAnimal);
    }
    for (int i = 0; i < number_of_animal / 3; ++i) {
        myJungle2.AddAnimal(new Pet);
    }
    for (int i = 0; i < 1000; ++i) {
        myJungle2.movement();
    }
    cout << endl;
    cout << myJungle2.getTotalFall();


    return 0;
}
