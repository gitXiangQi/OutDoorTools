//
//  XQBaseTabBarController.h
//  OutdoorTools_XQ
//
//  Created by iOSDevXiangQi on 2019/7/24.
//  Copyright © 2019年 iOSDevXiangQi. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 指南针的刻度盘
 */
@interface ScaleView : UIView

//重置刻度标志的方向
- (void)resetDirection:(CGFloat)heading;

@end
