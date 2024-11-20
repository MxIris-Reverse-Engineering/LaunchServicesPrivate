#import <Foundation/Foundation.h>
#import "LSResourceProxy.h"
#import "LSContext.h"

@class NSUUID, NSString, _LSLazyPropertyList, NSArray, LSApplicationProxy, NSURL, NSDictionary;

@interface LSBundleProxy : LSResourceProxy <NSSecureCoding>

@property (readonly) BOOL _inf_isSystem;
@property (readonly) BOOL if_isSystem;
@property (readonly) BOOL if_isAppExtension;
@property (readonly) BOOL if_isWatchKitAppExtension;
@property (readonly) LSApplicationProxy *if_containingAppProxy;
@property (readonly, nonatomic) NSString *localizedShortName;
@property (copy, nonatomic, setter=_setInfoDictionary:) _LSLazyPropertyList *_infoDictionary;
@property (copy, nonatomic) NSArray *machOUUIDs;
@property (copy, nonatomic, setter=setSDKVersion:) NSString *sdkVersion;
@property (copy, nonatomic, setter=_setEntitlements:) _LSLazyPropertyList *_entitlements;
@property (copy, nonatomic, setter=_setEnvironmentVariables:) _LSLazyPropertyList *_environmentVariables;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *bundleType;
@property (readonly, nonatomic) NSURL *bundleURL;
@property (readonly, nonatomic) NSString *bundleExecutable;
@property (readonly, nonatomic) NSString *canonicalExecutablePath;
@property (readonly, nonatomic) NSURL *containerURL;
@property (readonly, nonatomic) NSURL *dataContainerURL;
@property (readonly, nonatomic) NSURL *bundleContainerURL;
@property (readonly, nonatomic) NSURL *appStoreReceiptURL;
@property (readonly, nonatomic) NSString *bundleVersion;
@property (readonly, nonatomic) NSString *signerIdentity;
@property (readonly, nonatomic) NSDictionary *entitlements;
@property (readonly, nonatomic) NSDictionary *environmentVariables;
@property (readonly, nonatomic) NSDictionary *groupContainerURLs;
@property (readonly, nonatomic) BOOL foundBackingBundle;
@property (readonly, nonatomic, getter=isContainerized) BOOL containerized;
@property (readonly, nonatomic) BOOL profileValidated;
@property (readonly, nonatomic) BOOL UPPValidated;
@property (readonly, nonatomic) BOOL freeProfileValidated;
@property (readonly, nonatomic) NSString *signerOrganization;
@property (readonly, nonatomic) NSUUID *cacheGUID;
@property (readonly, nonatomic) unsigned long long sequenceNumber;
@property (readonly, nonatomic) unsigned long long compatibilityState;

+ (id)bundleProxyForCurrentProcess;
+ (id)bundleProxyForIdentifier:(id)identifier;
+ (id)bundleProxyForURL:(id)url;
+ (id)bundleProxyForURL:(id)url error:(NSError **)error;
+ (id)bundleProxyWithAuditToken:(struct { unsigned int x0[8]; })auditToken error:(NSError **)error;
+ (BOOL)canInstantiateFromDatabase;
+ (void)clearBundleProxyForCurrentProcess;

- (id)entitlementValueForKey:(id)key ofClass:(Class)class;
- (id)appStoreReceiptName;
- (id)appStoreReceiptURL;
- (id)dataContainerURL;
- (id)entitlementValueForKey:(id)key ofClass:(Class)cls valuesOfClass:(Class)cls;
- (id)entitlementValuesForKeys:(id)keys;
- (id)environmentVariables;
- (id)groupContainerURLs;
- (id)localizedNameWithPreferredLocalizations:(id)preferredLocalizations useShortNameOnly:(BOOL)useShortNameOnly;
- (id)localizedValuesForKeys:(id)keys fromTable:(id)table;
- (id)objectForInfoDictionaryKey:(id)infoDictionaryKey ofClass:(Class)cls;
- (id)objectForInfoDictionaryKey:(id)infoDictionaryKey ofClass:(Class)cls valuesOfClass:(Class)cls;
- (id)objectsForInfoDictionaryKeys:(id)infoDictionaryKeys;
- (id)signerIdentity;
- (id)signerOrganization;

@end
