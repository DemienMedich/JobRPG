#include <iostream>
using namespace std;

int main() {
    float version = 0.1;
    int versioncontrol(float version);
    cout << "Version: " << version << endl;
    return 0;
}

int versioncontrol(float version) {
    while (version < 1.0) {
        version += 0.1;
    }
    return version;
}