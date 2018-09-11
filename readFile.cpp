#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void readFile(string filePath) {
   ifstream theFile;
   theFile.open(filePath);
   string word = "";
 if(!theFile) {
     cerr << "Path is wrong";
     exit(1);
 }
 while(theFile >> word) {
     cout << word;
 }
}

int main ()
{
  readFile("whatever.txt");
  return 0;
}