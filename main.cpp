    #include <iostream>
    #include <cstdlib> 
    #include <ctime>   
    using namespace std;

    int sort() {
        return rand() % 61; 
    }

    int main() {

        srand(time(0));

        int numerosUsuario[4];
        int numerosSorteados[4];
        int acertos = 0;

        cout << "*************************************" << endl;
        cout << "*************************************" << endl;
        cout << endl;
        cout << "*********  LotterySimulator  ********" << endl;
        cout << endl;
        cout << "Escolha quatro numeros de 0 a 60: ";
        cout << endl;
        for (int i = 0; i < 4; i++) {
        cin >> numerosUsuario[i];
        }
        
        cout << "Seus numeros da sorte sao: " <<endl;

        cout << endl;
        for (int i = 0; i < 4; i++) {
            cout << numerosUsuario[i] << " ";
        }
        
        cout << endl;

        cout << "Vamos ao sorteio!" << endl;
        cout << "Os numeros sorteados sao: ";
        for (int i = 0; i < 4; i++) {
            numerosSorteados[i] = sort();
            cout << numerosSorteados[i] << " ";
        }
        cout << endl;

        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                if (numerosUsuario[i] == numerosSorteados[j]) {
                    acertos++;
                    break; 
                }
            }
        }
        cout << endl;

        cout << "Voce acertou " << acertos << " numero(s)!" << endl;

        cout << endl;
        if (acertos >= 2) {
            cout << "Parabens, voce venceu!" << endl;
        } else {
            cout << "Infelizmente, voce nao venceu desta vez. Boa sorte na proxima!" << endl;
        }
    cout << "*************************************" << endl;
    cout << "*************************************" << endl;

    string alternativas;

    while (true) {

        cout << "Deseja jogar novamente? (Sim/Nao) " << endl;
        cin >> alternativas;

        if (alternativas == "Sim") {
            main(); 
        } else if (alternativas == "Nao") {
            break; 
        } else {
            cout << "Opção inválida, tente novamente." << endl;
        }
    }

    cout << "Obrigado por jogar!" << endl;

        return 0;
    }
