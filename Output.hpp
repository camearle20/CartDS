//
// Created by cameronearle on 4/17/17.
//

#ifndef CARTDS_OUTPUT_HPP
#define CARTDS_OUTPUT_HPP

#include <mutex>

class Output {
public:
    static void init();
    static void setVoltage(float volgate);
    static void setPower(int power);
    static void setMode(int mode);
private:
    static std::mutex lock;

    static int lcd;

    const static int LCD_RS;
    const static int LCD_E;
    const static int LCD_D4;
    const static int LCD_D5;
    const static int LCD_D6;
    const static int LCD_D7;

    static void lcd_setup();
    static void lcd_setVoltage(float v);
    static void lcd_setPower(int p);
    static void lcd_setMode(int m);
};


#endif //CARTDS_OUTPUT_HPP
