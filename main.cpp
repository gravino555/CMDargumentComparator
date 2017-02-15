#include <iostream>
#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>

using namespace std;

void removeCharsFromString( string &str, char* charsToRemove ) {
   for ( unsigned int k = 0; k < strlen(charsToRemove); ++k ) {
      str.erase( remove(str.begin(), str.end(), charsToRemove[k]), str.end() );
   }
} // this snippet of code is the class utilized in the main where i search the second string for the second argument, once I find the /8 char, it will delete utilizing the cstring and algorithm libraries.


bool isSubstring(string string1, string string2){

if(string2.size() > string1.size())
        return false;

    for (int i = 0; i < string1.size(); i++){
        int j = 0;
        if(string1[i] == string2[j]){
            while (string1[i] == string2[j] && j < string2.size()){
                j++;
                i++;
            }

            if (j == string2.size())
                    return true;
        }
    }
    return false;
} // this block of code is the recursive algorithms which goes through both strings and compares each character to see if the string2 is a substring of string 1

int main( int argc, char *argv[] )
{

    int count;

    // Display each command-line argument.
    cout << "\nCommand-line arguments: \n" << endl;
    for( count = 1; count < argc; count++ )
         cout << "  argv[" << count << "]   " << argv[count] << "\n";
         cout << endl; // this is to show both arguments inputted within the command line (I.E fujitsu michael mich, where fujitsu is the name of the exe and is inputted in argv[0], michael argv[1],... thus the reason why i start the count at 1, to not count for the name of the exe.

    string string1(argv[1]);
    string string2(argv[2]); // cnverting the arguments to strings (since they are chars to begin with

    removeCharsFromString(string2, "*"); //invoking the class to delete the wildcard * from the second string if there is one.

    if(isSubstring(string1, string2)) // comparing both arguments and outputting if its a substring or not.
        cout << "Second argument is a substring of the first argument.\n";
    else
        cout << "Second argument is not a substring of the first argument.\n";

}
