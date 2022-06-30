#include <iostream>

using namespace std;

int main(){

    /*endl tells C++ to add a newline (can also use \n)*/

    string phrase = "goodbye World";
    cout << phrase << endl;

    /*Prints length of the string*/
    cout << phrase.length() << endl;

    /*select individual characters in a string*/
    cout << phrase[2] << endl;

    phrase[0] = 'B';
    cout << phrase << endl;

    /*Returns which index the string occurs*/
    cout << phrase.find("World", 0) << endl;

    /*Selects number of characters from an index*/
    cout << phrase.substr(8, 3) << endl;


    return 0;
}