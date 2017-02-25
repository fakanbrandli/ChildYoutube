//
//  MainViewController.h
//  ChildYoutube
//
//  Created by Fakan Brandli on 16/07/16.
//  Copyright (c) 2016. Fakan Brandli All rights reserved.
//

#import "SettingViewController.h"
#import <MBProgressHUD.h>

@interface MainViewController : UIViewController <SettingViewControllerDelegate, UIPopoverControllerDelegate, MBProgressHUDDelegate>

@property (strong, nonatomic) UIPopoverController *settingPopoverController;
@property (weak, nonatomic) IBOutlet UICollectionView *videoCollect;

- (IBAction)onInfo:(id)sender;

@end
