//
//  S24HttpTracker.h
//  APM
//
//  Created by Murugappan V R on 15/02/21.
//  Copyright © 2021 Zoho Corporation. All rights reserved.
//

#ifndef S24HttpTracker_h
#define S24HttpTracker_h

#import <Foundation/Foundation.h>

@interface S24HttpTracker : NSObject

- (instancetype)init;

- (void)enable;

- (void)ignoreURLs:(NSArray *)urls;

- (BOOL)shouldIgnoreURL:(NSString *)urlName;

@end

@interface S24SessionTaskDelegate: NSObject

@end

#endif /* S24HttpTracker_h */
