//
//  FBShouldDisableUserResult.m
//  facebook-ios-sdk
//
//  Created by Augusto Andraus on 1/31/13.
//
//

#import "FBShouldDisableUserResult.h"

@implementation FBShouldDisableUserResult

@synthesize disable;
@synthesize subtitle;

-(id)init {
    
    if (self = [super init]) {
        self.disable = NO;
    }
    
    return self;
}

@end
