#include "GameController.hpp"

int main() {
    GameController gameController;

    gameController.initializePlayers();
    gameController.initializePistols();

    while (gameController.isGameActive()) {
        gameController.playRound();
    }

    return 0;
}
