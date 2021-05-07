#include <iostream>
#include <vector>
#include <string>
// #include <stdio.h>

using namespace std;

int main()
{
  vector<string> msg{
      "Hello",
      "C++",
      "World",
      "from",
      "VS Code",
      "and the C++ extension!"};

  // working with value by reference...
  // similar to using pointer variable, but not can't null.
  string &sElementText = msg[5];

  sElementText = "changed value...";

  for (const string &word : msg)
  {
    cout << word << " ";
    // printf("%s ", word.c_str());
  }

  sElementText = "and the C++ extension!";
  cout << "\n"
       << sElementText << "\n";
  cout << "\nreturned value -> ";

  for (const string &word : msg)
  {
    cout << word << " ";
  }

  cout << "\n\n:: Terminated.\n\n";
}