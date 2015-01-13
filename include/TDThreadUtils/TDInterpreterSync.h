//
//  TDInterpreterSync.h
//  TDThreadUtils
//
//
//  Created by Todd Ditchendorf on 5/19/14.
//
//

#import <Foundation/Foundation.h>

@interface TDInterpreterSync : NSObject

+ (instancetype)interpreter;

- (id)awaitPause;
- (void)pauseWithInfo:(id)info;

- (id)awaitResume;
- (void)resumeWithInfo:(id)info;
@end