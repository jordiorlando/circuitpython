#include "shared-bindings/board/__init__.h"

STATIC const mp_rom_map_elem_t board_global_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_D0), MP_ROM_PTR(&pin_PA02) }, // Pin 0
    { MP_ROM_QSTR(MP_QSTR_A0), MP_ROM_PTR(&pin_PA02) },

    { MP_ROM_QSTR(MP_QSTR_D1), MP_ROM_PTR(&pin_PA03) }, // Pin 1
    { MP_ROM_QSTR(MP_QSTR_A1), MP_ROM_PTR(&pin_PA03) },
    { MP_ROM_QSTR(MP_QSTR_VOLTAGE_MONITOR), MP_ROM_PTR(&pin_PA03) }, // Battery voltage sense
    { MP_ROM_QSTR(MP_QSTR_BATTERY), MP_ROM_PTR(&pin_PA03) },

    { MP_ROM_QSTR(MP_QSTR_D2), MP_ROM_PTR(&pin_PA04) }, // Pin 2
    { MP_ROM_QSTR(MP_QSTR_A2), MP_ROM_PTR(&pin_PA04) },

    { MP_ROM_QSTR(MP_QSTR_D3), MP_ROM_PTR(&pin_PA05) }, // Pin 3
    { MP_ROM_QSTR(MP_QSTR_A3), MP_ROM_PTR(&pin_PA05) },
    
    { MP_ROM_QSTR(MP_QSTR_D4), MP_ROM_PTR(&pin_PA06) }, // Pin 4
    { MP_ROM_QSTR(MP_QSTR_A4), MP_ROM_PTR(&pin_PA06) },
    
    { MP_ROM_QSTR(MP_QSTR_D5), MP_ROM_PTR(&pin_PA07) }, // Pin 5
    { MP_ROM_QSTR(MP_QSTR_A5), MP_ROM_PTR(&pin_PA07) },
    
    { MP_ROM_QSTR(MP_QSTR_SCL), MP_ROM_PTR(&pin_PA23) }, // Qwiic/STEMMA-QT connector
    { MP_ROM_QSTR(MP_QSTR_RX), MP_ROM_PTR(&pin_PA23) },

    { MP_ROM_QSTR(MP_QSTR_SDA), MP_ROM_PTR(&pin_PA22) }, // Qwiic/STEMMA-QT connector
    { MP_ROM_QSTR(MP_QSTR_TX), MP_ROM_PTR(&pin_PA22) },

    { MP_ROM_QSTR(MP_QSTR_LED), MP_ROM_PTR(&pin_PA00) }, // Red LED
    { MP_ROM_QSTR(MP_QSTR_L), MP_ROM_PTR(&pin_PA00) },

    { MP_ROM_QSTR(MP_QSTR_RFM69_D0), MP_ROM_PTR(&pin_PA27) }, // RFM69 DIO0
    { MP_ROM_QSTR(MP_QSTR_RFM69_D5), MP_ROM_PTR(&pin_PA01) }, // RFM69 DIO5
    { MP_ROM_QSTR(MP_QSTR_RFM69_EN), MP_ROM_PTR(&pin_PA28) }, // RFM69 power enable
    { MP_ROM_QSTR(MP_QSTR_RFM69_RST), MP_ROM_PTR(&pin_PA14) }, // RFM69 reset
    { MP_ROM_QSTR(MP_QSTR_RFM69_SCK), MP_ROM_PTR(&pin_PA11) }, // RFM69 SPI SCK
    { MP_ROM_QSTR(MP_QSTR_RFM69_MOSI), MP_ROM_PTR(&pin_PA10) }, // RFM69 SPI MOSI
    { MP_ROM_QSTR(MP_QSTR_RFM69_MISO), MP_ROM_PTR(&pin_PA09) }, // RFM69 SPI MISO
    { MP_ROM_QSTR(MP_QSTR_RFM69_CS), MP_ROM_PTR(&pin_PA08) }, // RFM69 SPI CS

    { MP_ROM_QSTR(MP_QSTR_I2C), MP_ROM_PTR(&board_i2c_obj) },
};
MP_DEFINE_CONST_DICT(board_module_globals, board_global_dict_table);
