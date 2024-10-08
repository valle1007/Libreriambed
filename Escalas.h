/*! @file   Escalas header file
**! \brief  Designed for PWM Module on Mbed Based boards, rev. 1, 10/2020
 *
 * Usage:
 * #include Escalas.h
 * #define Sel_Escala  0	 // Sel_Escala: 
 *                      	 // 0=Temperada, 1=Filosófica, 2=Aurea,
 *                      	 // 3=Pitagórica, 4=Zarlino
 * #define Enarminicos 1	 // Enarmonicos:
 *                      	 // 0=Disable Enarmónicos, 1=Enable Enarmónicos
 * PwmOut  buzzer(PB_0);	 // Set pin port for Buzzer (PB0_TIM3_CH4N)
 * buzzer.period(LA4);		 // Set Frecuency for LA4  (440Hz)
 * buzzer.pulsewidth(LA4/2); // Set Duty Cycle 50%
 *
 *  Creado en: Octubre, 2020
 *  Autores: Antulio Morgado Valle
 *
  * Changelog:
 *   2020-10-20 - Initial release by Antulio Morgado <amorgado@ipn.mx>
 *   2024-04-30 - First Revision by Antulio Morgado <amorgado@ipn.mx>
 *
 *******************************************************************************
 * Copyright (c) 2020, THE ANTULIUS TEAM R&D UNLTD 
 * All rights reserved.
 * Escalas.h
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documnetation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to  whom the Software is
 * furished to do so, subject are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 * 3. Neither the name of STMicroelectronics nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 *  Creado en: Diciembre, 2020
 *  Autores: Antulio Morgado Valle
 *******************************************************************************
 */
#include "mbed.h"
#ifndef ESCALAS_H_
#define ESCALAS_H_

#if ESCALA_MUSICAL == 0
//         Nota             Periodo (Seg)       Frecuencia (Hz)
#define     DO2             0.01528898864105    // 65.40655 Hz  (Escala Diatónica)
#define     RE2             0.01362097193807    // 73.4162 Hz   (Afinación 440)
#define     MI2             0.01213569404944    // 82.40155 Hz
#define     FA2             0.01145383531676    // 87.307 Hz
#define     SOL2            0.01020424302629    // 97.99845 Hz
#define     LA2             0.009               // 110 Hz
#define     SI2             0.00800909403534    // 123.4706 Hz
#define     DO3             0.00764449432052    // 130.8131 Hz
#define     RE3             0.00681048596904    // 146.8324 Hz
#define     MI3             0.00606784702472    // 164.8031 Hz
#define     FA3             0.00572691765838    // 174.614 Hz
#define     SOL3            0.00510212151315    // 195.9969 Hz
#define     LA3             0.0045              // 220 Hz
#define     SI3             0.00404954701767    // 246.9412 Hz
#define     DO4             0.00382224716026    // 261.6262 Hz
#define     RE4             0.00340524298452    // 293.6648 Hz
#define     MI4             0.00303392351236    // 329.6062 Hz
#define     FA4             0.00286345882919    // 349.228 Hz
#define     SOL4            0.00255106075657    // 391.9938 Hz
#define     LA4             0.00227             // 440 Hz       (LA 440)
#define     SI4             0.00202477350884    // 493.8824 Hz
#define     DO5             0.00191112358013    // 523.2524 Hz
#define     DOs5            0.00180386633495    // 554.3648 Hz
#define     RE5             0.00170262149226    // 587.3296 Hz
#define     MI5             0.00151696175618    // 659.2124 Hz
#define     FA5             0.00143172941459    // 698.456 Hz
#define     SOL5            0.00127553037829    // 783.9876 Hz
#define     LA5             0.001136            // 880 Hz
#define     SI5             0.00101238675442    // 987.7648 Hz
#define     DO6             0.00095556179007    // 1046.5048 Hz
#define     RE6             0.00085131074613    // 1174.6592 Hz
#define     MI6             0.00075848087809    // 1318.4248 Hz
#define     FA6             0.0007158647073     // 1396.912 Hz
#define     SOL6            0.00063776518914    // 1567.9752 Hz
#define     LA6             0.0005681           // 1760 Hz
#define     SI6             0.00050619337721    // 1975.5296 Hz
#define     DO7             0.00047778089503    // 2093.0096 Hz
#define     RE7             0.00042565537306    // 2349.3184 Hz
#define     MI7             0.00037924043905    // 2636.8496 Hz
#define     FA7             0.00035793235365    // 2793.824 H
#define     SOL7            0.00031888259457    // 3135.9504 Hz
#define     LA7             0.00028409          // 3520 Hz
#define     SI7             0.0002530966886     // 3951.0592 Hz
#define     DO8             0.00023889044752    // 4186.0192 Hz                                        
#define     SILENCIO        0.0                  //    0.0 Hz
#endif

#if ESCALA_MUSICAL == 1
//         Nota             Periodo (Seg)       Frecuencia (Hz)
#define     DO2             0.015625             // 64 Hz       (Escala Cromática)
#define     DOs2            0.01470588235294     // 68 Hz       (Afinacion Mozart])
#define     RE2             0.0138               // 72 Hz
#define     REs2            0.01315789473684     // 76 Hz
#define     MI2             0.01242236024845     // 80.5 Hz
#define     FA2             0.01169590643275     // 85.5 Hz
#define     FAs2            0.01104972375691     // 90.5 Hz
#define     SOL2            0.010416             // 96 Hz
#define     SOLs2           0.00985221674877     // 101.5 Hz
#define     LA2             0.0093023255814      // 107.5 Hz
#define     LAs2            0.00877192982456     // 114 Hz
#define     SI2             0.00826446280992     // 121 Hz
#define     DO3             0.0078125            // 128 Hz
#define     DOs3            0.00735294117647     // 136 Hz
#define     RE3             0.00694              // 144 Hz
#define     REs3            0.00657894736842     // 152 Hz
#define     MI3             0.00621118012422     // 161 Hz
#define     FA3             0.00584795321637     // 171 Hz
#define     FAs3            0.00552486187845     // 181 Hz
#define     SOL3            0.0052083            // 192 Hz
#define     SOLs3           0.00492610837438     // 203 Hz
#define     LA3             0.0046511627907      // 215 Hz
#define     LAs3            0.00438596491228     // 228 Hz
#define     SI3             0.00413223140496     // 242 Hz
#define     DO4             0.00390625           // 256 Hz  (DO 256)
#define     DOs4            0.00368700903515625  // 271 Hz
#define     RE4             0.0034800731171875   // 287 Hz
#define     REs4            0.00328475162109375  // 304 Hz
#define     MI4             0.0031003926796875   // 323 Hz
#define     FA4             0.0029263810078125   // 342 Hz
#define     FAs4            0.0055242717265625   // 362 Hz
#define     SOL4            0.00260710908984375  // 384 Hz
#define     SOLs4           0.00246078330078125  // 406 Hz
#define     LA4             0.0023226701484375   // 431 Hz  (LA 431)
#define     LAs4            0.0021923086875      // 456 Hz
#define     SI4             0.00206926385546875  // 483 Hz
#define     DO5             0.00390625           // 512 Hz
#define     DOs5            0.001843504517578125 // 542 Hz
#define     RE5             0.00174003655859375  // 575 Hz
#define     REs5            0.001642375810546875 // 609 Hz
#define     MI5             0.00155019633984375  // 645 Hz
#define     FA5             0.00146319050390625  // 683 Hz
#define     FAs5            0.001381067931640625 // 724 Hz
#define     SOL5            0.001303554544921875 // 767 Hz
#define     SOLs5           0.001230391650390625 // 813 Hz
#define     LA5             0.00116133507421875  // 861 Hz
#define     LAs5            0.00109615434375     // 912 Hz
#define     SI5             0.001034631927734375 // 966 Hz
#define     DO6             0.0009765625         // 1024 Hz
#define     DOs6            0.00092165898618     // 1085 Hz
#define     RE6             0.00087032201915     // 1149 Hz
#define     REs6            0.0008210180624      // 1218 Hz
#define     MI6             0.00077519379845     // 1290 Hz
#define     FA6             0.00073152889539     // 1367 Hz
#define     FAs6            0.00069060773481     // 1448 Hz
#define     SOL6            0.0006518904824      // 1534 Hz
#define     SOLs6           0.000615384          // 1625 Hz   
#define     LA6             0.00058072009292     // 1722 Hz
#define     LAs6            0.0005479452         // 1825 Hz
#define     SI6             0.00051733057424     // 1933 Hz
#define     DO7             0.00048828125        // 2048 Hz
#define     DOs7            0.00046082949309     // 2170 Hz
#define     RE7             0.00043497172684     // 2299 Hz
#define     REs7            0.00041067761807     // 2435 Hz
#define     MI7             0.00038759689922     // 2580 Hz
#define     FA7             0.0003657644477      // 2734 Hz
#define     FAs7            0.0003453038674      // 2896 Hz
#define     SOL7            0.00032583903552     // 3069 Hz
#define     SOLs7           0.00030759766226     // 3251 Hz
#define     LA7             0.00029036004646     // 3444 Hz
#define     LAs7            0.0002740476843      // 3649 Hz
#define     SI7             0.00025866528712     // 3866 Hz
#define     DO8             0.000244140625       // 4096 Hz
#define     SILENCIO        0.0                  //    0 Hz
// Nota: Separación = (2/1.618033988749)^-4 = 1.5441260448799
// https://riunet.upv.es/bitstream/handle/10251/18491/Memoria.pdf?sequence=1
#endif


#if ESCALA_MUSICAL == 2
//         Nota             Periodo (Seg)       Frecuencia (Hz)
#define     DO2             0.0152890257319      // 65.406 Hz   (Escala Temperada)  
#define     DOs2            0.01443091865427     // 69.296 Hz   (Afinación 440)
#define     RE2             0.01362097342616     // 73.416 Hz
#define     REs2            0.01285648693068     // 77.782 Hz
#define     MI2             0.01213490776519     // 82.407 Hz
#define     FA2             0.01145382772633     // 87.307 Hz
#define     FAs2            0.01081097377276     // 92.499 Hz
#define     SOL2            0.01020420043918     // 97.999 Hz
#define     SOLs2           0.009631482676       // 103.83 Hz
#define     LA2             0.009                // 110.00 Hz
#define     LAs2            0.00858067556984     // 116.54 Hz
#define     SI2             0.00809907925583     // 123.47 Hz
#define     DO3             0.00764451286595     // 130.81 Hz
#define     DOs3            0.00721545932713     // 138.59 Hz
#define     RE3             0.00681048671308     // 146.83 Hz
#define     REs3            0.00642824346534     // 155.56 Hz
#define     MI3             0.0060674538826      // 164.81 Hz
#define     FA3             0.00572691386316     // 174.61 Hz
#define     FAs3            0.00540548688638     // 184.99 Hz
#define     SOL3            0.00510210021959     // 195.99 Hz
#define     SOLs3           0.004815741388       // 207.65 Hz
#define     LA3             0.0045               // 220.00 Hz
#define     LAs3            0.00429033778492     // 233.08 Hz
#define     SI3             0.00404953962791     // 246.94 Hz
#define     DO4             0.00382225643297     // 261.63 Hz       (DO Central)
#define     DOs4            0.00360772966356     // 277.18 Hz
#define     RE4             0.00340529864469     // 293.66 Hz
#define     REs4            0.00321412173267     // 311.13 Hz
#define     MI4             0.0030337269413      // 329.63 Hz
#define     FA4             0.00286345693158     // 349.23 Hz
#define     FAs4            0.0027027757507      // 369.99 Hz
#define     SOL4            0.00255105010979     // 391.99 Hz
#define     SOLs4           0.002407870669       // 415.30 Hz
#define     LA4             0.00227              // 440.00 Hz          (LA 440)
#define     LAs4            0.00214516889246     // 466.16 Hz
#define     SI4             0.00202476981396     // 493.88 Hz
#define     DO5             0.00191112821649     // 523.25 Hz
#define     DOs5            0.00180386483178     // 554.37 Hz
#define     RE5             0.00170262167827     // 587.33 Hz
#define     REs5            0.00160706086633     // 622.25 Hz
#define     MI5             0.00151686347065     // 659.26 Hz
#define     FA5             0.00143172846579     // 698.46 Hz
#define     FAs5            0.00135137172159     // 739.99 Hz
#define     SOL5            0.0012755250549      // 783.99 Hz
#define     SOLs5           0.0012039353345      // 830.61 Hz
#define     LA5             0.001136             // 880.00 Hz
#define     LAs5            0.00107258444623     // 932.33 Hz
#define     SI5             0.00101238490698     // 987.77 Hz
#define     DO6             0.00095556410824     // 1046.5 Hz
#define     DOs6            0.00090193241589     // 1108.7 Hz
#define     RE6             0.00085131083913     // 1174.7 Hz
#define     REs6            0.00080353043317     // 1244.5 Hz
#define     MI6             0.00075843173532     // 1318.5 Hz
#define     FA6             0.00071586423289     // 1396.9 Hz
#define     FAs6            0.0006756858608      // 1479.9 Hz
#define     SOL6            0.00063776252745     // 1567.9 Hz
#define     SOLs6           0.00060196766725     // 1661.2 Hz
#define     LA6             0.0005681            // 1760.0 Hz
#define     LAs6            0.00053629222311     // 1864.7 Hz
#define     SI6             0.00050619245349     // 1975.5 Hz
#define     DO7             0.00047778205412     // 2093.0 Hz
#define     DOs7            0.00045096620795     // 2217.5 Hz
#define     RE7             0.00042565541957     // 2349.3 Hz
#define     REs7            0.00040176521658     // 2489.0 Hz
#define     MI7             0.00037921586766     // 2637.0 Hz
#define     FA7             0.00035793211645     // 2793.8 Hz
#define     FAs7            0.0003378            // 2960.0 Hz
#define     SOL7            0.00031888126372     // 3136.0 Hz
#define     SOLs7           0.00030098383362     // 3322.4 Hz
#define     LA7             0.00028409           // 3520.0 Hz
#define     LAs7            0.00026814611155     // 3729.3 Hz
#define     SI7             0.00025309622674     // 3951.1 Hz
#define     DO8             0.00023889102706     // 4186.0 Hz
#define     SILENCIO        0.0                  //      0 Hz
// Nota: Separación = (2)^-12 = 1.0594630943593 
// https://riunet.upv.es/bitstream/handle/10251/18491/Memoria.pdf?sequence=1
#endif

#if ESCALA_MUSICAL == 3
//         Nota             Periodo (Seg)       Frecuencia (Hz)
#define     DO2             0.01543209876        // 64.800 Hz   (Escala Aurea)
#define     DOs2            0.0148               // 67.500 Hz   (Afinación 432)
#define     RE2             0.0138               // 72.000 Hz
#define     REs2            0.01285644493585     // 77.782 Hz
#define     MI2             0.0123456789         // 81.000 Hz
#define     FA2             0.0115740            // 86.400 Hz
#define     FAs2            0.0108109276857      // 92.499 Hz
#define     SOL2            0.010204185757       // 97.999 Hz
#define     SOLs2           0.00963112780507     // 103.83 Hz
#define     LA2             0.00925              // 108.00 Hz
#define     LAs2            0.00858074480865     // 116.54 Hz
#define     SI2             0.00809913339273     // 123.47 Hz
#define     DO3             0.0078125            // 129.60 Hz
#define     DOs3            0.00721552781586     // 135.00 Hz
#define     RE3             0.00680920604657     // 144.00 Hz
#define     REs3            0.00642838776035     // 155.56 Hz
#define     MI3             0.00606759298586     // 162.00 Hz       (PHI)
#define     FA3             0.00572704885173     // 172.80 Hz
#define     FAs3            0.0054               // 185.00 Hz
#define     SOL3            0.00510204081633     // 196.00 Hz
#define     SOLs3           0.00481579581026     // 207.65 Hz
#define     LA3             0.004629             // 216.00 Hz
#define     LAs3            0.00429037240432     // 233.08 Hz
#define     SI3             0.00404956669636     // 246.94 Hz
#define     DO4             0.0038580246913      // 259.20 Hz       (DO Central)
#define     DOs4            0.0037               // 270.00 Hz
#define     RE4             0.003472             // 288.00 Hz
#define     REs4            0.00321409057307     // 311.13 Hz
#define     MI4             0.00308641975        // 324.00 Hz
#define     FA4             0.002893518          // 345.60 Hz
#define     FAs4            0.0027027757507      // 369.99 Hz
#define     SOL4            0.00255102040816     // 392.00 Hz
#define     SOLs4           0.00240789790513     // 415.30 Hz
#define     LA4             0.00227              // 432.00 Hz       (LA 432)
#define     LAs4            0.00374544904803     // 466.99 Hz
#define     SI4             0.00202478334818     // 493.88 Hz
#define     DO5             0.00191113234591     // 518.40 Hz
#define     DOs5            0.00180384941465     // 540.00 Hz
#define     RE5             0.00170262033269     // 576.00 Hz
#define     REs5            0.0016070711129      // 622.25 Hz
#define     MI5             0.00151685222826     // 648.00 Hz
#define     FA5             0.00143172121524     // 698.46 Hz
#define     FAs5            0.0013513696131      // 739.99 Hz
#define     SOL5            0.00127552647355     // 783.99 Hz
#define     SOLs5           0.00120393445781     // 830.61 Hz
#define     LA5             0.001135             // 864.00 Hz
#define     LAs5            0.00107258159664     // 932.33 Hz
#define     SI5             0.00101238142483     // 987.77 Hz
#define     DO6             0.00095556617296     // 1046.5 Hz
#define     DOs6            0.00090195724723     // 1080.0 Hz
#define     RE6             0.00085128117817     // 1174.7 Hz
#define     REs6            0.00080353555645     // 1244.5 Hz
#define     MI6             0.00075843761851     // 1296.0 Hz
#define     FA6             0.0007158708569      // 1396.9 Hz
#define     FAs6            0.000675             // 1480.0 Hz
#define     SOL6            0.00063775510204     // 1568.0 Hz
#define     SOLs6           0.00060197447628     // 1661.2 Hz
#define     LA6             0.0005681            // 1728.0 Hz
#define     LAs6            0.00053627929426     // 1864.7 Hz
#define     SI6             0.00050620096178     // 1975.5 Hz
#define     DO7             0.00047778308648     // 2093.0 Hz
#define     DOs7            0.00045095828636     // 2160.0 Hz
#define     RE7             0.00042565870685     // 2349.3 Hz
#define     REs7            0.00040176777822     // 2489.0 Hz
#define     MI7             0.00037921880925     // 2637.0 Hz
#define     FA7             0.00035793542845     // 2793.8 Hz
#define     FAs7            0.0003378            // 2960.0 Hz
#define     SOL7            0.00031887755102     // 3136.0 Hz
#define     SOLs7           0.00030098723814     // 3322.4 Hz
#define     LA7             0.00028409           // 3520.0 Hz
#define     LAs7            0.00026814683721     // 3729.3 Hz
#define     SI7             0.00025309407507     // 3951.1 Hz
#define     DO8             0.00023889154324     // 4186.0 Hz
#define     SILENCIO        0.0                  //      0 Hz
// Nota: PHI = (1+sqr(5))/2 = 1.618033988749
// https://riunet.upv.es/bitstream/handle/10251/18491/Memoria.pdf?sequence=1
#endif

#if ESCALA_MUSICAL == 4
//         Nota             Periodo (Seg)       Frecuencia (Hz)
#define     DO2             0.01606425702811     // 65.250 Hz   (Escala Pitagórica)
#define     REb2            0.01457844496587     // 68.594 Hz   (Afinación 438.9)
#define     DOs2            0.0145474137931      // 68.740 Hz
#define     RE2             0.01365187713311     // 73.250 Hz
#define     MIb2            0.01299113252737     // 76.975 Hz
#define     REs2            0.01295861774744     // 77.169 Hz
#define     MI2             0.0123456789         // 82.200 Hz
#define     FA2             0.01148435256962     // 87.075 Hz
#define     SOLb2           0.01092171918947     // 91.560 Hz
#define     FAs2            0.0109011627907      // 91.733 Hz
#define     SOL2            0.010204185757       // 97.775 Hz
#define     LAb2            0.00973224965824     // 102.75 Hz
#define     SOLs2           0.00963112780507     // 103.01 Hz
#define     LA2             0.00911369332422     // 109.725 Hz
#define     SIb2            0.00866954409377     // 115.34 Hz
#define     LAs2            0.0086508885851      // 115.60 Hz
#define     SI2             0.00809913339273     // 123.175 Hz
#define     DO3             0.00766283524904     // 130.50 Hz
#define     REb3            0.00728922248294     // 137.18 Hz
#define     DOs3            0.00727370689655     // 137.48 Hz
#define     RE3             0.00682593856655     // 146.50 Hz
#define     MIb3            0.00649556626369     // 153.95 Hz
#define     REs3            0.00647930887372     // 154.34 Hz
#define     MI3             0.00606759298586     // 164.40 Hz       
#define     FA3             0.00574217628481     // 174.15 Hz
#define     SOLb3           0.00546085959473     // 183.12 Hz
#define     FAs3            0.00545058139535     // 183.47 Hz
#define     SOL3            0.00511378164152     // 195.55 Hz
#define     LAb3            0.00486612482912     // 205.50 Hz
#define     SOLs3           0.00485409741754     // 206.01 Hz
#define     LA3             0.00455684666211     // 219.45 Hz
#define     SIb3            0.00433477204688     // 230.69 Hz
#define     LAs3            0.00432544429255     // 231.19 Hz
#define     SI3             0.00404956669636     // 246.35 Hz
#define     DO4             0.00383141762452     // 261.00 Hz       (DO Central)
#define     REb4            0.00364461124147     // 274.37 Hz
#define     DOs4            0.00363685344828     // 274.96 Hz
#define     RE4             0.00341296928328     // 293.00 Hz
#define     MIb4            0.00324778313184     // 307.90 Hz
#define     REs4            0.00323965443686     // 308.67 Hz
#define     MI4             0.00308641975        // 328.80 Hz
#define     FA4             0.00287108814241     // 348.30 Hz
#define     SOLb4           0.00273042979737     // 366.24 Hz
#define     FAs4            0.00272529069767     // 366.93 Hz
#define     SOL4            0.00255689082076     // 391.10 Hz
#define     LAb4            0.00243306241456     // 411.00 Hz
#define     SOLs4           0.00242704870877     // 412.02 Hz
#define     LA4             0.00227842333105     // 438.90 Hz       (LA 438.9)
#define     SIb4            0.00216738602344     // 461.39 Hz
#define     LAs4            0.00216272214627     // 462.38 Hz
#define     SI4             0.00202478334818     // 492.70 Hz
#define     DO5             0.00191570881226     // 522.00 Hz
#define     REb5            0.00182230562073     // 548.75 Hz
#define     DOs5            0.00181842672414     // 549.925 Hz
#define     RE5             0.00170648464164     // 586.00 Hz
#define     MIb5            0.00162389156592     // 615.80 Hz
#define     REs5            0.00161982721843     // 617.35 Hz
#define     MI5             0.00151685222826     // 657.60 Hz
#define     FA5             0.0014355440712      // 696.60 Hz
#define     SOLb5           0.00136521489868     // 732.49 Hz
#define     FAs5            0.00136264534884     // 733.86 Hz
#define     SOL5            0.00127844541038     // 782.20 Hz
#define     LAb5            0.00121653120728     // 822.01 Hz
#define     SOLs5           0.00121352435439     // 824.05 Hz
#define     LA5             0.00113921166553     // 877.80 Hz
#define     SIb5            0.00108369301172     // 922.77 Hz
#define     LAs5            0.00108136107314     // 924.76 Hz
#define     SI5             0.00101238142483     // 985.40 Hz
#define     DO6             0.00095785440613     // 1044.0 Hz
#define     REb6            0.00091115281037     // 1097.5 Hz
#define     DOs6            0.00090921336207     // 1099.9 Hz
#define     RE6             0.00085324232082     // 1172.0 Hz
#define     MIb6            0.00081194578296     // 1231.6 Hz
#define     REs6            0.00080991360922     // 1234.7 Hz
#define     MI6             0.00075843761851     // 1315.2 Hz
#define     FA6             0.0007177720356      // 1393.2 Hz
#define     SOLb6           0.00068260744934     // 1464.9 Hz
#define     FAs6            0.00068132267442     // 1467.7 Hz
#define     SOL6            0.00063922270519     // 1564.4 Hz
#define     LAb6            0.00060826560364     // 1644.0 Hz
#define     SOLs6           0.00060676217719     // 1648.09 Hz
#define     LA6             0.00056960583276     // 1755.6 Hz
#define     SIb6            0.00054184650586     // 1845.5 Hz
#define     LAs6            0.00054068053657     // 1849.5 Hz
#define     SI6             0.00050620096178     // 1970.8 Hz
#define     DO7             0.00047892720307     // 2088.0 Hz
#define     REb7            0.00045557640518     // 2195.0 Hz
#define     DOs7            0.00045460668103     // 2199.7 Hz
#define     RE7             0.00042662116041     // 2344.0 Hz
#define     MIb7            0.00040597289148     // 2463.2 Hz
#define     REs7            0.00040495680461     // 2469.4 Hz
#define     MI7             0.00037921880925     // 2630.4 Hz
#define     FA7             0.0003588860178      // 2786.4 Hz
#define     SOLb7           0.00034130372467     // 2929.9 Hz
#define     FAs7            0.00034066133721     // 2935.5 Hz
#define     SOL7            0.0003196113526      // 3128.8 Hz
#define     LAb7            0.00030413280182     // 3388.0 Hz
#define     SOLs7           0.0003033810886      // 3296.2 Hz
#define     LA7             0.00028480291638     // 3511.2 Hz
#define     SIb7            0.00027092325293     // 3691.0 Hz
#define     LAs7            0.00027034026828     // 3699.0 Hz
#define     SI7             0.00025309407507     // 3941.6 Hz
#define     DO8             0.00023889154324     // 4176.0 Hz
#define     SILENCIO        0.0                  //    0.0 Hz
// Nota: Tono=(9/8) Semitono Diatónico=(256/243) Semitono Cromático=(2187/2048)
// Nota: Cuarta Justa 2:3/2         = 4/3   
// Nota: Quinta Justa               = 3/2  
// Nota: Sexta Mayor (3/2)^3:2^1    = 27/16
// Nota: Tercera Menor 2:27/16      = 32/27
// Nota: Septima Mayor (3/2)^5:2^2  = 243/128
// Nota: Segunda Menor 2:243/128    = 256/243
// https://riunet.upv.es/bitstream/handle/10251/18491/Memoria.pdf?sequence=1
#endif

#if ESCALA_MUSICAL == 5
//         Nota             Periodo (Seg)       Frecuencia (Hz)
#define     DO2             0.01543209876        // 64.800 Hz   (Escala Zarlino)
#define     DOs2            0.0148               // 67.500 Hz   (Afinación 432)
#define     REb2            0.0148               // 67.500 Hz
#define     RE2             0.0138               // 72.000 Hz
#define     REs2            0.01285644493585     // 77.782 Hz
#define     MIb2            0.01285644493585     // 77.782 Hz
#define     MI2             0.0123456789         // 81.000 Hz
#define     FA2             0.0115740            // 86.400 Hz
#define     FAs2            0.0108109276857      // 92.499 Hz
#define     SOLb2           0.0108109276857      // 92.499 Hz
#define     SOL2            0.010204185757       // 97.999 Hz
#define     SOLs2           0.00963112780507     // 103.83 Hz
#define     LAb2            0.00963112780507     // 103.83 Hz
#define     LA2             0.00925              // 108.00 Hz
#define     LAs2            0.00858074480865     // 116.54 Hz
#define     LAb2            0.00963112780507     // 103.83 Hz
#define     SI2             0.00809913339273     // 123.47 Hz
#define     DO3             0.0078125            // 129.60 Hz
#define     DOs3            0.00721552781586     // 135.00 Hz
#define     REb3            0.00721552781586     // 135.00 Hz
#define     RE3             0.00680920604657     // 144.00 Hz
#define     REs3            0.00642838776035     // 155.56 Hz
#define     MIb3            0.00642838776035     // 155.56 Hz
#define     MI3             0.00606759298586     // 162.00 Hz       
#define     FA3             0.00572704885173     // 172.80 Hz
#define     FAs3            0.0054               // 185.00 Hz
#define     SOLb3           0.0054               // 185.00 Hz
#define     SOL3            0.00510204081633     // 196.00 Hz
#define     SOLs3           0.00481579581026     // 207.65 Hz
#define     LAb3            0.00481579581026     // 207.65 Hz
#define     LA3             0.004629             // 216.00 Hz
#define     LAs3            0.00429037240432     // 233.08 Hz
#define     SIb3            0.00429037240432     // 233.08 Hz
#define     SI3             0.00404956669636     // 246.94 Hz
#define     DO4             0.0038580246913      // 259.20 Hz       (DO Central)
#define     DOs4            0.0037               // 270.00 Hz
#define     REb4            0.0037               // 270.00 Hz
#define     RE4             0.003472             // 288.00 Hz
#define     REs4            0.00321409057307     // 311.13 Hz
#define     MIb4            0.00321409057307     // 311.13 Hz
#define     MI4             0.00308641975        // 324.00 Hz
#define     FA4             0.002893518          // 345.60 Hz
#define     FAs4            0.0027027757507      // 369.99 Hz
#define     SOLb4           0.0027027757507      // 369.99 Hz
#define     SOL4            0.00255102040816     // 392.00 Hz
#define     SOLs4           0.00240789790513     // 415.30 Hz
#define     LAb4            0.00240789790513     // 415.30 Hz
#define     LA4             0.00227              // 432.00 Hz       (LA 432)
#define     LAs4            0.00214518620216     // 466.16 Hz
#define     SIb4            0.00214518620216     // 466.16 Hz
#define     SI4             0.00202478334818     // 493.88 Hz
#define     DO5             0.00191113234591     // 518.40 Hz
#define     DOs5            0.00180384941465     // 540.00 Hz
#define     REb5            0.00180384941465     // 540.00 Hz
#define     RE5             0.00170262033269     // 576.00 Hz
#define     REs5            0.0016070711129      // 622.25 Hz
#define     MIb5            0.0016070711129      // 622.25 Hz
#define     MI5             0.00151685222826     // 648.00 Hz
#define     FA5             0.00143172121524     // 698.46 Hz
#define     FAs5            0.0013513696131      // 739.99 Hz
#define     SOLb5           0.0013513696131      // 739.99 Hz
#define     SOL5            0.00127552647355     // 783.99 Hz
#define     SOLs5           0.00120393445781     // 830.61 Hz
#define     LAb5            0.00120393445781     // 830.61 Hz
#define     LA5             0.001135             // 864.00 Hz
#define     LAs5            0.00107258159664     // 932.33 Hz
#define     SIb5            0.00107258159664     // 932.33 Hz
#define     SI5             0.00101238142483     // 987.77 Hz
#define     DO6             0.00095556617296     // 1046.5 Hz
#define     DOs6            0.00090195724723     // 1080.0 Hz
#define     REb6            0.00090195724723     // 1080.0 Hz
#define     RE6             0.00085128117817     // 1174.7 Hz
#define     REs6            0.00080353555645     // 1244.5 Hz
#define     MIb6            0.00080353555645     // 1244.5 Hz
#define     MI6             0.00075843761851     // 1296.0 Hz
#define     FA6             0.0007158708569      // 1396.9 Hz
#define     FAs6            0.000675             // 1480.0 Hz
#define     SOLb6           0.000675             // 1480.0 Hz
#define     SOL6            0.00063775510204     // 1568.0 Hz
#define     SOLs6           0.00060197447628     // 1661.2 Hz
#define     LAb6            0.00060197447628     // 1661.2 Hz
#define     LA6             0.0005681            // 1728.0 Hz
#define     LAs6            0.00053627929426     // 1864.7 Hz
#define     SIb6            0.00053627929426     // 1864.7 Hz
#define     SI6             0.00050620096178     // 1975.5 Hz
#define     DO7             0.00047778308648     // 2093.0 Hz
#define     DOs7            0.00045095828636     // 2160.0 Hz
#define     REb7            0.00045095828636     // 2160.0 Hz
#define     RE7             0.00042565870685     // 2349.3 Hz
#define     REs7            0.00040176777822     // 2489.0 Hz
#define     MIb7            0.00040176777822     // 2489.0 Hz
#define     MI7             0.00037921880925     // 2637.0 Hz
#define     FA7             0.00035793542845     // 2793.8 Hz
#define     FAs7            0.0003378            // 2960.0 Hz
#define     SOLb7           0.0003378            // 2960.0 Hz
#define     SOL7            0.00031887755102     // 3136.0 Hz
#define     SOLs7           0.00030098723814     // 3322.4 Hz
#define     LAb7            0.00030098723814     // 3322.4 Hz
#define     LA7             0.00028409           // 3520.0 Hz
#define     LAs7            0.00026814683721     // 3729.3 Hz
#define     SIb7            0.00026814683721     // 3729.3 Hz
#define     SI7             0.00025309407507     // 3951.1 Hz
#define     DO8             0.00023889154324     // 4186.0 Hz
#define     SILENCIO        0.0                  //    0.0 Hz
// Nota: Tono=(9/8) Semitono Diatónico=(256/243) Semitono Cromático=(2187/2048)
// Nota: Ditono=(81/64) Semitono Limma=(90.2 cens) Semitono Apotomé=(113.7 cens)
// https://riunet.upv.es/bitstream/handle/10251/18491/Memoria.pdf?sequence=1
#endif
/*
Con la nota más baja (DO2) se programó el timer, como comparador(F=130.813hZ,T=7.6445ms)
cuando la cuenta se desborda se pone en cero la salida, cuando el comparador iguala
la cuenta del contador del timer, se pone en uno la salida del pin PTA12
Nota: Para que sea una señal cuadrada el comparador tiene que tener la mitad de
la cuenta máxima del contador (T).
Las demás cuentas se generan como fracciones Q15 del periodo, arreglo factores[]
y se calcularon en Excell con la siguiente fórmula factores[i]= 2^15/ 1.059465^RANGO-i
Siendo en este caso RANGO=60;

Existen varias afinaciones para esclas cromáticas: 
afinación Beethoven     455.4 Hz    para LA
afinación Sinfónica     452 Hz      para LA
afinación Brillante     445 Hz      para LA
afinación Camara        444 Hz      para LA
afinación Cuerdas       442 Hz      para LA 
afinación JC Deagan     440 Hz      para LA @ 20 °C (Organización Internacional de Estandarización ISO 16 (1975))
afinación Internacional 435 Hz      para LA
afinación Francesa      435 Hz      para LA
afinación Verdi         432 Hz      para LA
afinación Aurea         430.54 Hz   para LA
afinación Mozart        256 Hz      para DO o 430 Hz para LA

Las Escalas más comunes son:
- Diatóniaca
- Cromática
- Pentatónica
- Mayor
- Menor
- Tonos Enteros
- Modal            (Diatonica en)
    * Dórico            RE
    * Hipodórico        LA
    * Frigio            MI
    * Hipofrigio        SI
    * Lidio             FA
    * Hipolidio         DO
    * Mixiolidio        SOL
    * Hipomixolidio     RE

Las escalas menores:
Menor Natural  Relativa de su Tercera Menor  
    Ascendente:   1 Tono, 1 Semitono, 2 Tonos, 1 semitono 2 tonos.
    Descendente:  2 Tonos, 1 semitono, 2 Tonos 1 semitono 1 tono
Menor Armónica  Relativa de su Tercera Menor 
    Ascendente:   1 Tono, 1 Semitono, 2 Tonos, 1 1/2 Tonos, 1 semitono.
    Descendente:  1 Tono, 1 1/2 Tono, 2 Tonos, 1 semitono, 1 Tono.
Menor Melódica  Relativa de su Tercera Menor   
    Ascendente:   1 Tono, 1 Semitono, 4 Tonos, 1 semitono.
    Descendente:  2 Tonos, 1 1/2 Tono, 2 Tonos, 1 semitono, 1 Tono
*/

/*
:...............................................................................
:  Definiciones de los Enarmónicos
:...............................................................................
*/
#if Enarminicos == 1
#define     REb2            DOs2            
#define     MIb2            REs2
#define     SOLb2           FAs2
#define     LAb2            SOLs2
#define     SIb2            LAs2 
#define     REb3            DOs3            
#define     MIb3            REs3
#define     SOLb3           FAs3
#define     LAb3            SOLs3
#define     SIb3            LAs3 
#define     REb4            DOs4            
#define     MIb4            REs4
#define     SOLb4           FAs4
#define     LAb4            SOLs4
#define     SIb4            LAs4 
#define     REb5            DOs5            
#define     MIb5            REs5
#define     SOLb5           FAs5
#define     LAb5            SOLs5
#define     SIb5            LAs5 
#define     REb6            DOs6            
#define     MIb6            REs6
#define     SOLb6           FAs6
#define     LAb6            SOLs6
#define     SIb6            LAs6 
#define     REb7            DOs7            
#define     MIb7            REs7
#define     SOLb7           FAs7
#define     LAb7            SOLs7
#define     SIb7            LAs7 
#endif

void Buzzer_SetPeriodMode(float Periodo,bool Estado);

#endif /* ESCALAS_H_ */

