# 🌊 IoT-Based Flood Monitoring System

An Arduino system that monitors water level and alerts using a buzzer and GSM.

## 🧰 Components
- Arduino UNO
- Water Level or Ultrasonic Sensor
- Buzzer
- GSM Module (SIM800L)
- (Optional) LCD Display

## 🔌 Hardware Connections

### 🌊 Water Level Sensor (Analog or Float Switch Type):
| Sensor Pin | Arduino Pin | Description        |
|------------|-------------|--------------------|
| VCC        | 5V          | Power supply       |
| GND        | GND         | Ground             |
| OUT        | A0          | Analog signal input|

### 🔔 Buzzer:
| Buzzer Pin | Arduino Pin |
|------------|-------------|
| +          | D7          |
| -          | GND         |

### 📲 GSM Module (optional for SMS alerts):
| GSM Pin | Arduino Pin | Notes                            |
|---------|-------------|----------------------------------|
| TX      | D0 (RX)     | GSM to Arduino serial input      |
| RX      | D1 (TX via voltage divider) | Avoid 5V damage |
| GND     | GND         | Common ground                    |
| VCC     | External 5V | Stable power required            |


## 🔌 Working
- Monitors voltage from sensor
- Triggers alert when water level rises
- Can send SMS alert using GSM module

## 🧠 Author
Rajesh Kanna PB
