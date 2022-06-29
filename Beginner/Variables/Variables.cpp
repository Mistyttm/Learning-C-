#include <iostream>

using namespace std;

int main(){

    /* Variables */
    string animal = "Dog";

    int animalAge;
    animalAge = 14;

    /* Program */
    cout << "This is a story of a " << animal << endl;
    cout << "The " << animal << " was " << animalAge << endl;

    animal = "Cat";
    cout << "The " << animal << " was a " << animal << endl;
    cout << "But he wasn't " << animalAge << endl;

    return 0;
}