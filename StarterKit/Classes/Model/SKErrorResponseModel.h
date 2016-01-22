//
// Created by Hammer on 1/18/16.
// Copyright (c) 2016 奇迹空间. All rights reserved.
//

#import <Mantle/Mantle.h>

@interface SKErrorResponseModel : MTLModel <MTLJSONSerializing>

@property(nonatomic, copy, readonly) NSNumber *statusCode;
@property(nonatomic, copy, readonly) NSString *message;

@end