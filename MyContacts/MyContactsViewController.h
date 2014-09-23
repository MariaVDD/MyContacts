//
//  MyContactsViewController.h
//  MyContacts
//
//  Created by webstudent on 9/22/14.
//  Copyright (c) 2014 Maria Vergel de Dios. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MyContactsViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIScrollView *Scrollview;

- (IBAction)btnView:(id)sender;
- (IBAction)btnSave:(id)sender;

@property (weak, nonatomic) IBOutlet UIButton *btnBack;
- (IBAction)btnBack:(id)sender;

@property (weak, nonatomic) IBOutlet UITextView *txtData;
@property (weak, nonatomic) IBOutlet UITextField *txtFirstName;
@property (weak, nonatomic) IBOutlet UITextField *txtLastName;

@property (weak, nonatomic) IBOutlet UITextField *txtAddress;
@property (weak, nonatomic) IBOutlet UITextField *txtCity;
@property (weak, nonatomic) IBOutlet UITextField *txtState;
@property (weak, nonatomic) IBOutlet UITextField *txtZip;
@property (weak, nonatomic) IBOutlet UITextField *txtPhone;
@property (weak, nonatomic) IBOutlet UITextField *txtEmail;
-(IBAction) doneEditing:(id) sender;

@end
