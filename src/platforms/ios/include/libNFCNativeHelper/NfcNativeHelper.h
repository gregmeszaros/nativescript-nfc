//
//  NfcNativeHelper.h
//  NfcNativeHelper
//
//  Created by Dumitru Andronache on 25/06/2020.
//  Copyright © 2020 Demetrius Tech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreNFC/CoreNFC.h>

@interface NfcNativeHelper : NSObject
-(NSString*)getHexString:(NSData*)data;
-(NSString*)getUID:(id<NFCTag>)tag;
@end
