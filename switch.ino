
#define rele4 8  
#define rele3 9  
#define rele2 10 
#define rele1 11 

char Texto_Recebido;

bool On = 1; 
bool Off = 0;

void setup () {
    pinMode(rele1, OUTPUT); 
    pinMode(rele2, OUTPUT); 
    pinMode(rele3, OUTPUT); 
    pinMode(rele4, OUTPUT); 
    pinMode(13, OUTPUT);    
    Serial.begin(9600);   
    Serial.println("Envie uma letra para começar os testes"); 
    Serial.println("Aguardando comando..."); 

}

void loop () {
    if (Serial.available()>0)          
        Texto_Recebido = Serial.read();  

switch (Texto_Recebido) {
    case 'F':
        Serial.println("Para Frente");
        digitalWrite(rele1, On);      
        digitalWrite(rele2, Off);     
        digitalWrite(rele3, On);      
        digitalWrite(rele4, Off);     
        digitalWrite(13,1);
        break;      
    case 'B':
        Serial.println("Para Trás");
        digitalWrite(rele1, Off);               
        digitalWrite(rele2, On);                
        digitalWrite(rele3, Off);                 
        digitalWrite(rele4, On);
        break;
    case 'I':
        Serial.println("Para Frente e Esquerda");
        digitalWrite(rele1, On);                 
        digitalWrite(rele2, Off);                
        digitalWrite(rele3, On);                 
        digitalWrite(rele4, On);
        break;
    case 'G':
        Serial.println("Para Frente e Direita");
        digitalWrite(rele1, On);               
        digitalWrite(rele2, On);               
        digitalWrite(rele3, On);               
        digitalWrite(rele4, Off);  
        break;
    case 'H':
        Serial.println("Para Trás e Esquerda");
        digitalWrite(rele1, On);               
        digitalWrite(rele2, On);               
        digitalWrite(rele3, Off);              
        digitalWrite(rele4, On);               
        break;
    case 'J':
        Serial.println("Para Trás e Direita");
        digitalWrite(rele1, Off);             
        digitalWrite(rele2, On);              
        digitalWrite(rele3, On);              
        digitalWrite(rele4, On);    
        break;
    case 'L':
        Serial.println("Para Esquerda");  
        digitalWrite(rele1, Off);         
        digitalWrite(rele2, On);          
        digitalWrite(rele3, On);          
        digitalWrite(rele4, Off);     
        break;
    case 'R':
        Serial.println("Para Direita");    
        digitalWrite(rele1, On);           
        digitalWrite(rele2, Off);          
        digitalWrite(rele3, Off);          
        digitalWrite(rele4, On);      
        break;     
    default:
        Serial.println("Parado");
        digitalWrite(rele1, On);               
        digitalWrite(rele2, On);                
        digitalWrite(rele3, On);                 
        digitalWrite(rele4, On);
        digitalWrite(13,0);
        break;
    }
}
