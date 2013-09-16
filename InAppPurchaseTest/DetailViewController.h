//
//  DetailViewController.h
//  InAppPurchaseTest
//
//  Created by Nasit Sarwar Sony on 9/16/13.
//  Copyright (c) 2013 Personal. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
