#include <VirtualWire.h> 
char*mesaj; 
void setup()
{
   vw_set_ptt_inverted(true);
   vw_set_tx_pin(12); 
   vw_setup(4000);
}
void loop()
{
for(byte r = 0; r < 255; r++){
    for(byte g = 255; g > -1; g--){
        for(byte b = 0; b < 255; b++){
            if (analogRead(0) > 250){ goto cik;}
        }
    }
}
cik:


}

