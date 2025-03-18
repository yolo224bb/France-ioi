#include <iostream>
using namespace std;
int main()
{
   int numeroMatin, numeroSoir;
   cin >> numeroMatin >> numeroSoir;
   int ecart = numeroSoir - numeroMatin;
   if (ecart < 0)
   {
      ecart = -ecart;
   }
   cout << ecart << endl;
}
