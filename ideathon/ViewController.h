//
//  ViewController.h
//  ideathon
//
//  Created by Siva on 25/05/17.
//  Copyright © 2017 wekancode. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property (weak, nonatomic) IBOutlet UIImageView *imgInput;

- (IBAction)tapOnCamera:(id)sender;


@end

