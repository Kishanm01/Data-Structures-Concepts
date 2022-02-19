#include <iostream>
#include <cstring>   // prototype for strtok
using namespace std;

int main() {

  char sentence[]{"This is a sentence with 7 tokens"};

  cout << "The string to be tokenized is:\n " << sentence << "\n\nThe tokens are:\n\n";

  char* tokenPtr{strtok(sentence, " ")};


  while (tokenPtr != NULL) {

     cout << tokenPtr << "\n";
     tokenPtr = strtok(NULL, " ");
  }

  cout << "\nAfter strtok, sentence = " << sentence << endl;



}
