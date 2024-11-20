#import <Foundation/Foundation.h>
#import "LSBundleProxy.h"
#import "LSContext.h"

@class NSDate, NSString, NSArray, NSUUID, NSSet, NSDictionary, LSApplicationRecord, _LSDiskUsage, NSProgress, _LSApplicationState, NSNumber;

@protocol LSDetachable

- (void)detach;

@end

@interface LSApplicationProxy : LSBundleProxy <LSDetachable, NSSecureCoding>

@property (readonly) NSArray *if_userActivityTypes;
@property (readonly, nonatomic) int bundleModTime;
@property (nonatomic) BOOL userInitiatedUninstall;
@property (readonly, nonatomic) BOOL supportsAlternateIconNames;
@property (readonly, nonatomic) LSApplicationRecord *correspondingApplicationRecord;
@property (readonly, nonatomic) NSString *applicationIdentifier;
@property (readonly, nonatomic) NSString *companionApplicationIdentifier;
@property (readonly, nonatomic) NSArray *counterpartIdentifiers;
@property (readonly, nonatomic) NSDate *registeredDate;
@property (readonly, nonatomic) NSNumber *itemID;
@property (readonly, nonatomic) NSString *vendorName;
@property (readonly, nonatomic) NSString *itemName;
@property (readonly, nonatomic) NSString *storeCohortMetadata;
@property (readonly, nonatomic) NSString *genre;
@property (readonly, nonatomic) NSNumber *genreID;
@property (readonly, nonatomic) NSArray *subgenres;
@property (readonly, nonatomic) NSArray *staticShortcutItems;
@property (readonly, nonatomic) NSString *minimumSystemVersion;
@property (readonly, nonatomic) NSString *maximumSystemVersion;
@property (readonly, nonatomic) NSString *shortVersionString;
@property (readonly, nonatomic) NSString *preferredArchitecture;
@property (readonly, nonatomic) NSString *applicationType;
@property (readonly, nonatomic) NSArray *directionsModes;
@property (readonly, nonatomic) NSArray *UIBackgroundModes;
@property (readonly, nonatomic) NSArray *audioComponents;
@property (readonly, nonatomic) NSUUID *deviceIdentifierForVendor;
@property (readonly, nonatomic) NSUUID *deviceIdentifierForAdvertising;
@property (readonly, nonatomic) NSProgress *installProgress;
@property (readonly, nonatomic) NSNumber *staticDiskUsage;
@property (readonly, nonatomic) NSNumber *dynamicDiskUsage;
@property (readonly, nonatomic) NSNumber *ODRDiskUsage;
@property (readonly, nonatomic) _LSDiskUsage *diskUsage;
@property (readonly, nonatomic) _LSApplicationState *appState;
@property (readonly, nonatomic, getter=isInstalled) BOOL installed;
@property (readonly, nonatomic, getter=isPlaceholder) BOOL placeholder;
@property (readonly, nonatomic, getter=isRestricted) BOOL restricted;
@property (readonly, nonatomic, getter=isRemovedSystemApp) BOOL removedSystemApp;
@property (readonly, nonatomic) NSArray *VPNPlugins;
@property (readonly, nonatomic) NSArray *plugInKitPlugins;
@property (readonly, nonatomic) NSArray *appTags;
@property (readonly, nonatomic) NSString *applicationDSID;
@property (readonly, nonatomic) NSNumber *purchaserDSID;
@property (readonly, nonatomic) NSNumber *downloaderDSID;
@property (readonly, nonatomic) NSNumber *familyID;
@property (readonly, nonatomic) unsigned long long installType;
@property (readonly, nonatomic) unsigned long long originalInstallType;
@property (readonly, nonatomic) NSArray *requiredDeviceCapabilities;
@property (readonly, nonatomic) NSArray *deviceFamily;
@property (readonly, nonatomic) NSArray *activityTypes;
@property (readonly, nonatomic) NSArray *externalAccessoryProtocols;
@property (readonly, nonatomic) NSString *teamID;
@property (readonly, nonatomic) NSString *appIDPrefix;
@property (readonly, nonatomic) NSNumber *storeFront;
@property (readonly, nonatomic) NSNumber *externalVersionIdentifier;
@property (readonly, nonatomic) NSNumber *betaExternalVersionIdentifier;
@property (readonly, nonatomic) NSNumber *ratingRank;
@property (readonly, nonatomic) NSString *ratingLabel;
@property (readonly, nonatomic) NSString *sourceAppIdentifier;
@property (readonly, nonatomic) NSString *applicationVariant;
@property (readonly, nonatomic, getter=isAppUpdate) BOOL appUpdate;
@property (readonly, nonatomic) BOOL hasParallelPlaceholder;
@property (readonly, nonatomic, getter=isNewsstandApp) BOOL newsstandApp;
@property (readonly, nonatomic, getter=isWhitelisted) BOOL whitelisted;
@property (readonly, nonatomic, getter=isAppStoreVendable) BOOL appStoreVendable;
@property (readonly, nonatomic, getter=isDeviceBasedVPP) BOOL deviceBasedVPP;
@property (readonly, nonatomic, getter=isBetaApp) BOOL betaApp;
@property (readonly, nonatomic, getter=isAdHocCodeSigned) BOOL adHocCodeSigned;
@property (readonly, nonatomic) BOOL supportsAudiobooks;
@property (readonly, nonatomic, getter=isLaunchProhibited) BOOL launchProhibited;
@property (readonly, nonatomic) BOOL supportsODR;
@property (readonly, nonatomic) BOOL hasSettingsBundle;
@property (readonly, nonatomic) BOOL supportsExternallyPlayableContent;
@property (readonly, nonatomic) BOOL supportsOpenInPlace;
@property (readonly, nonatomic) BOOL fileSharingEnabled;
@property (readonly, nonatomic) BOOL iconIsPrerendered;
@property (readonly, nonatomic) BOOL iconUsesAssetCatalog;
@property (readonly, nonatomic, getter=isPurchasedReDownload) BOOL purchasedReDownload;
@property (readonly, nonatomic) BOOL hasMIDBasedSINF;
@property (readonly, nonatomic) BOOL missingRequiredSINF;
@property (readonly, nonatomic) BOOL supportsPurgeableLocalStorage;
@property (readonly, nonatomic, getter=isDeletable) BOOL deletable;
@property (readonly, nonatomic) NSArray *managedPersonas;
@property (readonly, nonatomic, getter=isRemoveableSystemApp) BOOL removeableSystemApp;
@property (readonly, nonatomic, getter=isWatchKitApp) BOOL watchKitApp;
@property (readonly, nonatomic) NSString *watchKitVersion;
@property (readonly, nonatomic) NSString *complicationPrincipalClass;
@property (readonly, nonatomic) NSArray *supportedComplicationFamilies;
@property (readonly, nonatomic) BOOL hasCustomNotification;
@property (readonly, nonatomic) BOOL hasComplication;
@property (readonly, nonatomic) BOOL hasGlance;
@property (readonly, nonatomic) BOOL shouldSkipWatchAppInstall;
@property (readonly, nonatomic, getter=isGameCenterEnabled) BOOL gameCenterEnabled;
@property (readonly, nonatomic) BOOL gameCenterEverEnabled;
@property (readonly, nonatomic) NSNumber *installFailureReason;
@property (readonly, nonatomic) long long deviceManagementPolicy;
@property (readonly, nonatomic) NSDictionary *siriActionDefinitionURLs;
@property (readonly, nonatomic) NSString *appStoreToolsBuildVersion;
@property (readonly, nonatomic) NSSet *claimedDocumentContentTypes;
@property (readonly, nonatomic) NSSet *claimedURLSchemes;
@property (readonly, nonatomic) BOOL canHandleWebAuthentication;
@property (readonly, nonatomic) BOOL supportsMultiwindow;
@property (readonly, nonatomic) NSNumber *platform;
@property (readonly, nonatomic) NSArray *backgroundTaskSchedulerPermittedIdentifiers;
@property (readonly, nonatomic, getter=isStandaloneWatchApp) BOOL standaloneWatchApp;
@property (readonly, nonatomic) BOOL runsIndependentlyOfCompanionApp;
@property (readonly, nonatomic, getter=isArcadeApp) BOOL arcadeApp;
@property (readonly, nonatomic) NSArray *carPlayInstrumentClusterURLSchemes;

+ (instancetype)applicationProxyForBundleType:(unsigned long long)bundleType identifier:(id)identifier isCompanion:(BOOL)companion URL:(id)url itemID:(id)itemID bundleUnit:(unsigned int *)bundleUnit;
+ (instancetype)applicationProxyForBundleURL:(id)bundleURL;
+ (instancetype)applicationProxyForCompanionIdentifier:(id)companionIdentifier;
+ (instancetype)applicationProxyForIdentifier:(NSString *)identifier;
+ (instancetype)applicationProxyForIdentifier:(NSString *)identifier placeholder:(BOOL)placeholder;
+ (instancetype)applicationProxyForIdentifier:(NSString *)identifier withContext:(LSContext *)context;
+ (instancetype)applicationProxyForItemID:(id)itemID;
+ (instancetype)applicationProxyForSystemPlaceholder:(id)systemPlaceholder;
+ (instancetype)applicationProxyWithBundleUnitID:(unsigned int)bundleUnitID withContext:(LSContext *)context;

- (BOOL)isDeletableIgnoringRestrictions;
- (BOOL)UPPValidated;
- (id)alternateIconName;
- (void)clearAdvertisingIdentifier;
- (BOOL)freeProfileValidated;
- (id)getBundleMetadata;
- (void)getDeviceManagementPolicyWithCompletionHandler:(id /* block */)completionHandler;
- (BOOL)getGenericTranslocationTargetURL:(NSURL **)genericTranslocationTargetURL error:(NSError **)error;
- (id)handlerRankOfClaimForContentType:(id)contentType;
- (id)installProgressSync;
- (id)localizedNameForContext:(id)context;
- (id)localizedNameForContext:(id)context preferredLocalizations:(id)preferredLocalizations;
- (id)localizedNameForContext:(id)context preferredLocalizations:(id)preferredLocalizations useShortNameOnly:(BOOL)useShortNameOnly;
- (id)primaryIconDataForVariant:(int)variant;
- (BOOL)profileValidated;
- (void)setAlternateIconName:(id)alternateIconName withResult:(id /* block */)result;

@end

