#include <iostream>
#include <cmath>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define SQUARE(a) ((a) * (a))
#define POW(x, n) pow((x), (n))
#define CHET(num) (((num) % 2) == 0)
#define NO_CHET(num) (((num) % 2) != 0)



using namespace std;

void print();

int main()
{
    cout << MIN(3, 9) << endl;
    cout << MAX(3, 9) << endl;
    cout << SQUARE(6) << endl;
    cout << POW(3, 3) << endl;
    cout << CHET(4) << endl;
    cout << NO_CHET(3) << endl;





    return 0;
}

void print()
{
    cout << "Hello C++" << endl;
}