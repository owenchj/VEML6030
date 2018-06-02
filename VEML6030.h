#ifndef _VEML6030_H_
#define _VEML6030_H_
/**
 * Vishay VEML6030
 * High Accuracy Ambient Light Sensor with I2C Interface
 */
 /*
 * @code
* @endcode
*/
class VEML6030
{
public:
  /**
  * VEML6030 constructor
  *
  * @param sda SDA pin
  * @param sdl SCL pin
  * @param addr addr of the I2C peripheral
  */
  VEML6030(PinName sda, PinName scl, int addr);

  /**
  * VEML6030 destructor
  */
  ~VEML6030();

void setALSConf(uint16_t conf) ;
void setALS_WH(uint16_t wh) ;
void setALS_WL(uint16_t wl) ;
void setPowerSaving(uint16_t ps) ;
uint16_t getALS(void) ;
uint16_t getWHITE(void) ;
uint16_t getALS_INT(void) ;

private:
  I2C m_i2c;
  int m_addr;
  void readRegs(int addr, uint8_t * data, int len);
  void writeRegs(uint8_t * data, int len);
  uint8_t data[3];
  char read_addr;
};
#endif /* _VEML6030_H_ */
