//
//  AnytimeYouTube1ViewController.h
//  AnytimeYouTube1
//
//  Created by Hiromasa Suzuki on 13/07/28.
//  Copyright (c) 2013年 Hiromasa Suzuki. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AnytimeYouTube1ViewController : UIViewController{
    NSMutableArray *aryData;
}
@property(nonatomic, retain) IBOutlet UITableView *tvYouTube;
@property(nonatomic, assign) IBOutlet UITableViewCell *cellYouTube;
@end
