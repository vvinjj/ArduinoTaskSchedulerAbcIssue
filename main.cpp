#include <Arduino.h>
#include "header.hpp"

Scheduler runner; //Let the scheduler live here, in the main file

void setup() {
  Serial.begin(115200);
  Serial.setDebugOutput(true);
}

void loop() {
  runner.execute();
}
