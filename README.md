# My QMK Config

These are two seperate keymap files for two different PCBs that I have, one for the DZ60 and one for the Tada68.

# DZ60
This keymap was based off the default keymap in the [qmk firmware](https://github.com/qmk/qmk_firmware)

## Base Layer
,-----------------------------------------------------------.
|F(12)| 1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp|
|-----------------------------------------------------------|
|Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \|
|-----------------------------------------------------------|
|Fn     |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return |
|-----------------------------------------------------------|
|Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift     |
|-----------------------------------------------------------|
|Ctrl|Gui |Alt |      Space             |Alt |Gui |Ctrl|Fn  |
`-----------------------------------------------------------'
Capslock is replace with function layer 1 capacity

## Function Layer
,-----------------------------------------------------------.
|  ~ | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Delete|
|-----------------------------------------------------------|
|    |RTog|RMod|RHi|Rhd|RSi|RSd|RVi|RVd|Ins|Pscr|PgD|PgU|   |
|-----------------------------------------------------------|
|       |    |    |    |Cap|   |Lft|Dwn| Up|Rht|End|Hme|    |
|-----------------------------------------------------------|
|       |   |   |BlD|BlT|BlS|   |   |   |ScrLk|Paus|        |
|-----------------------------------------------------------|
|    |    |    |                          |    |    |   |   |
`-----------------------------------------------------------'
VIM style arrow keys are used on H-L

LED Options:
* Q-I are RGB options
    - *RTog* toggles on/off RGB
    - *RMod* cycles through RGB modes
    - *RHi/d* changes hue values
    - *RSi/d* changes saturation values
    - *RVi/d* changes vibrance values
* C-B are backlight options
    - *BlD* dims the backlight
    - *BlT* toggles on/off backlight
    - *BlS* brightens backlight

# Tada68
This keymap was based off the default keymap in the [qmk firmware](https://github.com/qmk/qmk_firmware)

## Base Layer
,----------------------------------------------------------------.
|Esc | 1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp |~ ` |
|----------------------------------------------------------------|
|Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  |Del |
|----------------------------------------------------------------|
|CAPS   |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return |PgUp|
|----------------------------------------------------------------|
|Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift | Up|PgDn|
|----------------------------------------------------------------|
|Ctrl| Alt |Fn|        Space          |Alt| Win|Ctrl|Lef|Dow|Rig |
`----------------------------------------------------------------'

## Function Layer
,----------------------------------------------------------------.
|   | F1|F2 |F3 |F4 |F5 |F6 |F7 |F8 |F9 |F10|F11|F12|Del    |Ins |
|----------------------------------------------------------------|
|     |   |Up |   |   |   |   |   |   |   |   |   |   |     |Hme |
|----------------------------------------------------------------|
|      |<- |Dn | ->|   |   |   |   |   |   |   |   |        |End |
|----------------------------------------------------------------|
|        |   |   |Bl-|BL |BL+|   |VU-|VU+|MUT|   |   McL|MsU|McR |
|----------------------------------------------------------------|
|    |    |    |                       |   |   |    |MsL|MsD|MsR |
`----------------------------------------------------------------'
My PCB does not have any LEDs installed making the backlight options useless
