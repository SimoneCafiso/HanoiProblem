#include <iostream>
#include <vector>


class HanoiProblem {
public:

    void towerOfHanoi(int disks, const std::string& main, const std::string& middle,  const std::string& last) {
       // se i dischi sono 0 il risultato sara' nullo, invalido
        if (disks == 0) {
            return;
        }


        //chiamiamo il metodo con x -1 dischi (il primo sara' spostato sempre nell'ultimo)

        towerOfHanoi(disks - 1, main, last, middle);

        //spostiamo il primo disco nell'ultima torre (i dischi devono essere in ordine)

        std::cout << "Spostiamo il disco numero " << disks << " dalla " << main << " torre alla " << last << " torre" << "\n";

        // chiamiamo il metodo "shiftando" la torre B come torre principale

        towerOfHanoi(disks - 1, middle, main, last);
    }

private:

};


int main() {


    HanoiProblem hp;


    hp.towerOfHanoi(6, "prima", "seconda", "ultima");



    //std::cout << "Hello, World!" << std::endl;
    return 0;
}
