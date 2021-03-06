#import <Foundation/Foundation.h>
#import "DSObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "DSNameValue.h"


@protocol DSAccountSettingsInformation
@end

@interface DSAccountSettingsInformation : DSObject

/* The list of account settings. These determine the features available for the account. Note that some features are determined by the plan used to create the account, and cannot be overridden. [optional]
 */
@property(nonatomic) NSArray<DSNameValue>* accountSettings;

@end
