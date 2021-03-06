/*
	OTA_FlightSearchOTA_FlightSearch.h
	The interface definition of classes and methods for the OTA_FlightSearch web service.
	Generated by SudzC.com
*/
				
#import "Soap.h"
	
/* Add class references */
				

/* Interface for the service */
				
@interface OTA_FlightSearchOTA_FlightSearch : SoapService
		
	// Returns NSString*
	/*  */
	- (SoapRequest*) Request: (id <SoapDelegate>) handler requestXML: (NSString*) requestXML;
	- (SoapRequest*) Request: (id) target action: (SEL) action requestXML: (NSString*) requestXML;

		
	+ (OTA_FlightSearchOTA_FlightSearch*) service;
	+ (OTA_FlightSearchOTA_FlightSearch*) serviceWithUsername: (NSString*) username andPassword: (NSString*) password;
@end
	