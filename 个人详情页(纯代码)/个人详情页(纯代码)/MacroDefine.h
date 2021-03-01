//
//  MacroDefine.h
//  个人详情页(纯代码)
//
//  Created by GaoFan on 2021/3/1.
//  Copyright © 2021 GaoFan. All rights reserved.
//

#ifndef MacroDefine_h
#define MacroDefine_h
#define SCREEN_HEIGHT [UIScreen mainScreen].bounds.size.height

#define SCREEN_WIDTH [UIScreen mainScreen].bounds.size.width
#define NAVIGATIONBAR_HEIGHT self.navigationController.navigationBar.frame.size.height  //导航高度

//--屏幕宽度,高度--[使用大写+下划线定义1]--
#define STATUSBAR_HEIGHT  (CGRectGetHeight([UIApplication sharedApplication].statusBarFrame))
// 电池栏高度
//appDelegate.window.windowScene.statusBarManager.statusBarFrame.size.height;
#define NAVIGATION_TOTAL_HEIGHT (44+STATUSBAR_HEIGHT) //电池栏+导航  高度

#endif /* MacroDefine_h */
