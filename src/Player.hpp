//
// Created by Emanuele Ghelfi on 19/04/2020.
//

#ifndef TRIS_PLAYER_HPP
#define TRIS_PLAYER_HPP

/**
 * Player class. Represents a player.
 */
class Player{
protected:
    /**
     * Id of the player.
     */
    unsigned int _player_id;

public:

    /**
     * This is the main method for a player.
     * It takes in input the tris board and does its move.
     * Pure virtual method, should be overridden by subclasses.
     */
    virtual void play() = 0;

    /**
     * Instantiate a player.
     * @param player_id Id of the player.
     */
    explicit Player(unsigned int player_id):_player_id(player_id){};
}

#endif //TRIS_PLAYER_HPP
