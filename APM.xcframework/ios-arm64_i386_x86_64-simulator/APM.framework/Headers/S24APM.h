//
//  S24APM.h
//  APM
//
//  Created by Kurian Abraham on 12/03/15.
//  Copyright (c) 2015 Zoho Corporation. All rights reserved.
//

@import Foundation;

#import "S24Transaction.h"
#import "S24HttpTracker.h"
/*!
 The S24APM class provides class methods to initialize and use the APM agent. You must obtain an application key from Site24x7 to use the agent.
 */
@interface S24APM : NSObject

/*!
 Initializes the APM agent. This should be called in main.m when your application launches.
 */
+ (void)startMonitoring;

/*!
 Initializes the APM agent. This should be called in main.m when your application launches.
 @param appKey The application key.
 */
//+ (void)startWithAppKey:(NSString *)appKey;

/*!
 Initializes the user. This should be called in main.m after initializing the agent.
 @param userId The user identifier.
 */
+ (void)setUserId:(NSString *)userId;

/*!
 Initializes the APM agent. This should be called in main.m when your application launches.
 @param appKey The application key.
 @param interval The upload interval in seconds. The default value is 60 seconds.
 */
//+ (void)startWithAppKey:(NSString *)appKey interval:(NSUInteger)interval;

/*!
 Initializes the APM agent. This should be called in main.m when your application launches.
 @param appKey The application key.
 @param interval The upload interval in seconds. The default value is 60 seconds.
 @param server The data collection server.
 */
+ (void)startWithAppKey:(NSString *)appKey interval:(NSUInteger)interval server:(NSString *)server;

/*!
 Start a transaction. This method is thread-safe.
 @param name The transaction name.
 @return A transaction object.
 */
+ (S24Transaction *)startTransactionWithName:(NSString *)name;

/*!
 Stop a transaction. This method is thread-safe.
 @param transaction A transaction object.
 */
+ (void)stopTransaction:(S24Transaction *)transaction;

/*!
 Add a screen. This method is thread-safe.
 @param screen The screen name.
 @param duration  The screen load time.
 @param startTime  The screen start time.
 */
+ (void)addScreen:(NSString *)screen withTime:(NSUInteger)duration startTime:(NSString *)startTime;

/*!
 Add a http call. This method is thread-safe.
 @param name The http call name.
 @param duration  The http call load time.
 @param startTime  The http call start time.
 @param respCode  The http call response code.
 @param httpMethod  The http call method.
 */
+ (void)addHttpCall:(NSString *)name withTime:(NSUInteger)duration startTime:(NSString *)startTime respCode:(NSUInteger)respCode httpMethod:(NSString *)httpMethod;
/*!
 Adds a js error from RN bridge. This method is thread-safe.
 @param message error message.
 @param errorType  The js  errorType.
 @param startTime  The js error start time.
 @param file  The js error file name.
 @param methodName  The js error stack method name.
 @param stackTrace  The js error stack trace.
 @param userTrace  The js error user breadcrumbs.
*/
+ (void)addJsError:(NSString *)message errorType:(NSString *)errorType file:(NSString *)file methodName:(NSString *)methodName stackTrace:(NSString *)stackTrace userTrace:(NSString *)userTrace screen:(NSString *)screen startTime:(NSString *)startTime;

/*!
 Uploads recorded data to the server immediately instead of waiting for the next upload interval. If you've configured a large upload interval, you may want to manually flush data. This method is thread-safe.
 */
+ (void)flush;

/*!
 Tracks http calls with an option to add urls that should not be tracked
 @param urls urls that should not be tracked
 */
+ (void)enableHttpTracking:(NSArray<NSString *> *)urls;

/*!
 Ignore screens/views that should not be tracked
 @param screens screens that should not be tracked
 */
+ (void)ignoreScreens:(NSArray<NSString *> *)screens;

/*!
 Tracks Native crashes
 */
+ (void)enableErrorReporting;
/*!
    Get Server Url i.e end point
 */

+ (NSURL *) getServerUrl;

+ (NSString *) getTag;

- (instancetype)init NS_UNAVAILABLE;

//@property (nonatomic, copy) S24HttpTracker * httpTracker;

@end
