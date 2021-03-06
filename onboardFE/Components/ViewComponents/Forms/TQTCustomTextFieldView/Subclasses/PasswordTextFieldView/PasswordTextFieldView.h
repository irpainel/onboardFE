//
//  PasswordTextFieldView.h
//  
//
//  Created by Taqtile on 8/18/15.
//  Copyright (c) 2015 Taqtile. All rights reserved.
//

#import "TQTCustomTextFieldView.h"

@interface PasswordTextFieldView : TQTCustomTextFieldView

-(bool)isEqualTo:(PasswordTextFieldView *)compare;
-(void)validateIfEqualTo:(PasswordTextFieldView *)compare;
-(void)validateIfEqualTo:(PasswordTextFieldView *)compare
withForcedSelfValidation:(BOOL)selfValidation;

@end
