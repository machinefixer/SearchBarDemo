//
//  Candy.h
//  SearchBarDemo
//
//  Created by Anderson on 15/12/2.
//  Copyright © 2015年 Yuchen Zhan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Candy : NSObject

@property (nonatomic, copy) NSString *category;
@property (nonatomic, copy) NSString *name;

+ (instancetype)candyOfCategory:(NSString *)category name:(NSString *)name;

@end
