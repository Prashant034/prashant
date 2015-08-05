//
//  CCCAuth.h
//  CCCSDK
//
//  Created by Viggnesh K on 4/14/15.
//  Copyright (c) 2015 cccis. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CCCConstants.h"
@interface CCCAuth : NSObject

/*!
 @abstract The username for the `CCCUser`.
 */
@property (nonatomic, assign) BOOL authenticated;

@property (CCC_NULLABLE_PROPERTY nonatomic, assign) NSString *claimID;

@property (CCC_NULLABLE_PROPERTY nonatomic, assign) NSString *lastName;

@property (CCC_NULLABLE_PROPERTY nonatomic, retain) NSString *authID;

@property (CCC_NULLABLE_PROPERTY nonatomic, retain) NSString *usrName;


+ (void) validateWithClaimID:(CCC_NULLABLE NSString *)claimID lastName:(CCC_NULLABLE NSString *)lastName block:(CCC_NULLABLE CCCUserResultBlock)block;
//+ (void) validateInBackgroundWithClaimID:(CCC_NULLABLE NSString *)claimID lastName:(CCC_NULLABLE NSString *)lastName block:(CCC_NULLABLE CCCUserResultBlock)block;

+ (void) validateInBackgroundWithAuthID:(CCC_NULLABLE NSString *)authID usrName:(CCC_NULLABLE NSString *)usrName block:(CCC_NULLABLE CCCUserResultBlock)block;

@end