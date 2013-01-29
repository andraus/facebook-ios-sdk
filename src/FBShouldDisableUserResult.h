//
//  FBShouldDisableUserResult.h
//  facebook-ios-sdk
//
//  Created by Augusto Andraus on 1/31/13.
//
//

#import <Foundation/Foundation.h>

/**
 * Class to carry information returning from FBFriendPickerDelegate method shouldDisableUser
 */
@interface FBShouldDisableUserResult : NSObject

@property (nonatomic) BOOL disable;
@property (strong, nonatomic) NSString *subtitle;

@end
