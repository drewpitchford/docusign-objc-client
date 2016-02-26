#import <Foundation/Foundation.h>
#import "DSObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "DSAddressInformationInput.h"
#import "DSDobInformationInput.h"
#import "DSSsn4InformationInput.h"
#import "DSSsn9InformationInput.h"


@protocol DSIdCheckInformationInput
@end

@interface DSIdCheckInformationInput : DSObject


@property(nonatomic) DSAddressInformationInput* addressInformationInput;

@property(nonatomic) DSDobInformationInput* dobInformationInput;

@property(nonatomic) DSSsn4InformationInput* ssn4InformationInput;

@property(nonatomic) DSSsn9InformationInput* ssn9InformationInput;

@end
