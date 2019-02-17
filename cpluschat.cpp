#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{

string mystr;

std::cout << "Welcome to the program. How are you doing today?" << endl;
getline (cin, mystr); 

if (mystr == "good", "Good", "Okay", "Fine") {

cout << "That's great. Tell me about your day.";
}

else if (mystr == "Not good", "Bad", "Horrible") {

cout << "That's too bad. Why do you think that happened?";
}

else {
cout << "Tell me more";
}

return 0;
}
