#include <iostream>
#include <vector>
using namespace std;

//Buscar el primer elemento mayor que un valor dado
//output: 9

int linearSearch(vector<int> elements, int target){
    for(int element:elements) {
        if (element > target) {
            return element;
        }
    }
    return -1;
}

int main() {
    vector<int> elements = {5,2,9,7,4,6};
    int target = 5;

    int index = linearSearch(elements, target);

    if(index != -1) {
        cout << "El siguiente elemento mayor que el valor dado es: " << index << endl;
    }
    else {
        cout << "No hay un elemento mayor que el valor dado." << endl;
    }
return 0;
}