#define PI 3.1415926535897932384626433832795

#define BLUEPILL_CLOCK_SPEED_MHZ 72
#define ADC_CLOCK_SPEED_HZ 12000000 // 

#define SERIAL_BAUD_RATE 115200
#define ADC_FAST_SAMPLETIME ADC_SAMPLETIME_71CYCLES_5 // 0.0001/(1/12e6×(71.5+12.5))/2 ~= 7 samples per 10 khz square wave
#define IR_SENS_NUM_READINGS 2048