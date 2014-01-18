//
//  ABPadLockScreenViewController+Private.h
//  ABPadLockScreenDemo
//
//  Created by Aron Bury on 18/01/2014.
//  Copyright (c) 2014 Aron Bury. All rights reserved.
//

#import "ABPadLockScreenViewController.h"

@interface ABPadLockScreenViewController (Private)

@property (nonatomic, strong) NSString *currentPin;

- (void)setUpButtonMapping;
- (BOOL)isPinValid:(NSString *)pin;
- (void)newPinSelected:(NSInteger)pinNumber;
- (void)deleteFromPin;

- (void)buttonSelected:(UIButton *)sender;
- (void)cancelButtonSelected:(UIButton *)sender;
- (void)deleteButtonSeleted:(UIButton *)sender;

@end