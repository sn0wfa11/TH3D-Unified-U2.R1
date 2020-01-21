#pragma once

#define CUSTOM_BOOTSCREEN_TIMEOUT      1500
#define CUSTOM_BOOTSCREEN_BMPWIDTH      128
#define CUSTOM_BOOTSCREEN_Y               3

const unsigned char custom_start_bmp[1024] PROGMEM = {
  0x00,0x00,0x01,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // .......................#################........................................................................................
  0x00,0x01,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ...............#################################................................................................................
  0x00,0x1F,0xFF,0xFF,0xFF,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ...........#########################################............................................................................
  0x00,0xFF,0xE0,0x00,0xFF,0xFF,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ........###########.............#######################.........................................................................
  0x03,0xF0,0x00,0x00,0x00,0x3F,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ......######..............................################......................................................................
  0x07,0x80,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // .....####.......................................###########.....................................................................
  0x0E,0x07,0xFC,0x00,0x00,0x00,0x0F,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ....###......#########..............................########....................................................................
  0x0C,0xFF,0x00,0x00,0x00,0x00,0x01,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ....##..########.......................................######...................................................................
  0x0F,0xE0,0x00,0x00,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ....#######..............................................####...................................................................
  0x0F,0xC0,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ....######................................................###...................................................................
  0x07,0xC0,0x00,0x00,0x00,0x01,0xE0,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // .....#####.....................................####......###....................................................................
  0x01,0xE0,0x00,0x00,0x00,0x00,0x7C,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // .......####......................................#####..####....................................................................
  0x00,0x78,0x00,0x00,0x00,0x00,0x7F,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // .........####....................................###########....................................................................
  0x01,0x0F,0xC0,0x00,0x00,0x01,0xFF,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // .......#....######.............................############.....................................................................
  0x01,0x01,0xFF,0x80,0x00,0x3F,0xE3,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // .......#.......##########.................#########...#####.....................................................................
  0x01,0x80,0x07,0xFF,0xFF,0xFC,0x0F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // .......##............#########################......######......................................................................
  0x01,0xC0,0x00,0x00,0x00,0x00,0x3F,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // .......###........................................#######.......................................................................
  0x00,0xE0,0x00,0x00,0x00,0x01,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ........###....................................#########........................................................................
  0x00,0x38,0x00,0x00,0x00,0x2F,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ..........###.............................#.##########..........................................................................
  0x00,0x1E,0x00,0x00,0x00,0xFF,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ...........####.........................#############...........................................................................
  0x00,0x03,0x80,0x00,0x0F,0xFE,0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ..............###...................###########..####...........................................................................
  0x00,0x00,0x40,0x00,0x3E,0x00,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // .................#................#####..........###............................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // .................................................###............................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................####............................................................................
  0x00,0x00,0x00,0x00,0x00,0x01,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ...............................................####.............................................................................
  0x00,0x06,0x00,0x00,0x00,0x07,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // .............##..............................#####..............................................................................
  0x00,0x03,0x00,0x00,0x00,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ..............##...........................#####................................................................................
  0x00,0x01,0xC0,0x00,0x00,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ...............###......................######..................................................................................
  0x00,0x00,0x78,0x00,0x0F,0xEC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // .................####...............#######.##..................................................................................
  0x00,0x00,0x04,0x00,0x10,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // .....................#.............#........###.................................................................................
  0x00,0x00,0x00,0x00,0x00,0x1E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ...........................................####.................................................................................
  0x00,0x00,0x00,0x00,0x00,0x7C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // .........................................#####..................................................................................
  0x00,0x00,0x00,0x00,0x00,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ........................................####....................................................................................
  0x00,0x00,0x00,0x00,0x07,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // .....................................######.....................................................................................
  0x00,0x00,0x00,0x00,0x3F,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ..................................######.##.....................................................................................
  0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // .........................................##.....................................................................................
  0x00,0x00,0x08,0x00,0x00,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00, // ....................#...................###..................................................................#..................
  0x00,0x00,0x07,0x00,0x03,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xFE,0x00,0x00, // .....................###..............####.............................................................########.................
  0x00,0x00,0x03,0x80,0x0F,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xFC,0x00,0x00, // ......................###...........#####..............................................................#######..................
  0x00,0x00,0x00,0xC0,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0x00,0x00, // ........................##.......#######................................................................#####...................
  0x00,0x00,0x00,0x00,0xC3,0x00,0x00,0x08,0x00,0x03,0x00,0x0F,0x80,0x7C,0x00,0x00, // ................................##....##....................#.................##............#####........#####..................
  0x00,0x00,0x00,0x00,0x07,0x01,0xFD,0xFF,0xEF,0xE7,0x83,0x3F,0x86,0x7C,0x3F,0x80, // .....................................###.......#######.############.#######..####.....##..#######....##..#####....#######.......
  0x00,0x00,0x00,0x00,0x0E,0x07,0xFF,0xFF,0xF7,0xEF,0x8F,0xFF,0x1F,0xFC,0x7F,0xC0, // ....................................###......#######################.######.#####...############...###########...#########......
  0x00,0x00,0x00,0x00,0x3C,0x1F,0xFF,0xFD,0xFB,0xFF,0xDF,0xFF,0x3F,0xFC,0xFF,0xE0, // ..................................####.....###################.######.############.#############..############..###########.....
  0x00,0x00,0x00,0x00,0x76,0x1F,0xFE,0x7B,0xFB,0xFF,0xDF,0xFF,0x7F,0xFD,0xFF,0xE0, // .................................###.##....############..####.#######.############.#############.#############.############.....
  0x00,0x00,0x00,0x00,0x06,0x1E,0x06,0x7B,0xFB,0xFF,0xFF,0xFF,0x7F,0xFF,0xE0,0xE0, // .....................................##....####......##..####.#######.##########################.##################.....###.....
  0x00,0x00,0x00,0x00,0x1C,0x1C,0x06,0x7B,0xF3,0xF7,0xB8,0x1E,0x70,0x7B,0x80,0xE0, // ...................................###.....###.......##..####.######..######.####.###......####..###.....####.###.......###.....
  0x00,0x00,0x00,0x01,0xF8,0x18,0x1E,0x7C,0x03,0xE7,0xBE,0xFE,0x7F,0xFB,0x81,0xC0, // ...............................######......##......####..#####........#####..####.#####.#######..############.###......###......
  0x00,0x00,0x00,0x00,0xF0,0x1F,0xFE,0x7E,0x01,0xE7,0xBF,0xFF,0xFF,0xFF,0xFF,0xC0, // ................................####.......############..######........####..####.########################################......
  0x00,0x00,0x00,0x03,0xF8,0x0F,0xFC,0xFF,0x87,0xE7,0xBF,0xFF,0xFF,0xFF,0xFF,0xC0, // ..............................#######.......##########..#########....######..####.########################################......
  0x00,0x00,0x00,0x03,0xF0,0x07,0xF9,0xFF,0x87,0xE7,0x9F,0xFF,0xBF,0x7E,0xFF,0x80, // ..............................######.........########..##########....######..####..##############.######.######.#########.......
  0x00,0x00,0x00,0x01,0xF0,0x03,0xF1,0xE0,0x00,0x27,0xFF,0x10,0x00,0x40,0x3F,0x00, // ...............................#####..........######...####...............#..###########...#.............#........######........
  0x00,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,0x00,0x00,0xE0,0x00,0x00,0x00,0x00,0x00  // ................................##..............................................###.............................................
};
