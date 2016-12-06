#ifndef WEBUSB_CONFIG_H
#define WEBUSB_CONFIG_H

//WebUSB URL Prefix
#define HTTP                                  0
#define HTTPS                                 1

typedef struct 
{
	uint8_t prefix;
	char* url;
} allowed_origins_t;

#define NUM_ALLOWED_ORIGINS 4

static const allowed_origins_t ALLOWED_ORIGINS[NUM_ALLOWED_ORIGINS] =  {
	{
		.prefix = HTTP,
		.url = "localhost"
	},
	{
		.prefix = HTTPS,
		.url = "tkg.io"
	},
	{
		.prefix = HTTPS,
		.url = "kai.tkg.io"
	},
	{
		.prefix = HTTP,
		.url = "localhost:8080"
	}

};
#endif