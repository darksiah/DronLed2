#ifndef Secuencia_h
#define Secuencia_h

#define CANTLED 4

  class Estado 
  {
  public:
    
    Estado(bool ledState[CANTLED],int intencidad[CANTLED],unsigned long intervaloCambio);
    void estList();

  private:
    bool ledState_[CANTLED];
    int intencidad_[CANTLED];
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

#endif