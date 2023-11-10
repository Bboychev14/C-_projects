#ifndef GAMECONTROLLER_HPP_
#define GAMECONTROLLER_HPP_

#include <vector>
#include "Player.hpp"

class GameController {
public:
    GameController();

    void initializePlayers();
    void initializePistols();
    void playRound();
    bool isGameActive() const;

private:
    std::vector<Player> players;
    int currentPlayerIndex;
    bool gameActive;
};

#endif /* GAMECONTROLLER_HPP_ */
