//
//  Candy.m
//  SearchBarDemo
//
//  Created by Anderson on 15/12/2.
//  Copyright © 2015年 Yuchen Zhan. All rights reserved.
//

#import "Candy.h"

@implementation Candy

+ (instancetype)candyOfCategory:(NSString *)category name:(NSString *)name
{
    Candy *newCandy = [[self alloc] init];
    newCandy.category = category;
    newCandy.name = name;
    return newCandy;
}

@end
