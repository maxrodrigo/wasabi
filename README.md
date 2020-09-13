# Wasabi

1 row 4 columns Media Keypad

- Keyboard Maintainer: [Max Rodrigo](https://github.com/maxrodrigo)
- Hardware Supported: Arduino Pro Micro
- Hardware Availability: [Handwired]

Make example for this keyboard (after setting up your build environment):

    make handwired/wasabi:default

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Pinout

```
                         +-------+
                    +----+  USB  +----+
                PD3 |    +-------+    | RAW
                PD2 |                 | GND
                GND |                 | RST
                GND |                 | VCC
                PD1 |                 | PF4
                PD0 |                 | PF5
                PD4 |                 | PF6
                PC6 |                 | PF7
                PD7 |                 | PB1 +---> COL 1
                PE6 |                 | PB3 +---> COL 2
                PB4 |                 | PB2 +---> COL 3
    ROW 1 <---+ PB5 |    Pro Micro    | PB6 +---> COL 4
                    +-----------------+
```
