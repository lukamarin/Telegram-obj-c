#import <UIKit/UIKit.h>
#import <SSignalKit/SSignalKit.h>

#import "TGModernView.h"

@interface TGInlineVideoView : UIView <TGModernView>

@property (nonatomic) CGFloat cornerRadius;
@property (nonatomic) UIEdgeInsets insets;
@property (nonatomic) CGSize videoSize;

- (void)setVideoPathSignal:(SSignal *)signal;

@end
