#import <Foundation/Foundation.h>
#import "_LSQueryResult.h"

@protocol LSIconResourceLocator;
@class _LSLazyPropertyList;


@interface LSResourceProxy : _LSQueryResult
@property (copy, nonatomic, setter=_setLocalizedName:) NSString *localizedName;
@property (readonly, nonatomic) id<LSIconResourceLocator> iconResourceLocator;
@property (readonly, nonatomic) BOOL boundIconIsBadge;
@property (readonly, nonatomic) NSDictionary *iconsDictionary;
@property (readonly, nonatomic) NSString *primaryIconName;
@property (nonatomic) unsigned long long propertyListCachingStrategy;


- (id)iconDataForVariant:(int)variant withOptions:(int)options;
- (id)iconDataForStyle:(id)style width:(long long)width height:(long long)height options:(unsigned long long)options;
- (id)iconDataForVariant:(int)variant;
- (id)uniqueIdentifier;

@end
