# Digispark Unlock Project

## Overview

The **Digispark Unlock Project** demonstrates how to use the Digispark ATtiny85 microcontroller to automate the process of brute-forcing a mobile device’s lock screen PIN. This project is intended for educational purposes, showcasing how hardware can interact with and manipulate digital systems. Please use this project responsibly and only on devices you own or have explicit permission to test.

## Features

- **Brute-Force PIN Combination**: Iterates through all possible PIN combinations from `0000` to `9999`.
- **Configurable Delays**: Includes adjustable delays to manage the rate of attempts and avoid potential lockouts or security features.
- **Lightweight and Efficient**: Runs on the low-power Digispark ATtiny85 with minimal resource requirements.

## Hardware Requirements

- **Microcontroller**: Digispark ATtiny85
- **Connections**:
  - **Micro USB Cable**: To connect the Digispark to your computer for programming and power.
  - **Mobile Device**: For testing (ensure you have authorization to perform these actions).

## Software Requirements

- **Arduino IDE**: Used for writing and uploading the code to the Digispark.
- **DigiKeyboard Library**: Required for simulating keyboard inputs on the Digispark.

## Installation

To get the project up and running, follow these steps:

1. **Clone the Repository**:
   ```bash
   git clone https://github.com/Senthil2155/Ardiuno-Digispark-Mobile-Pin-Unlock.git
