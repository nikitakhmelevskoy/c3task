#include <iostream>

using namespace std;

int main() {
    char array[7] = {'a', 'b', 'c', 'd', 'e', 'f', '\0'};
    char newArray[4];

    char *p1 = &array[0];
    char *p2 = &newArray[0];

    for (int i = 0; i < sizeof(newArray); i++) {
        *(p2++) = *(p1 + 2 * i + 1);
    }

    newArray[sizeof newArray - 1] = '\0';

    cout << array << endl;
    cout << newArray << endl;
    return 0;

}