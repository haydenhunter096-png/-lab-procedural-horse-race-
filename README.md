# -lab-procedural-horse-race-

# Horse Race Game

## Overview
A simple C++ horse race game.  

- 5 horses race on a 15-space track.  
- Each horse flips a coin each turn:
  - Heads (1) → move forward 1 space  
  - Tails (0) → stay in place  
- User presses ENTER to see the next turn.  
- The race ends when a horse reaches the finish line.

## How to Run
1. Compile the program:
```bash
g++ horse_race.cpp -o horse_race
