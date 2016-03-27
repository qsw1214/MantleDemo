//
//  GHIssue.h
//  MantleDemo
//
//  Created by Terwer Green on 15/10/12.
//  Copyright © 2015年 Terwer Green. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Mantle/Mantle.h>

@class GHUserMantle;
typedef enum : NSUInteger {
    GHIssueStateOpen,
    GHIssueStateClosed
} GHIssueState;

@interface GHIssueMantle: MTLModel <MTLJSONSerializing>

@property (nonatomic, copy, readonly) NSURL *URL;
@end
