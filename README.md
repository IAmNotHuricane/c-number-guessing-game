# C Number Guessing Game

A console-based number guessing game developed in C featuring dynamic difficulty levels, boundary checks, turn tracking, and a replay system.

## Features
- **3 Difficulty Modes:**
  - Easy: Numbers 1–50 (10 attempts)
  - Medium: Numbers 1–100 (7 attempts)
  - Hard: Numbers 1–200 (5 attempts)
- **Input Validation:** Prevents invalid inputs from burning attempts.
- **Turn Tracker:** Displays current attempt count and remaining guesses in real-time.
- **Replay Loop:** Lets the player start a fresh game without restarting the executable.

## How to Compile & Run

Using GCC:
```bash
gcc project1.c -o game
./game
