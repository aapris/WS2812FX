#define WIFI_SSID "Your WiFi Name"
#define WIFI_PASSWORD "WiFi password"

// #define STATIC_IP                     // uncomment for static IP, set IP below
#ifdef STATIC_IP
  IPAddress ip(172,24,1,2);
  IPAddress gateway(172,24,1,1);
  IPAddress subnet(255,255,255,0);
#endif

