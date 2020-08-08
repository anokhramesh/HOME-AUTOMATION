#include <ESP8266WiFi.h>

WiFiClient client;
WiFiServer server(80);

#define relay1 D0
#define relay2 D1
#define relay3 D2
#define relay4 D3
#define relay5 D4
#define relay6 D5
#define relay7 D6
#define relay8 D7
#define relay9 D8
void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  WiFi.begin("dewa406", "Ramesh16384");
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(200);
    Serial.print("..");
  }
  Serial.println();
  Serial.println("NodeMCU is connected!");
  Serial.println(WiFi.localIP());
  server.begin();
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  pinMode(relay4, OUTPUT);
  pinMode(relay5, OUTPUT);
  pinMode(relay6, OUTPUT);
  pinMode(relay7, OUTPUT);
  pinMode(relay8, OUTPUT);
  pinMode(relay9, OUTPUT);
}
void loop()
{
  // put your main code here, to run repeatedly:
  client = server.available();  //Gets a client that is connected to the server and has data available for reading.
  if (client == 1)
  {
    String request =  client.readStringUntil('\n');
    Serial.println(request);
    request.trim();
    if (request == "GET /A HTTP/1.1")
    {
      digitalWrite(relay1, HIGH);
    }
    else if (request == "GET /a HTTP/1.1")
    {
      digitalWrite(relay1, LOW);
    }
    else if (request == "GET /B HTTP/1.1")
    {
      digitalWrite(relay2, HIGH);
    }
    else if (request == "GET /b HTTP/1.1")
    {
      digitalWrite(relay2, LOW);
    }
    else if (request == "GET /C HTTP/1.1")
    {
      digitalWrite(relay3, HIGH);
    }
    else if (request == "GET /c HTTP/1.1")
    {
      digitalWrite(relay3, LOW);
    }
    else if (request == "GET /D HTTP/1.1")
    {
      digitalWrite(relay4, HIGH);
    }
    else if (request == "GET /d HTTP/1.1")
    {
      digitalWrite(relay4, LOW);
    }
    
else if (request == "GET /E HTTP/1.1")
    {
      digitalWrite(relay5, HIGH);
    }
    else if (request == "GET /e HTTP/1.1")
    {
      digitalWrite(relay5, LOW);
    }
      else if (request == "GET /F HTTP/1.1")
      {
        digitalWrite(relay6, HIGH);
      }
      else if (request == "GET /f HTTP/1.1")
      {
        digitalWrite(relay6, LOW);
      }   
      else if (request == "GET /G HTTP/1.1")
      {
        digitalWrite(relay7, HIGH);
      }
      else if (request == "GET /g HTTP/1.1")
      {
        digitalWrite(relay7, LOW);
        
      }      
      else if (request == "GET /H HTTP/1.1")
      {
        digitalWrite(relay8, HIGH);
      }
      else if (request == "GET /h HTTP/1.1")
      {
        digitalWrite(relay8, LOW);
        }
        else if (request == "GET /I HTTP/1.1")
      {
        digitalWrite(relay9, HIGH);
      }
      else if (request == "GET /i HTTP/1.1")
      {
        digitalWrite(relay9, LOW);
      }      }      }
