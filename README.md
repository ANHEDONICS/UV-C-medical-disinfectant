

This project is a smart UVC medical disinfectant system designed to provide safe, efficient, and automated sterilization using UVC light. The system is built using an **Arduino Nano**, IR sensors, and a luminosity sensor to intelligently control disinfection time and ensure user safety.

---

## 🚑 **Key Features**

- **Automated UVC Sterilization:** Uses IR sensors to detect presence and activate disinfection automatically.
- **Luminosity Monitoring:** Ensures effective UVC exposure by monitoring light intensity.
- **Arduino Nano Controlled:** Simple, compact microcontroller for reliable operation.
- **Safe & Secure:** Automatically turns off UVC lamp when presence is detected to protect humans.

---

## ⚙️ **Hardware Used**

- **Arduino Nano** (microcontroller)
- **IR Sensor (HC-SR04)** for presence detection
- **Luminosity Sensor (e.g., BH1750 or similar)**
- **Motor Driver (L298N)**
- **12V Power Supply**
- **UVC Light Module**

---

## 🔌 **How It Works**

1. **Detection:** IR sensor detects if disinfection is needed.
2. **Timing & Intensity:** Luminosity sensor measures UVC exposure to control disinfection time.
3. **Control:** Arduino Nano runs the logic and controls the motor driver and UVC lamp.
4. **Safety:** The system stops the UVC light automatically if movement is detected to prevent accidental exposure.

---
