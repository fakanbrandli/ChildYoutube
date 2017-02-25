//
//  Utils.m
//  ChildYoutube
//
//  Created by Fakan Brandli on 16/07/16.
//  Copyright (c) 2016. Fakan Brandli All rights reserved.
//

#import "Utils.h"

@implementation Utils

+ (NSString *)timerStringForMin:(NSInteger)min
{
    if (min <= 1) {
        return [NSString stringWithFormat:@"%ld minute", (long)min];
    } else {
        return [NSString stringWithFormat:@"%ld minutes", (long)min];
    }
}

@end