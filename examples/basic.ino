// micro-http-status basic example
//
// Checks the http return codes and provide a reason string
//

#include <Arduino.h>
#include <http_status.h>

void setup()
{
    auto http_server_error_result = 501;
    Serial.print("Result: "); Serial.println(http_success(http_server_error_result) ? "Success" : "Failed");
    Serial.print("Reason: "); Serial.print(http_status_group(http_server_error_result)); Serial.println(http_status_reason(http_server_error_result));

    auto http_server_success_result = 201;
    Serial.print("Result: "); Serial.println(http_success(http_server_success_result) ? "Success" : "Failed");
    Serial.print("Reason: "); Serial.print(http_status_group(http_server_success_result)); Serial.println(http_status_reason(http_server_success_result));
}

void loop()
{
}