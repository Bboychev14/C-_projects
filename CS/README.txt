Task description

Your task is to provide to provide an implementation, which with the given standard input will produce the
correct standard output (detailed description below).
The game is played with two players from opposing teams (Player 0 and Player 1).
In game you should find a header prototypes for the 2 different supported Pistol types:
enum class PistolType {
 GLOCK, DESERT_EAGLE
};
You must provide concrete implementations for the DesertEagle and Glock pistols.
In the game both players takes turns shooting each other with their provided pistols for the round.
First goes Player 0, then Player 1 … and so on until one of them dies (has no health left).
Each player has 2 vital attributes “health” and “armor”
The armor is a way for the player to negate some of the incoming damage that he is about to take.
A player will not always have armor.
1
Each player also acquires a Pistol at the start of the round (determined by the input).
This Pistol is either a DesertEagle or a Glock.
Both Pistols have the same attributes, but they do have different effects.
The Pistol attributes explained:
damagePerRound – indicates how much damage does each bullet deal
clipSize – indicates how much bullet capacity the concrete pistol clip has
currClipBullets – indicates how many bullets are left in the current clip
remainingAmmo – indicates how many spare bullets are left for the player to reload with.
This count does not include in itself the bullets that are loaded in the current pistol clip
The input to the program consists of (in that order):
player 0 health, player 0 armor
player 1 health, player 1 armor
player 0 PistolType, player 0 pistol damage per round, player 0 clipSize, player 0 remainingAmmo
player 1 PistolType, player 1 pistol damage per round, player 1 clipSize, player 1 remainingAmmo
Game rules:
 At the start of the game – each player has a full clip of bullets ready and loaded.
 Players take turns shooting at each other (starting always from Player with ID: 0)
 If a player pistol is required to fire and current bullets in the clip reaches 0 – the player must reload its
pistol. The player loses his remaining turn and does not deal any more damage for this turn.
Common DesertEagle and Glock rules:
 If an opponent has a positive armor value and the shot fired against this opponent has a bigger value
than the armor – the armor is set to 0 and the remaining damage is subtracted from the target’s health
indicator.
 Both DesertEagle and Glock ::fire() methods should return a bool variable, which indicates whether or
not the target (enemy player) has been killed by this round bullets that were fired.
An opponent is considered killed when his health indicator drops below 0 (or is equal to 0).
DesertEagle Pistol specifics (see concrete examples at the ‘Examples’ section):
 If the opponent has no armor:
o Deals 100% of the pistol original damage to the opponent’s health indicator
 If the opponent has armor:
o Deals 75% of the pistol original damage to the opponent’s health indicator
o Deals 25% of the pistol original damage to the opponent’s armor indicator
 Pistol damage will always be divisible by 4 (Example: 32, 16, 4, 100)
 When reloading – no shots will be made in the same turn.
2
Glock Pistol specifics (see concrete examples at the ‘Examples’ section):
 Fires 3 bullets one after another for a single turn. A print to the console should be made for each shot
fired.
If there are less than 3 bullets remaining for this turn – fire all the remaining bullets and initiate a reload.
No bullets should be fired after the reload in the same turn.
 If the opponent has no armor:
o Deals 100% of the pistol original damage to the opponent’s health indicator
 If the opponent has armor:
o Deals 50% of the pistol original damage to the opponent’s health indicator
o Deals 50% of the pistol original damage to the opponent’s armor indicator
 Pistol damage will always be divisible by 4 (Example: 36, 8, 112, 44)
Console output
 After each shout fired you should print to the console the opponent player vital details following this
exact format:
"Enemy left with: N health and M armor” followed by a newline.
Where N indicates the remaining opponents health (after the shot) and
M indicates the remaining opponents armor (after the shot)
 If a player has no bullets left on each of his next turns print “No ammo left” followed by a newline.
Restrictions
Code should compile under the C++11 standard or greater
Code should not use any non-standard extensions.