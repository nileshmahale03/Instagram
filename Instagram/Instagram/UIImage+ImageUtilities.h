//
//  UIImage+ImageUtilities.h
//  Instagram
//
//  Created by Nilesh Mahale on 9/7/15.
//  Copyright (c) 2015 Nilesh Mahale. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (ImageUtilities)

- (UIImage *) imageWithFixedOrientation;
- (UIImage *) imageResizedToMatchAspectRatioOfSize:(CGSize)size;
- (UIImage *) imageCroppedToRect:(CGRect)cropRect;

@end