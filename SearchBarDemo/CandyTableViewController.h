//
//  CandyTableViewController.h
//  SearchBarDemo
//
//  Created by Anderson on 15/12/2.
//  Copyright © 2015年 Yuchen Zhan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CandyTableViewController : UITableViewController <UISearchBarDelegate, UISearchDisplayDelegate>

@property (nonatomic, strong) NSArray *candyArray;
@property (nonatomic, strong) NSMutableArray *filteredCandyArray;
@property IBOutlet UISearchBar *candySearchBar;

- (IBAction)goToSearch:(id)sender;

@end
