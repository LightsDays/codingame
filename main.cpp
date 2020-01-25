#include <iostream>
using namespace std;

// all cells in game field - objects
class cell
{
  int RC;
  int CC;
  string status; // wall, start, finish, question, free, undef
  cell *right, *left, *top, *bot;

public:

  // add new cell funcrion
  void addCell()
  {

  }

  // def constructor
  cell()
  {
    RC = CC = -1;

    right = left = top = bot = NULL;
    status = "undef";
  }

  // destructor
  ~cell()
  {
    delete right;
    delete left;
    delete top;
    delete bot;
  }
};

int main()
{
  cout << "Hello world" << endl;
  return 0;
}
