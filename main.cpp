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
void defaultTypeParameter(string param = "default") {
    cout << "\n" + param;
}

//Classes in c++
class Example{ //similar to java there is just no public at the beginning
    int classVar; // if not in public or private the default is private
    int someVar;
    string someString;
public: //declare public variables and methods
    int publicVar = 0; // example to access public variables

    //constructors in c++
    // similar to java this time they just need to be inside the public field
    explicit Example(int classVar){ //if you have a single argument constructor you should mark it as explicit
        this->classVar = classVar;
    }
    //else if you have multiple args
    Example(int someVar, string someString){
        this->someVar = someVar;
        this->someString = someString;
    }
    //create methods
    void aMethod(){
        cout << "Im a method";
    }

private: // same as public but this time if you want them private


}; //must have a semicolon at the end of the bracket

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
    // the thing is these arrays are apparenlty trash, and you want to use vectors instead
    /*
     *Vectors are the same as dynamic arrays with the ability to resize itself automatically when an element
     * is inserted or deleted, with their storage being handled automatically by the container.
     * */
    // you can make a vector like so
    // vector<type> name;
    vector<int> exampleVec;
    // there are tons of methods with vectors
    /*
     begin() – Returns an iterator pointing to the first element in the vector

     end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector

     rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning).
     It moves from last to first element

     rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element
     in the vector (considered as reverse end)

     cbegin() – Returns a constant iterator pointing to the first element in the vector.

     cend() – Returns a constant iterator pointing to the theoretical element that follows
     the last element in the vector.

     crbegin() – Returns a constant reverse iterator pointing to the last element in the vector
     (reverse beginning). It moves from last to first element

     crend() – Returns a constant reverse iterator pointing to the theoretical element preceding
     the first element in the vector (considered as reverse end)

     size() – Returns the number of elements in the vector.

     max_size() – Returns the maximum number of elements that the vector can hold.

     capacity() – Returns the size of the storage space currently allocated to the vector
     expressed as number of elements.

     resize(n) – Resizes the container so that it contains ‘n’ elements.

     empty() – Returns whether the container is empty.

     shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all
     elements beyond the capacity.

     reserve() – Requests that the vector capacity be at least enough to contain n elements.
     reference operator [g] – Returns a reference to the element at position ‘g’ in the vector

     at(g) – Returns a reference to the element at position ‘g’ in the vector

     front() – Returns a reference to the first element in the vector

     back() – Returns a reference to the last element in the vector

     data() – Returns a direct pointer to the memory array used internally by the
     vector to store its owned elements.

     assign() – It assigns new value to the vector elements by replacing old ones

    push_back() – It push the elements into a vector from the back

    pop_back() – It is used to pop or remove elements from a vector from the back.

    insert() – It inserts new elements before the element at the specified position

    erase() – It is used to remove elements from a container from the specified position or range.

    swap() – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.

    clear() – It is used to remove all the elements of the vector container

    emplace() – It extends the container by inserting new element at position

    emplace_back() – It is used to insert a new element into the vector container, the new element is added to the end of the vector
     */

    //examples of iterator methods
    for (int i = 1; i<=5; i++){
        exampleVec.push_back(i);
    }
    cout << "Output of begin and end in vector: ";
    for (auto i = exampleVec.begin(); i != exampleVec.end(); ++i)
        cout << *i << " ";

    cout << "\nOutput of cbegin and cend: ";
    for (auto i = exampleVec.cbegin(); i != exampleVec.cend(); ++i)
        cout << *i << " ";

    cout << "\nOutput of rbegin and rend: ";
    for (auto ir = exampleVec.rbegin(); ir != exampleVec.rend(); ++ir)
        cout << *ir << " ";

    cout << "\nOutput of crbegin and crend : ";
    for (auto ir = exampleVec.crbegin(); ir != exampleVec.crend(); ++ir)
        cout << *ir << " ";

    // example of capacity methods
    cout << "\nSize of exampleVec: " << exampleVec.size();

    cout << "\nCapacity of exampleVec: " << exampleVec.capacity();

    cout << "\nMax size of exampleVec: " << exampleVec.max_size();

    exampleVec.resize(4);
    cout << "\nNew size of exampleVec: " << exampleVec.size();

    if (exampleVec.empty()){
        cout << "\nExample vec is currently empty!";
    } else{
        cout << "\nVector is not empty!";
    }

    exampleVec.shrink_to_fit();
    cout << "\nexampleVec elements are now: ";
    for (int & i : exampleVec)
        cout << i << " ";
    cout << endl;

    // Examples of element access in vectors

    for (int i = 1; i <= 10; i++)
        exampleVec.push_back(i * 10);

    //print out elements again
    for (int & i : exampleVec) cout << i << " ";

    cout << "\nReference operator [g] : exampleVec[2] = " << exampleVec[2];

    cout << "\nat : exampleVec.at(4) = " << exampleVec.at(4);

    cout << "\nfront() : exampleVec.front() = " << exampleVec.front();

    cout << "\nback() : exampleVec.back() = " << exampleVec.back();

    // pointer to the first element
    int* pos = exampleVec.data();

    cout << "\nThe first element is " << *pos;

    //Example of Modifiers in vectors
    // inserts 15 to the last position
    exampleVec.push_back(15);
    int n = (int) exampleVec.size();
    cout << "\nThe last element is: " << exampleVec[n - 1];

    // removes last element
    exampleVec.pop_back();

    // prints the vector
    cout << "\nThe vector elements are: ";
    for (int i : exampleVec) cout << i << " ";

    // inserts 5 at the beginning
    exampleVec.insert(exampleVec.begin(), 5);

    cout << "\nThe first element is: " << exampleVec[0];

    // removes the first element
    exampleVec.erase(exampleVec.begin());

    cout << "\nThe first element is: " << exampleVec[0];

    // inserts at the beginning
    exampleVec.emplace(exampleVec.begin(), 5);
    cout << "\nThe first element is: " << exampleVec[0];

    // Inserts 20 at the end
    exampleVec.emplace_back(20);
    n = (int) exampleVec.size();
    cout << "\nThe last element is: " << exampleVec[n - 1];

    // erases the vector
    exampleVec.clear();
    cout << "\nVector size after erase(): " << exampleVec.size();

    // two vector to perform swap
    vector<int> v1, v2;
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
    v2.push_back(4);

    cout << "\n\nVector 1: ";
    for (int i : v1) cout << i << " ";

    cout << "\nVector 2: ";
    for (int i : v2) cout << i << " ";

    // Swaps v1 and v2
    v1.swap(v2);

    cout << "\nAfter Swap \nVector 1: ";
    for (int i : v1) cout << i << " ";

    cout << "\nVector 2: ";
    for (int i : v2) cout << i << " ";
    /*
     The time complexity for doing various operations on vectors is-
     Random access – constant O(1)
     Insertion or removal of elements at the end – constant O(1)
     Insertion or removal of elements – linear in the distance to the end of the vector O(N)
     Knowing the size – constant O(1)
     Resizing the vector- Linear O(N)
     **/


    //Call functions
    defaultTypeParameter();

    //Instantiate Objects in c++
    Example example = Example(10); // if no constructor you do not need to include the = sign just end with semicolon

    Example anotherExample = Example(10,"Penis");

    anotherExample.aMethod();
    // if constructor you would do it like so
    //Example example = Example(8);

    //Why return 0 in main function
    return 0; //returning zero means the program ran successfully but is optional to include
}

