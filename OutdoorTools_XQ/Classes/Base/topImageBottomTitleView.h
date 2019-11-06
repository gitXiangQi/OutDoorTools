//
//  topImageBottomTitleView.h
//  OutdoorTools_XQ
//
//  Created by iOSDevXiangQi on 2019/7/25.
//  Copyright © 2019年 iOSDevXiangQi. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@class topImageBottomTitleView;
@protocol topImageBottomTitleViewTapDelegate <NSObject>

- (void)topImageBottomTitleViewTapWithView:(topImageBottomTitleView *)view;

@end
@interface topImageBottomTitleView : UIView
- (void)setUIWithDic:(NSDictionary *)dic;
@property (nonatomic , weak) id<topImageBottomTitleViewTapDelegate> delegate;
@property (nonatomic , assign) BOOL checked;
@end

NS_ASSUME_NONNULL_END
