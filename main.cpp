//Headers
#include <iostream> //headers are what these are called, and they are basically import statements
#include <vector>
//Every c++ program will probably include iostream it is the basic library for c++

//Namespaces
using namespace std; //in c++ we can use namespaces for libraries to call methods from them directly


//Functions
//syntax: returnType functionName(parameters){
//      code
//}
//one unique thing about cpp functions is you can declare default values to parameters
void defaultTypeParameter(std::string param = "default") {
    cout << param;
}

//Main Function
// this is the main function for c++ and is globally scoped for the compiler
int main() {
    //Printing to console
    std::cout << "Hello, World!" << std::endl; //we can also call methods without a namespace like so
    cout << "Printing using namespace std!" << endl; //endl inserts a newline character to the end
    // << is for out and >> is for input in cout and cin

    //wtf is :: in c++?
    /*
     * :: in c++ is the scope resolution operator
     * it can be used to access class function and namespaces.
     *
     * for example in std::string
     * for std::string it means that there is namespace called std and there is a
     * class or a variable or whatever it is that is named string
     * but for std::string it is a class
     *
     * So for another example if I had a namespace like so
     * namespace example {
     *      int var = 0;
     * }
     *
     * I could access that variable using
     * example::var;
     * and call it wherever I wanted.
     * */

    //User Input
    //Basic example of user input
    string input;
    cout << "Say something!\n";
    cin >> input;
    cout << "You said: " << input + "\n";

    //Data types
    int integerType = 0; //int same as java
    double doubleType = 1.2; //decimal same as java
    char charType = 's'; // char same as java
    bool boolType = false; //bool basically the same as java just bool not boolean
    string strType = "Example String";
    // you can declare constants like so in c++
    //const string constant = "Constant";

    //Arrays in c++
    //arrays are declared like so
    string stringArray[3] = {"String1", "String2", "String3"};
    // can change index values the same as java
    // loop through array like this
    for (auto & i : stringArray) {
        cout << i << " \n";
    }

    //Call functions
    defaultTypeParameter();

    //Why return 0 in main function
    return 0; //returning zero means the program ran successfully but is optional to include
}

