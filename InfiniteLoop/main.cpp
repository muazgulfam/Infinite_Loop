#include <iostream>

using namespace std;

int main()
{
    int i{0};
    while (true){
        i++;
        cout << i << endl;
        cout << "Do you want to loop again (Y/N):  ";
        char again{};
        cin >> again;

        if (again == 'N' || again == 'n')
            break;
    }
    return 0;
}
