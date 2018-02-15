# My QMK Config

These are two seperate keymap files for two different PCBs that I have, one for the DZ60 and one for the Tada68.

# DZ60

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
|    |    |    |                        |    |    |    |    |
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

