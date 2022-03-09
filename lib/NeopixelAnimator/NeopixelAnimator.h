//
// Created by Tobias W. on 07.03.22.
//

#ifndef FURSUITAUGEN_NEOPIXEL_BOOPABLE_NOSE_NEOPIXELANIMATOR_H
#define FURSUITAUGEN_NEOPIXEL_BOOPABLE_NOSE_NEOPIXELANIMATOR_H

#include "../helperStructures.h"
#include "../NeoPixelManager/NeoPixelManager.h"

class NeopixelAnimator {
public:
    NeopixelAnimator(NeoPixelManager *ledmanager, Persistence *persistentState);

    void init();
    void loopHandler();
    Color getCurrentTargetColor();
    void setBoopColor(Color boopcolor);
    void setIdleColor(Color idlecolor);
private:
    NeoPixelManager* ledmanager;
    Persistence* persistentState;
    Color currentTargetColor;
    Color boopColor;
    Color idleColor;
    void updatePersistence();
};


#endif //FURSUITAUGEN_NEOPIXEL_BOOPABLE_NOSE_NEOPIXELANIMATOR_H
