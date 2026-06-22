# CodePad

CodePad is a 6 key macropad with a rotary encoder, and an OLED Display. It uses QMK firmware.

## Features:
- Dual layer plastic case. 
- 128x32 OLED Display
- EC11 Rotary encoder for whatever you want(volume control, scrolling)
- 6 Keys

## CAD Model:
Everything fits together using 4 M3 Bolts and heatset inserts. 4 for the each corner of the case. 

It has 2 separate printed pieces. The base where the PCB sits, and the top cover.

<img src=assets/cad.jpg alt="Schematic" width="500"/>

Made in Fusion360.

## PCB
Here's my PCB! It was made in KiCad. The silkscreen was imported from a Figma image.

Schematic
<img src=assets/schematic.jpg alt="Schematic" width="300"/>

PCB
<img src=assets/pcb.jpg alt="Schematic" width="300"/>
I didn't use any matrixes cause easier the better no need to make it complex.

## Firmware Overview
This hackpad uses [QMK](https://qmk.fm/) firmware for everything. 

- the rotary encoder changes volume. press to mute
- The 6 keys currently as copy, paste, shift select, pause and play, keyboard brightness up and down I'm planning to change it later.
- The OLED is would have a clock but I'm searching for more creative ideas for it

## BOM:
Here is everything needed to make this hackpad

- 6x Cherry MX Switches
- 6x DSA Keycaps
- 4x M3x5x4 Heatset inserts
- 4x M3x16mm SHCS Bolts
- 1x 0.91" 128x32 OLED Display
- 1x EC11 Rotary Encoder
- 1x XIAO RP2040
- 1x Case (2 printed parts)

## Extra stuff

Fun fact: I completed building it a day before my 19th birthday 

