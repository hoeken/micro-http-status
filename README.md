# micro-http-status

[![Platform IO CI](https://github.com/rzeldent/micro-miniz/actions/workflows/main.yml/badge.svg)](https://github.com/rzeldent/micro-miniz/actions/workflows/main.yml)

Library to check the HTTP status and translate to status names

## Introduction

This library is a helper to determine the result of http responses and to translate them to human readable string

## Checking the result

Below the list of functions provided by this library

### bool http_informational(int code)

Returns true if the response is informational (code >= 100 && code < 200)

### bool http_success(int code)

Returns true if the response is successful (code >= 200 && code < 300)

### bool http_redirection(int code)

Returns true if the response requested a redirection (code >= 300 && code < 400)

### bool http_client_error(int code)

Returns true if the response is a client error (code >= 400 && code < 500)

### bool http_server_error(int code)

Returns true if the response is a server error (code >= 500 && code < 600)

### bool http_failure(int code)

Returns true if the response indicates a client- or server error (code >= 400 && code < 600)

## Displaying the result

### const char *http_status_group(int code)

Returns the group of the response. If the group is not known, an empty string is returned

### const char *http_status_reason(int code)

Returns the status of the response. If the status is not known, an empty string is returned
