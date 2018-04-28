//
//  XMCaught.h
//  XMCaugh_Example
//
//  Created by zhangxiaomeng on 2018/4/28.
//  Copyright © 2018年 zhangxieomeng1. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XMCaught : NSObject

// 崩溃日志
+ (void)setDefaultHandler;
+ (NSUncaughtExceptionHandler *)getHandler;
+ (void)TakeException:(NSException *) exception;

@end
