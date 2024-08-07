# Arrow Game Using AVR Atmega32 🎯💻🔌

This project is a simple hardware-based arrow game implemented using an AVR Atmega32 microcontroller. The game displays an arrow moving across the screen, and the player needs to press a button to interact with the game.

## Features ✨📌

- **Interactive game** using an LCD display
- **Keypad input** for player interaction
- **Custom characters** displayed on the LCD

## Hardware Requirements 🛠️🧰

- **Microcontroller**: AVR Atmega32
- **LCD Display**
- **Keypad**
- **Push Button**
- **Crystal oscillator**: 8 MHz
- **Capacitors, resistors, and connecting wires**

## Software Layer 🖥️💡

1. **MCAL**: DIO (Digital Input/Output)
2. **HAL**: LCD (4 Bit Mode), Keypad

## Circuit Diagram 📊
(Insert a circuit diagram image here if you have one)

## Usage 📝

1. **Connect** the hardware components as per the circuit diagram.
2. **Compile** the code using the AVR-GCC compiler.
3. **Upload** the compiled code to the AVR Atmega32 microcontroller using AVRDUDE.
4. **Power up** the microcontroller to start the arrow game.

## How It Works ⚙️

1. **Start Screen**: The game starts with a screen displaying "Arrow Game" and "SW1 To Play".
   - Press the button to start the game.
   
2. **Gameplay**:
   - An arrow moves across the LCD screen.
   - The player can press the button to interact with the game.
   - If the player presses the button at the right time, a different animation will play.

3. **Game Over**: When the game ends, the screen displays "Game Over" and prompts the player to press the button to play again.

## Custom Characters 🎨

- **Man**
- **Arrow**
- **Man with Arrow**
- **Man Falling**
- **Man Standing**

Made with ❤️ by [Aboubakr Amr Ibnelkhatab]
