#include <iostream>
#include <cmath>

using namespace std;

template < typename T > void
void printB (T data)
{
  //cout << pow (2, sizeof (data)) << endl;
  for (int i = pow (2, sizeof (data)); i >= 0; --i)
    {
      cout << ((data >> i) & 1);
    }
  cout << "\n";
}

int
main ()
{
  int i;
  // pack state word
  i = ((unsigned short) 21 & 0xff) << 8;
  i |= ((unsigned short) 3 & 0x0f) << 4;
  i |= ((unsigned short) 1 & 0x01) << 3;
  i |= ((unsigned short) 4 & 0x07);
  
  cout << "byte word: ";
  printB (i);

  // unpack state word
  cout << ((i >> 8) & 0xff) << endl;
  cout << ((i >> 4) & 0x0f) << endl;
  cout << ((i >> 3) & 0x01) << endl;
  cout << (i&0x07) << endl;

  return 0;
}
