//
//  PXNewCelButton.h
//  Pixen
//
//  Created by Andy Matuschak on 10/25/05.
//  Copyright 2005 Open Sword Group. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface PXNewCelButton : NSView {
  @private
	int state;
	NSBezierPath *buttonPath, *plusPath;
	IBOutlet id delegate;
}

@end

@interface NSObject (PXNewCelButtonDelegate)
- (void)newCel:(PXNewCelButton *)button;
@end