/*
  -=-=-=- Sound -=-=-=-

*/

#include "sound.h"
#include <wavTrigger.h>

wavTrigger wTrig; // Our WAV Trigger object

int gSeqState = 0;   // Main program sequencer state
int gRateOffset = 0; // WAV Trigger sample-rate offset

void managesound()
{
}

void configwavtrigger()
{
    // Wait for the WAV Trigger and start
    delay(1000);
    wTrig.start();
    delay(10);

    //  reset the WAV Trigger
    wTrig.stopAllTracks();
    wTrig.samplerateOffset(0);
}

/*
case 0:
            wTrig.samplerateOffset(0); // Reset our sample rate offset
            wTrig.masterGain(0);       // Reset the master gain to 0dB

            wTrig.trackGain(2, -40);        // Preset Track 2 gain to -40dB
            wTrig.trackPlayPoly(2);         // Start Track 2
            wTrig.trackFade(2, 0, 2000, 0); // Fade Track 2 up to 0dB over 2 secs
            break;

        // State 1: Demonstrates how to cross-fade music tracks
        case 1:
            wTrig.trackGain(1, -40);            // Preset Track 1 gain to -40dB
            wTrig.trackPlayPoly(1);             // Start Track 1
            wTrig.trackFade(1, 0, 3000, false); // Fade Track 1 up to 0db over 3 secs
            wTrig.update();
            delay(2000);                         // Wait 2 secs
            wTrig.trackFade(2, -40, 3000, true); // Fade Track 2 down to -40dB over 3 secs and stop
            break;

        // State 2: Fade down music and start looping dialog
        case 2:
            wTrig.trackFade(1, -6, 500, 0);
            wTrig.trackPlayPoly(4); // Start Track 4 poly
            wTrig.trackLoop(4, 1);  // Enable Track 4 looping
            break;

        // State 3: Honk the horn 2 times
        case 3:
            wTrig.trackPlayPoly(5); // Start Track 5 poly
            delay(500);
            wTrig.trackStop(5); // Stop Track 5
            delay(250);
            wTrig.trackPlayPoly(5); // Start Track 5 poly
            delay(500);
            wTrig.trackStop(5); // Stop Track 5
            break;

        // State 4: Fade out and stop dialog
        case 4:
            wTrig.trackLoop(4, 0);            // Disable Track 4 looping
            wTrig.trackFade(4, -50, 5000, 1); // Fade Track 4 to -50dB and stop
            break;

        // State 5: This demonstrates playing musical instrument samples, with decay on
        //  release
        case 5:
            wTrig.masterGain(-8);   // Lower main volume
            wTrig.trackPlayPoly(6); // Play first note
            delay(1000);
            wTrig.trackPlayPoly(7); // Play second note
            delay(1000);
            wTrig.trackPlayPoly(8); // Play third note
            delay(1000);
            wTrig.trackFade(6, -50, 5000, 1); // Fade Track 6 to -50dB and stop
            wTrig.trackFade(7, -50, 5000, 1); // Fade Track 7 to -50dB and stop
            wTrig.trackFade(8, -50, 5000, 1); // Fade Track 8 to -50dB and stop
            break;

        // State 6: Demonstrates preloading tracks and starting them in sample-sync, and
        //  real-time samplerate control (pitch bending);
        case 6:
            wTrig.trackLoad(6);      // Load and pause Track 6
            wTrig.trackLoad(7);      // Load and pause Track 7
            wTrig.trackLoad(8);      // Load and pause Track 8
            wTrig.resumeAllInSync(); // Start all in sample sync
            for (i = 0; i < 100; i++)
            {
                gRateOffset -= 200;
                wTrig.samplerateOffset(gRateOffset);
                delay(10);
            }
            for (i = 0; i < 100; i++)
            {
                gRateOffset += 200;
                wTrig.samplerateOffset(gRateOffset);
                delay(10);
            }
            delay(500);
            wTrig.stopAllTracks(); // Stop all
            break;

        } // switch

        */