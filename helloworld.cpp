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

  for (const string &word : msg)
  {
    cout << word << " ";
    // printf("%s ", word.c_str());
  }

  // printf("\nTerminated.\n\n");
  cout << "\nTerminated."
       << "\n\n";
}