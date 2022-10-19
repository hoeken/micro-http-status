// micro-http-status basic example
//
// Checks the http return codes and provide a reason string
//

#include <Arduino.h>
#include <http_status.h>

void setup()
{
    auto http_server_error_result = 501;
    Serial.println("Result: %s", http_success(http_server_error_result) ? "Success" : "Failed");
    Serial.println("Reason: %s %s", http_status_group(http_server_error_result),  http_status_reason(http_server_error_result));

    auto http_server_success_result = 201;
    Serial.println("Result: %s", http_success(http_server_success_result) ? "Success" : "Failed");
    Serial.println("Reason: %s %s", http_status_group(http_server_success_result),  http_status_reason(http_server_error_result));
}

void loop()
{
}