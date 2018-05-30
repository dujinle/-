//
//  NativeOcClass.h
//  hello_world-mobile
//
//  Created by jiaxu on 2018/5/28.
//

#import <Foundation/Foundation.h>

@interface NativeOcClass : NSObject

@property (nonatomic,copy)NSString *wxCode;

@property (nonatomic)int LoginType;

@property (nonatomic)int LoadStatus;

@property (nonatomic,copy)NSString *roomNum;

@property (nonatomic,copy)NSString *rid;

@property (nonatomic,copy)NSString *scene;



+ (instancetype)sharedManager;
//跳转微信登录
+ (void)iOSLoginWithWX;

+(void) WxShare:(NSString*) roomNum name:(NSString*) name rid:(NSString*) rid;

+ (void)setLoadStatus:(int) LoadStatus;
//获取token
+ (NSString *)getWXCode;
//获取APPID
+ (NSString *)getAppId;
//获取AppSecret
+ (NSString *)getAppSecret;
//获取roomNum
+ (NSString *)getRoomNum;
//获取scene
+ (NSString *)getScene;
//获取rid
+ (NSString *)getRid;
//获取登录方式
+(int)getLoginType;
@end
