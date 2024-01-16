#include <iostream>
#include <string>
#include <sstream>

// Corredor com três colunas 1, 2, 3
// Com três prateleiras colmeia 1, 2, 3

using namespace std;

struct Posicao {
    int coluna_t;
    int corredor_t;
}px, py;

struct Estoque_s {
    string xbox = "xbox";
    string pcGamer = "pc gamer";
    string pocessIntelG3 = "processadores";
    string xiaomiPoco = "Xiaomi";
    string miniGameRetro = "games retro";
}busca_s;

struct Estoque_p {
    int xbox[3] = { 1, 2, 20 };
    int pcGamer[3] = { 3, 1, 15 };
    int pocessIntelG3[3] = {3, 2, 8};
    int xiaomiPoco[3] = { 2, 2, 100 };
    int miniGameRetro[3] = { 2, 3, 42 };
}busca_p;

void printSearch() {
    string input;
    cout << "Insira o Produto buscado.\n";
    cin >> input;

    if (input == busca_s.xbox) {
        cout << "Ha " << busca_p.xbox[2] << " em estoque. " << busca_s.xbox << " Esta no corredor " << busca_p.xbox[0] << ", na prateleira " << busca_p.xbox[2] << "\n";
    }

    if (input == busca_s.pcGamer) {
        cout << "Ha " << busca_p.pcGamer[2] << " em estoque. " << busca_s.pcGamer << " Esta no corredor " << busca_p.pcGamer[0] << ", na prateleira " << busca_p.pcGamer[2] << "\n";
    }

    if (input == busca_s.pocessIntelG3) {
        cout << "Ha " << busca_p.pocessIntelG3[2] << " em estoque. " << busca_s.pocessIntelG3 << " Esta no corredor " << busca_p.pocessIntelG3[0] << ", na prateleira " << busca_p.pocessIntelG3[2] << "\n";
    }

    if (input == busca_s.xiaomiPoco) {
        cout << "Ha " << busca_p.xiaomiPoco[2] << " em estoque. " << busca_s.xiaomiPoco << " Esta no corredor " << busca_p.xiaomiPoco[0] << ", na prateleira " << busca_p.xiaomiPoco[2] << "\n";
    }

    if (input == busca_s.miniGameRetro) {
        cout << "Ha " << busca_p.miniGameRetro[2] << " em estoque. " << busca_s.miniGameRetro << " Esta no corredor " << busca_p.miniGameRetro[0] << ", na prateleira " << busca_p.miniGameRetro[2] << "\n";
    }

}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        printSearch();
    }
}