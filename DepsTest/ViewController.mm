//
//  ViewController.m
//  DepsTest
//
//  Created by Alexandru Chiculita on 8/19/20.
//

#import "ViewController.h"

const char* get_arch();

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    auto arch = get_arch();
    auto str = [NSString stringWithFormat: @"Your arch is: %s", arch];
    [self.text_box setStringValue: str];
}


- (void)setRepresentedObject:(id)representedObject {
    [super setRepresentedObject:representedObject];

    // Update the view, if already loaded.
}


@end
