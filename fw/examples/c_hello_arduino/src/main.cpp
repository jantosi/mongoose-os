/*
 * Copyright (c) 2014-2017 Cesanta Software Limited
 * All rights reserved
 */

#include <Arduino.h>

void setup(void) {
  printf("Hello, Arduino world!\r\n");
  pinMode(2, OUTPUT);
}

void loop() {
  static boolean value = 0;
  digitalWrite(2, value);
  printf("%s\r\n", (value == 0 ? "Tick" : "Tock"));
  delay(500);
  value = (value ? 0 : 1);
}
