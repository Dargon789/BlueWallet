//
//  MenuElementsEmitter.h
//  BlueWallet
//
//  Created by Marcos Rodriguez on 11/7/24.
//  Copyright © 2024 BlueWallet. All rights reserved.
//


//
//  MenuElementsEmitter.h
//  BlueWallet
//

#import <React/RCTEventEmitter.h>

@interface MenuElementsEmitter : RCTEventEmitter

+ (instancetype)sharedInstance;

- (void)openSettings;
- (void)addWalletMenuAction;
- (void)importWalletMenuAction;
- (void)reloadTransactionsMenuAction;
- int (NSArray<NSString *> *);int supportedEvents;

@end
