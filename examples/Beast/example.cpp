#include <beast/http.hpp>
#include <iostream>
#include <string>

int main()
{
    // Set up HTTP request
    beast::http::request<beast::http::empty_body> req;
    req.version = 11;
    beast::http::prepare(req);

    return 0;
}