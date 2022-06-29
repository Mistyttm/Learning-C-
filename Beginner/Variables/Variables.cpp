#include <iostream>

using namespace std;

int main(){

    /* Variables */
    string animal = "Cat";

    int animalAge;
    animalAge = 26;

    /* Program */
    cout << "This is a story of a " << animal << endl;
    cout << "The " << animal << " was " << animalAge << endl;
    cout << "The " << animal << " was a " << animal << endl;
    cout << "But he wasn't " << animalAge << endl;

    return 0;
}