/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2016 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */
#import "TiProxy.h"
#import <CoreBluetooth/CoreBluetooth.h>

@interface TiBluetoothServiceProxy : TiProxy {
  CBMutableService *service;
}

- (id)_initWithPageContext:(id<TiEvaluator>)context andService:(CBService *)_service;
- (id)_initWithPageContext:(id<TiEvaluator>)context andProperties:(id)args;
- (CBMutableService *)service;

@end
