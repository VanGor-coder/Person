//
//  CommonToolClass.m
//  个人详情页(纯代码)
//
//  Created by GaoFan on 2021/3/1.
//  Copyright © 2021 GaoFan. All rights reserved.
//

#import "CommonToolClass.h"

@implementation CommonToolClass

//计算电池栏高度
+ (CGFloat)statusBarHeight {
    CGFloat statusBarHeight = 0;
    if (@available(iOS 13.0, *)) {
        statusBarHeight = [UIApplication sharedApplication].windows.firstObject.windowScene.statusBarManager.statusBarFrame.size.height;
    } else {
        statusBarHeight = [UIApplication sharedApplication].statusBarFrame.size.height;
    }
    return statusBarHeight;
}
@end
