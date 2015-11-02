//
//  RSAEncryption.h
//  Encryption
//
//  Created by Anil Santo on 03/03/15.
//  Copyright (c) 2015 Anil Santo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RSAEncryption : NSObject
+ (NSString *)encryptData:(NSData *)data publicKey:(NSString *)pubKey;
+(NSString *)encryptString:(NSString *)str publicKey:(NSString *)pubKey;
+ (SecKeyRef)addPublicKey:(NSString *)key;
+ (NSData *)stripPublicKeyHeader:(NSData *)d_key;
@end
