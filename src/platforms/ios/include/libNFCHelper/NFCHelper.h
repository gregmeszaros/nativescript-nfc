//
//  NFCHelper.h
//  NFCHelper
//
//  Created by Dumitru Andronache on 24/06/2020.
//  Copyright © 2020 Kitwani. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreNFC/CoreNFC.h>

@interface NFCHelper : NSObject
-(NSString*)getHexString:(NSData*)data;
-(NSString*)getUID:(id<NFCTag>)tag;
@end
