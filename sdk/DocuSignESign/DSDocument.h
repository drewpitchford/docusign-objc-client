#import <Foundation/Foundation.h>
#import "DSObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "DSMatchBox.h"
#import "DSNameValue.h"


@protocol DSDocument
@end

@interface DSDocument : DSObject

/* Specifies the document ID number that the tab is placed on. This must refer to an existing Document's ID attribute. [optional]
 */
@property(nonatomic) NSString* documentId;
/*  [optional]
 */
@property(nonatomic) NSString* uri;
/* The file id from the cloud storage service where the document is located. This information is returned using [ML:GET /folders] or [ML:/folders/{folderid}]. [optional]
 */
@property(nonatomic) NSString* remoteUrl;
/*  [optional]
 */
@property(nonatomic) NSString* name;
/*  [optional]
 */
@property(nonatomic) NSString* password;
/* When set to **true**, PDF form field data is transformed into document tab values when the PDF form field name matches the DocuSign custom tab tabLabel. The resulting PDF form data is also returned in the PDF meta data when requesting the document PDF. See the [ML:Transform PDF Fields] section for more information about how fields are transformed into DocuSign tabs. [optional]
 */
@property(nonatomic) NSString* transformPdfFields;
/* The file extension type of the document. If the document is not a PDF it is converted to a PDF. [optional]
 */
@property(nonatomic) NSString* fileExtension;
/* Matchboxes define areas in a document for document matching when you are creating envelopes. They are only used when you upload and edit a template. \n\nA matchbox consists of 5 elements:\n\n* pageNumber - The document page number  on which the matchbox will appear. \n* xPosition - The x position of the matchbox on a page. \n* yPosition - The y position of the matchbox on a page.\n* width - The width of the matchbox. \n* height - The height of the matchbox. [optional]
 */
@property(nonatomic) NSArray<DSMatchBox>* matchBoxes;
/*  [optional]
 */
@property(nonatomic) NSString* order;
/*  [optional]
 */
@property(nonatomic) NSString* pages;
/*  [optional]
 */
@property(nonatomic) NSArray<DSNameValue>* documentFields;
/* When set to **true**, the document is been already encrypted by the sender for use with the DocuSign Key Manager Security Appliance. [optional]
 */
@property(nonatomic) NSString* encryptedWithKeyManager;
/* The document byte stream. This allows putting a base64 version of document bytes into an envelope. [optional]
 */
@property(nonatomic) NSString* documentBase64;
/* Reserved: TBD [optional]
 */
@property(nonatomic) NSString* applyAnchorTabs;

@end
