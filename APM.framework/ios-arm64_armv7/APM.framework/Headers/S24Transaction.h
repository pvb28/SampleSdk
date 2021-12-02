//
//  S24Transaction.h
//  APM
//
//  Created by Kurian Abraham on 12/03/15.
//  Copyright (c) 2015 Zoho Corporation. All rights reserved.
//

@import Foundation;

#import "S24Component.h"

/*!
 A transaction measures the time between when it's started and stopped. A transaction can contain components that further categorize time elapsed within it.
 */
@interface S24Transaction : NSObject

/*!
 The name of the transaction.
 */
@property (readonly) NSString *name;

- (instancetype)init NS_UNAVAILABLE;

/*!
 Start a component within the transaction. This method is thread-safe.
 @param type The component type. Use one of the predefined values from S24Component.h or a custom string.
 @return A component object.
 @throws NSInternalInconsistencyException if the transaction is not running.
 */
- (S24Component*)startComponentWithType:(NSString*)type;

/*!
 Stop a component. This method is thread-safe.
 @param component A component object.
 @throws NSInternalInconsistencyException if the transaction is not running.
 @throws NSInvalidArgumentException if the component does not belong to this transaction.
 */
- (void)stopComponent:(S24Component*)component;

@end
