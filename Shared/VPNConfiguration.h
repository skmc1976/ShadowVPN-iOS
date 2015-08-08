// Generated by json_to_model

#import <Foundation/Foundation.h>


@interface VPNConfiguration : NSObject

- (id)initWithJSONData:(NSData *)data;
- (id)initWithJSONDictionary:(NSDictionary *)dictionary;
- (NSDictionary *)JSONDictionary;
- (NSData *)JSONData;


@property (nonatomic, assign) BOOL chnroutes;

@property (nonatomic, copy) NSString * server;

@property (nonatomic, copy) NSString * confDescription;

@property (nonatomic, copy) NSString * dns;

@property (nonatomic, copy) NSString * usertoken;

@property (nonatomic, copy) NSString * password;

@property (nonatomic, assign) NSInteger port;


@end

