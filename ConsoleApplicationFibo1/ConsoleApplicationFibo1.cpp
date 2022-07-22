
#include <iostream>
using namespace std;
int fibonachi(int number) {
    if (number == 0)return 0;
    else if (number == 1)return 1;
    else
    {
        return fibonachi(number - 1) + fibonachi(number - 2);
    }
}
int main()
{
    int num = 0;
    cout << "Write your number\n";
    cin >> num;
    int res = fibonachi(num);
    cout << "result -> " << res << endl;
}
