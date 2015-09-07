//
//  MediaFullScreenViewController.h
//  Instagram
//
//  Created by Nilesh Mahale on 9/6/15.
//  Copyright (c) 2015 Nilesh Mahale. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Media;

@interface MediaFullScreenViewController : UIViewController

@property (nonatomic, strong) UIScrollView *scrollView;
@property (nonatomic, strong) UIImageView *imageView;
@property (nonatomic, strong) Media *media;

- (instancetype) initWithMedia:(Media *)media;
- (void) centerScrollView;
- (void) recalculateZoomScale;

@end
