#import <Foundation/Foundation.h>
#import "DSFoldersResponse.h"
#import "DSErrorDetails.h"
#import "DSFolderItemsResponse.h"
#import "DSFoldersRequest.h"
#import "DSFolderItemResponse.h"
#import "DSObject.h"
#import "DSApiClient.h"


/**
 * NOTE: This class is auto generated by the swagger code generator program. 
 * https://github.com/swagger-api/swagger-codegen 
 * Do not edit the class manually.
 */
 


/**
 * 
 */
 




@interface DSFoldersApi_SearchOptions : DSObject
/*
 * startPosition Specifies the the starting location in the result set of the items that are returned.
 */
@property NSString* startPosition;
/*
 * count Specifies the number of records returned in the cache. The number must be greater than 0 and less than or equal to 100.
 */
@property NSString* count;
/*
 * fromDate Specifies the start of the date range to return. If no value is provided, the default search is the previous 30 days.
 */
@property NSString* fromDate;
/*
 * toDate Specifies the end of the date range to return.
 */
@property NSString* toDate;
/*
 * orderBy Specifies the property used to sort the list. Valid values are: `action_required`, `created`, `completed`, `sent`, `signer_list`, `status`, or `subject`.
 */
@property NSString* orderBy;
/*
 * order Specifies the order in which the list is returned. Valid values are: `asc` for ascending order, and `desc` for descending order.
 */
@property NSString* order;
/*
 * includeRecipients When set to **true**, the recipient information is returned in the response.
 */
@property NSString* includeRecipients;
/*
 * all Specifies that all envelopes that match the criteria are returned.
 */
@property NSString* all;

@end


 
@interface DSFoldersApi: NSObject

@property(nonatomic, assign)DSApiClient *apiClient;

-(instancetype) initWithApiClient:(DSApiClient *)apiClient;
-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(DSFoldersApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(DSFoldersApi*) sharedAPI;



///
///
/// Gets a list of the folders for the account.
/// Retrieves a list of the folders for the account, including the folder hierarchy. You can specify whether to return just the template folder or template folder and normal folders by setting the `template` query string parameter.
///
///  @param accountId The external account number (int) or account ID Guid.
///
///
///
/// @return DSFoldersResponse*
-(NSNumber*) listWithAccountId:(NSString*) accountId 
     
    
    completionHandler: (void (^)(DSFoldersResponse* output, NSError* error)) handler;


	
	



///
///
/// Gets a list of the envelopes in the specified folder.
/// Retrieves a list of the envelopes in the specified folder. You can narrow the query by specifying search criteria in the query string parameters.
///
///  @param accountId The external account number (int) or account ID Guid.
///  @param folderId The ID of the folder being accessed.
///
///
///
/// @return DSFolderItemsResponse*
-(NSNumber*) listItemsWithAccountId:(NSString*) accountId  folderId:(NSString*) folderId 
     
    
    completionHandler: (void (^)(DSFolderItemsResponse* output, NSError* error)) handler;


	
	



///
///
/// Moves an envelope from its current folder to the specified folder.
/// Moves an envelope from its current folder to the specified folder.\n\n#### Note: You can use this endpoint to delete envelopes by specifying `recyclebin' in the `folderId` parameter of the endpoint. Placing an in process envelope (envelope status of `sent` or `delivered`) in the recycle bin voids the envelope. You can also use this endpoint to delete templates by specifying a template ID instead of an envelope ID in the 'envelopeIds' property and specifying `recyclebin` in the `folderId` parameter.
///
///  @param accountId The external account number (int) or account ID Guid.
///  @param folderId The ID of the folder being accessed.
///
/// @param foldersRequest TBD Description 
///
/// @return DSFoldersResponse*
-(NSNumber*) moveEnvelopesWithAccountId:(NSString*) accountId  folderId:(NSString*) folderId 
    foldersRequest:(DSFoldersRequest*) foldersRequest 
    
    completionHandler: (void (^)(DSFoldersResponse* output, NSError* error)) handler;


	
	

///
///
/// Gets a list of envelopes in folders matching the specified criteria.
/// Retrieves a list of envelopes that match the criteria specified in the query.\n\nIf the user ID of the user making the call is the same as the user ID for any returned recipient, then the userId property is added to the returned information for those recipients.
///
///  @param accountId The external account number (int) or account ID Guid.
///  @param searchFolderId Specifies the envelope group that is searched by the request. These are logical groupings, not actual folder names. Valid values are: drafts, awaiting_my_signature, completed, out_for_signature.
///
///
/// @param DSFoldersApi_SearchOptions  Options for modifying the request.
/// @return DSFolderItemResponse*

-(NSNumber*) searchWithCompletionBlock :(NSString*) accountId 
     searchFolderId:(NSString*) searchFolderId  
     
    
    completionHandler: (void (^)(DSFolderItemResponse* output, NSError* error))completionBlock;
    




///
///
/// Gets a list of envelopes in folders matching the specified criteria.
/// Retrieves a list of envelopes that match the criteria specified in the query.\n\nIf the user ID of the user making the call is the same as the user ID for any returned recipient, then the userId property is added to the returned information for those recipients.
///
///  @param accountId The external account number (int) or account ID Guid.
///  @param searchFolderId Specifies the envelope group that is searched by the request. These are logical groupings, not actual folder names. Valid values are: drafts, awaiting_my_signature, completed, out_for_signature.
///
///
/// @param DSFoldersApi_SearchOptions  Options for modifying the request.
/// @return DSFolderItemResponse*
-(NSNumber*) searchWithAccountId:(NSString*) accountId  searchFolderId:(NSString*) searchFolderId 
     
     options:(DSFoldersApi_SearchOptions*) options
    completionHandler: (void (^)(DSFolderItemResponse* output, NSError* error)) handler;


	
	

@end
