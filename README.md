# TEMPERATURE-MONITORING-SYSTEM


**COMPANY:** CODTECH IT SOLUTIONS

**NAME:** KUNTUMALLA BUGGA SUSHEEL

**INTERN ID:** CT04DZ1724 

**DOMAIN:** Embedded Systems

**DURATION:** 4 WEEKS  

**MENTOR:** NEELA SANTOSH  

**DESCRIPTION:**


## 📌 Task 1: Temperature Sensor Reading & Display

This project reads ambient temperature using the **TMP35 analog temperature sensor** and displays the live readings on a **16x2 LCD display** using an **Arduino UNO**. The sensor output is analog and is processed using the Arduino’s ADC to calculate temperature in Celsius.

---

## 🔧 Components Used

- Arduino UNO  
- TMP35 Temperature Sensor  
- 16x2 LCD (Non-I2C)  
- 10kΩ Potentiometer (for LCD contrast)
- 220Ω Resistor
- Breadboard & Jumper wires  

---

## ⚡ Circuit Connections

### 🔹 TMP35 Sensor:
| TMP35 Pin | Connection      |
|-----------|-----------------|
| VCC       | 5V (Arduino UNO)|
| GND       | GND             |
| OUT       | A0 (Analog pin) |

### 🔹 LCD Display:
| LCD Pin | Arduino Pin       |
|---------|-------------------|
| VSS     | GND               |
| VDD     | 5V                |
| V0      | Middle of Potentiometer |
| RS      | D12               |
| RW      | GND               |
| E       | D11               |
| D4      | D5                |
| D5      | D4                |
| D6      | D3                |
| D7      | D2                |
| A (LED+) | 5V               |
| K (LED-) | GND              |

### Circuit Diagram:

![Image](https://github.com/user-attachments/assets/9eba52da-459c-4714-86b4-44c1eb2432f4)



## 📷 Output Preview

<img width="1920" height="1200" alt="Image" src="https://github.com/user-attachments/assets/c9c26283-26ad-47a5-972a-7aef46f15a9f" />


- The LCD will show the current temperature in Celsius (°C)
- Updates every 1 second
- Example: `Temp: 29.56 C`






## 📌 Formula Used

Voltage = analogRead(A0) × (5.0 / 1023.0)

Temperature (°C) = (Voltage - 0.5) × 100
