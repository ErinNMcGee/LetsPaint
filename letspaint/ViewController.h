//
//  ViewController.h
//  letspaint
//
//  Created by Erin McGee on 12/3/14.
//  Copyright (c) 2014 Erin McGee. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController{
    CGPoint lastPoint;
    CGFloat red;
    CGFloat green;
    CGFloat blue;
    CGFloat brush;
    CGFloat opacity;
    BOOL mouseSwiped;
}
@property (weak, nonatomic) IBOutlet UIImageView *mainImage;

@property (weak, nonatomic) IBOutlet UIImageView *drawImage;
- (IBAction)colorPressed:(id)sender;

@end

