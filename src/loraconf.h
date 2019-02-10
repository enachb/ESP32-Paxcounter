#ifdef HAS_LORA

/************************************************************
 * LMIC LoRaWAN configuration
 *
 * Read the values from TTN console (or whatever applies), insert them here,
 * and rename this file to src/loraconf.h
 *
 * Note that DEVEUI, APPEUI and APPKEY should all be specified in MSB format.
 * (This is different from standard LMIC-Arduino which expects DEVEUI and APPEUI
 * in LSB format.)

 * Set your DEVEUI here, if you have one. You can leave this untouched,
 * then the DEVEUI will be generated during runtime from device's MAC adress
 * and will be displayed on device's screen as well as on serial console.
 *
 * NOTE: Use MSB format (as displayed in TTN console, so you can cut & paste
 * from there)
 * For TTN, APPEUI in MSB format always starts with 0x70, 0xB3, 0xD5
 *
 * Note: If using a board with Microchip 24AA02E64 Uinique ID for deveui,
 * the DEVEUI will be overwriten by the one contained in the Microchip module
 *
 ************************************************************/

static const u1_t DEVEUI[8] = { 0x00, 0xD3, 0x35, 0xD0, 0x85, 0xE7, 0x8A, 0x37 };

static const u1_t APPEUI[8] = { 0x70, 0xB3, 0xD5, 0x7E, 0xD0, 0x01, 0x7A, 0xA6 };

static const u1_t APPKEY[16] = { 0xBF, 0x53, 0xDB, 0x75, 0x45, 0xF3, 0x8A, 0x27, 0xA2, 0x42, 0x16, 0xCF, 0xB3, 0x1A, 0x62, 0x27 };

#endif // HAS_LORA