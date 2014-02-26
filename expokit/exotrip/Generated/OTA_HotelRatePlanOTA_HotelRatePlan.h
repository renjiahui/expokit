/*
	OTA_HotelRatePlanOTA_HotelRatePlan.h
	The interface definition of classes and methods for the OTA_HotelRatePlan web service.
	Generated by SudzC.com
*/
				
#import "Soap.h"
	
/* Add class references */
				

/* Interface for the service */
				
@interface OTA_HotelRatePlanOTA_HotelRatePlan : SoapService
		
	// Returns NSString*
	/*  */
	- (SoapRequest*) Request: (id <SoapDelegate>) handler requestXML: (NSString*) requestXML;
	- (SoapRequest*) Request: (id) target action: (SEL) action requestXML: (NSString*) requestXML;

		
	+ (OTA_HotelRatePlanOTA_HotelRatePlan*) service;
	+ (OTA_HotelRatePlanOTA_HotelRatePlan*) serviceWithUsername: (NSString*) username andPassword: (NSString*) password;
@end
	