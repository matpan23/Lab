typedef struct punto *punto;

struct punto{
    float ascissa;
    float ordinata;
};

punto creapunto(float x, float y); 
float ascissa(punto p);
float ordinata(punto p);
float distanza(punto p1, punto p2);
void stampa(punto p);
