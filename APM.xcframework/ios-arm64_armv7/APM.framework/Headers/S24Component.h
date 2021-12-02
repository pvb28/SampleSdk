//
//  S24Component.h
//  APM
//
//  Created by Kurian Abraham on 13/03/15.
//  Copyright (c) 2015 Zoho Corporation. All rights reserved.
//

@import Foundation;

/*
 Predefined component types.
 */
extern NSString * const S24HTTPComponent;
extern NSString * const S24SocketComponent;
extern NSString * const S24SQLiteComponent;
extern NSString * const S24FilesystemComponent;
extern NSString * const S24UIComponent;

/*!
 Components categorize time elapsed during a transaction.
 */
@interface S24Component : NSObject

@property (readonly) NSString *type;

- (instancetype)init NS_UNAVAILABLE;

@end
