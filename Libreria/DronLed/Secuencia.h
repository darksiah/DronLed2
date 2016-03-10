#define CANTLED 4
  
#include <Arduino.h>

  class Estado 
  {
  public:
    Estado(bool ledState[],int intencidad[],unsigned long intervaloCambio);
  private:
    bool ledState_[];
    int intencidad_[];
    unsigned long intervaloCambio_;
  };

class Secuencia 
  {
  public:

    // constructor
    Secuencia (int []);
    
    void begin ();
    void update ();
    void on ();
    void off ();
    bool isOn ();
    void agregaEstado();
 
   private:
     
     int *pines_;
     Estado *estados_;
     bool secActive_;
     unsigned long ultimoMillis_;        // when we last changed state
     int estadoActual_;
     int cantEstados_;
     
  };  // end of Secuencia class