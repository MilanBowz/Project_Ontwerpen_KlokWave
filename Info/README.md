
## 📦 Bill of Materials (BOM)

| **Part Number**         | **Description / Value**                         | **Designators**            | **Qty** | **Supports**                  |
|-------------------------|-------------------------------------------------|----------------------------|---------|-------------------------------|
| CR-2032/HFN             | THT Coin Cell Battery, 3V, 225 mAh              | B1                         | 1       | DS1307+ VBAT                  |
| 16SEPC150MD             | THT OS-CON Radial Capacitor (Polarised)         | C1, C2                     | 2       | VCC                           |
|                         | 220µF                                           | C1, C2                     | 2       |                               |
| 565R30GASS33            | THT Ceramic Capacitor (not polarised)           | C3–C6                      | 4       | ATMEGA                        |
|                         | 100nF                                           | C3, C4                     | 2       | VCC                           |
|                         | 22pF                                            | C5, C6                     | 2       | Y1 Crystal                    |
| CL21 Series 0805        | SMD 0805 Ceramic Capacitor (not polarised)      | C7, C10, C13, C14          | 4       | ALARM (see pdf)               |
|                         | 220nF, 100nF, 47nF, 4.7nF                       |                            | 4x1     |                               |
|  FP-OS-CON-SMT-C6-MFG   | SMD Elco Capacitor (polarised)                  | C8–C12, C15–C25            | 15      |                               |
|                         | 100µF / 16V                                     |                            | 4       |                               |
|                         | 47µF / 16V                                      |                            | 6       |                               |
|                         | 10µF / 16V                                      |                            | 5       |                               |
| 1N4007-E3/53            | THT Diode, 1A 1kV DO204AL                       | D1                         | 1       |                               |
| TMMBAT48FILM            | SMD Schottky Diode 40V 350mA                    | D2                         | 1       |                               |
| 1N4148WT-7              | SMD Diode, 80V 125mA                            | D3, D4                     | 2       |                               |
| HLMP-3301               | THT 5mm Diffused LED                            | DS2                        | 1       |                               |
| —                       | THT DC Power Jack                               | J1                         | 1       |                               |
| SA56-11EWA              | THT 7-Segment Display CA                        | LED1–LED4                  | 4       |                               |
| CVS-1508                | THT Speaker                                     | LS1                        | 1       |                               |
| 3361P-1-503GLF          | SMD Trimmer Potentiometer, 50kΩ                 | P1, P2                     | 2       |                               |
| BC547C                  | NPN Transistor, TO-92                           | Q1–Q11                     | 11      |                               |
| AC03000003000JAC00      | THT Wirewound Resistor                          | R3–R6, R46–R50             | 9       |                               |
|                         | 10kΩ                                             | R5, R6, R50               | 3       | SDA, SCL, RESET               |
|                         | 1kΩ                                              | R4                        | 1       | CTRL_ALARM                    |
|                         | 330Ω                                             | R3                        | 1       | TEST_LED                      |
|                         | 220Ω                                             | R46–R49                   | 4       | DISPLAY                       |
| CR0805-FX-22R6ELF       | SMD 0805 Resistor                               | R7–R45                     | 39      | ALARM (see pdf)               |
|                         | Values: 1M, 680k, 270k, 180k, 100k, 68k (×9), 47k (×4), 39k (×2), 33k, 22k (×2), 10k (×3), 6.8k (×6), 4.7k, 2.2k, 1k, 680Ω, 560Ω, 470Ω, 100Ω | 
| 1825910-6               | THT Tactile Switch SPST-NO                     | SW1–SW4                    | 4        |                               |
| ATmega328P-PU           | THT AVR Microcontroller 28-pin PDIP            | U1                         | 1        |                               |
| LM7805                  | THT 5V Voltage Regulator TO-220                | U2                         | 1        |                               |
| 74HC595N                | THT 8-bit Shift Register                       | U3, U5–U7                  | 4        |                               |
| DS1307+                 | THT I2C RTC, 8-pin PDIP                         | U4                        | 1        |                               |
| 16MHz Crystal HC49      | THT Quartz Crystal (ATmega)                    | Y1                         | 1        |                               |
| 32.768kHz Crystal       | THT Crystal, 12.5pF (DS1307+)                   | Y2                        | 1        |                               |
