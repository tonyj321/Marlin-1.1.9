/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

// Thermistor lookup table for RepRap Temperature Sensor Boards (http://make.rrrf.org/ts)
// Made with createTemperatureLookup.py (http://svn.reprap.org/trunk/reprap/firmware/Arduino/utilities/createTemperatureLookup.py)
// ./createTemperatureLookup.py --r0=139500 --t0=20 --r1=0 --r2=4700 --beta=4368 --max-adc=1023
// r0: 139500
// t0: 20
// r1: 0
// r2: 4700
// beta: 4368
// max adc: 1023
const short temptable_7[][2] PROGMEM = {
   {1*OVERSAMPLENR, 680},
   {18*OVERSAMPLENR, 310},
   {35*OVERSAMPLENR, 261},
   {52*OVERSAMPLENR, 235},
   {69*OVERSAMPLENR, 218},
   {86*OVERSAMPLENR, 205},
   {103*OVERSAMPLENR, 195},
   {120*OVERSAMPLENR, 187},
   {137*OVERSAMPLENR, 179},
   {154*OVERSAMPLENR, 173},
   {171*OVERSAMPLENR, 167},
   {188*OVERSAMPLENR, 162},
   {205*OVERSAMPLENR, 158},
   {222*OVERSAMPLENR, 154},
   {239*OVERSAMPLENR, 150},
   {256*OVERSAMPLENR, 146},
   {273*OVERSAMPLENR, 142},
   {290*OVERSAMPLENR, 139},
   {307*OVERSAMPLENR, 136},
   {324*OVERSAMPLENR, 133},
   {341*OVERSAMPLENR, 130},
   {358*OVERSAMPLENR, 127},
   {375*OVERSAMPLENR, 125},
   {392*OVERSAMPLENR, 122},
   {409*OVERSAMPLENR, 120},
   {426*OVERSAMPLENR, 117},
   {443*OVERSAMPLENR, 115},
   {460*OVERSAMPLENR, 113},
   {477*OVERSAMPLENR, 110},
   {494*OVERSAMPLENR, 108},
   {511*OVERSAMPLENR, 106},
   {528*OVERSAMPLENR, 104},
   {545*OVERSAMPLENR, 102},
   {562*OVERSAMPLENR, 100},
   {579*OVERSAMPLENR, 97},
   {596*OVERSAMPLENR, 95},
   {613*OVERSAMPLENR, 93},
   {630*OVERSAMPLENR, 91},
   {647*OVERSAMPLENR, 89},
   {664*OVERSAMPLENR, 87},
   {681*OVERSAMPLENR, 85},
   {698*OVERSAMPLENR, 82},
   {715*OVERSAMPLENR, 80},
   {732*OVERSAMPLENR, 78},
   {749*OVERSAMPLENR, 75},
   {766*OVERSAMPLENR, 73},
   {783*OVERSAMPLENR, 71},
   {800*OVERSAMPLENR, 68},
   {817*OVERSAMPLENR, 65},
   {834*OVERSAMPLENR, 63},
   {851*OVERSAMPLENR, 60},
   {868*OVERSAMPLENR, 57},
   {885*OVERSAMPLENR, 53},
   {902*OVERSAMPLENR, 50},
   {919*OVERSAMPLENR, 46},
   {936*OVERSAMPLENR, 41},
   {953*OVERSAMPLENR, 36},
   {970*OVERSAMPLENR, 30},
   {987*OVERSAMPLENR, 22},
   {1004*OVERSAMPLENR, 10},
   {1021*OVERSAMPLENR, 0}
};
