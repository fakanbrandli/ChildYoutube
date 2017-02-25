//
//  Utils.h
//  ChildYoutube
//
//  Created by Fakan Brandli on 16/07/16.
//  Copyright (c) 2016. Fakan Brandli All rights reserved.
//

#import <Foundation/Foundation.h>

static NSString *kEnableSeekControl = @"EnableSeekControlKey";
static NSString *kEnableVolumeControl = @"EnableVolumeControlKey";
static NSString *kMaximumCount = @"MaximumCountKey";
static NSString *kVideoHistory = @"VideoHistoryKey";

@interface Utils : NSObject

+ (NSString *)timerStringForMin:(NSInteger)min;

@end
