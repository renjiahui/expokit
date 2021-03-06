/*
	OTA_HotelSearchSudzc.h
	Creates a list of the services available with the OTA_HotelSearch prefix.
	Generated by SudzC.com
*/
#import "OTA_HotelSearchOTA_HotelSearch.h"

@interface OTA_HotelSearchSudzC : NSObject {
	BOOL logging;
	NSString* server;
	NSString* defaultServer;
OTA_HotelSearchOTA_HotelSearch* oTA_HotelSearch;

}

-(id)initWithServer:(NSString*)serverName;
-(void)updateService:(SoapService*)service;
-(void)updateServices;
+(OTA_HotelSearchSudzC*)sudzc;
+(OTA_HotelSearchSudzC*)sudzcWithServer:(NSString*)serverName;

@property (nonatomic) BOOL logging;
@property (nonatomic, retain) NSString* server;
@property (nonatomic, retain) NSString* defaultServer;

@property (nonatomic, retain, readonly) OTA_HotelSearchOTA_HotelSearch* oTA_HotelSearch;

@end
			