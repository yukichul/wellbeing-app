//
//  WLBAlcoholViewController.h
//  Wellbeing App
//
//  Created by Leo Du on 10/27/14.
//  Copyright (c) 2014 Student Association. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WLBAlcoholViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *weight;
@property (weak, nonatomic) IBOutlet UISegmentedControl *sex;
@property (weak, nonatomic) IBOutlet UITextField *time;
@property (weak, nonatomic) IBOutlet UISegmentedControl *alcType;
@property (weak, nonatomic) IBOutlet UITextField *shotsTaken;

@property (weak, nonatomic) IBOutlet UILabel *shotsLeft;
- (IBAction)addShot:(id)sender;
- (IBAction)clear:(id)sender;

@end
