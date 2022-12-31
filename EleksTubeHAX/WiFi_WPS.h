#ifndef WIFI_WPS_H
#define WIFI_WPS_H

#include <WiFiManager.h>
#include "GLOBAL_DEFINES.h"

enum WifiState_t {disconnected, connected, wps_active, wps_success, wps_failed, num_states};
void WifiBegin();
bool WiFiStartWps();
void WifiReconnect();

extern WifiState_t WifiState;
extern WiFiManager wfm;

bool GetGeoLocationTimeZoneOffset();
extern double GeoLocTZoffset;

#endif // WIFI_WPS_H
