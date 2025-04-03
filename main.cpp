#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

void moveDisk(char from, char to) {
    cout << "Moving disk from " << from << " to " << to << endl;
}

void moveTower(int height, char from, char to, char via) {
    if (height <= 0)
        return;
    moveTower(height-1, from, via,to);
    moveDisk(from, to);
    moveTower(height-1, via, to, from);
}

int main() {
    moveTower(10, 'a', 'c', 'b');
    return 0;
}
