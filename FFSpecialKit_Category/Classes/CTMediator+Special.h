//
//  CTMediator+Special.h
//  FFSpecialKit_Category
//
//  Created by Liu on 2019/1/30.
//

#import <CTMediator/CTMediator.h>
#import <FFAPIsKit/APIRequest.h>
#import <FFAPIsKit/FFReformProtocol.h>

NS_ASSUME_NONNULL_BEGIN

@interface CTMediator (Special)
- (UIViewController*)specialDetailController;
- (NSDictionary*)specialReformerWithOriginData:(NSDictionary*)data;
- (NSDictionary *)specialReformer;
- (APIRequest*)specialAPIRequest;
@end

NS_ASSUME_NONNULL_END
