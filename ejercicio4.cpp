#include <iostream>
using namespace std;

void multi_de_matrices() {

    int matris1[3][2] = {{1, 4}, {2, 5}, {3, 6}};
    int matris2[2][3] = {{7, 8, 9}, {10, 11, 12}};
    int producto[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};

    for (int fil = 0; fil < 3; fil++) {
        for (int col = 0; col < 3; col++) {

            for (int pro = 0; pro < 2; pro++) {
                producto[fil][col] += matris1[fil][pro] * matris2[pro][col];
            }
            cout << producto[fil][col] << "  ";
        }
        cout << "\n";
    }
}

int main() {
    multi_de_matrices();
}
