//
//  ORBNetGetAddress.h
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NetGetAddress : NSObject

//网络类型
typedef enum {
    NETWORK_TYPE_NONE = 0,
    NETWORK_TYPE_2G = 1,
    NETWORK_TYPE_3G = 2,
    NETWORK_TYPE_4G = 3,
    NETWORK_TYPE_5G = 4,  //  5G目前为猜测结果
    NETWORK_TYPE_WIFI = 5,
} NETWORK_TYPE;

/*!
 * Get current Device ip address
 */
+ (NSString *)deviceIPAdress;


/*!
 * Get Device connect network address
 */
+ (NSString *)getGatewayIPAddress;


/*!
 * Get DNS IP Addres by hostName
 */
+ (NSArray *)getDNSsWithDormain:(NSString *)hostName;


/*!
 * 获取本地网络的DNS地址
 */
+ (NSArray *)outPutDNSServers;


/*!
 * 获取当前网络类型
 */
+ (NETWORK_TYPE)getNetworkTypeFromStatusBar;

/**
 * 格式化IPV6地址
 */
+(NSString *)formatIPV6Address:(struct in6_addr)ipv6Addr;

@end
