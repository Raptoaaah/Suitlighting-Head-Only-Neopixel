using namespace std;

#include <Arduino.h>
#include "../lib/AZDeliveryESP32_pinMapping.h"

#include "../lib/NeoPixelManager/NeoPixelManager.h"
#include "../lib/TouchHandler/TouchHandler.h"
#include "../lib/helperStructures.h"


#define NOSE_BOOP_PIN G25
#define STRIPDATAPIN G14
#define PIXELCOUNT 300

NeoPixelManager ledManager(STRIPDATAPIN);
TouchHandler touchHandler(NOSE_BOOP_PIN);

persistence persistenceData;

void setup() {
    ledManager.init();
    touchHandler.init(&persistenceData);
}

void loop() {
    while(true){
        ledManager.loopHandler();
        touchHandler.loopHandler();
    }
}