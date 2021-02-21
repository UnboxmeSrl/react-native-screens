#import <React/RCTViewManager.h>
#import <React/RCTUIManagerObserverCoordinator.h>

#import "RNSScreenContainer.h"

@interface RNScreensNavigationController: UINavigationController <RNScreensViewControllerDelegate, UIGestureRecognizerDelegate>

@property (nonatomic, strong) UIPanGestureRecognizer *fullWidthBackGestureRecognizer;

@end

@interface RNSScreenStackView : UIView <RNSScreenContainerDelegate, RCTInvalidating>

@property (nonatomic, copy) RCTDirectEventBlock onFinishTransitioning;

- (void)markChildUpdated;
- (void)didUpdateChildren;

@end

@interface RNSScreenStackManager : RCTViewManager <RCTInvalidating>

@end
