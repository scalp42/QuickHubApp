//
//  GistCreateWindowController.h
//  QuickHub
//
//  Created by Christophe Hamerling on 31/10/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "GitHubController.h"

@interface GistCreateWindowController : NSWindowController {
    // injected
    GitHubController *ghController;
    
    // local
    IBOutlet NSTextField *fileNameField;
    IBOutlet NSTextFieldCell *descriptionField;
    IBOutlet NSTextView *contentTextView;
    IBOutlet NSButton *publicChoice;
    IBOutlet NSProgressIndicator *progressIndicator;
    IBOutlet NSButton *createButton;
}

@property (assign) GitHubController *ghController;

#pragma mark - actions
- (IBAction)createGist:(id)sender;

@end