//
//  RecommendedAppCell.h
//  Travel
//
//  Created by 小涛 王 on 12-4-11.
//  Copyright (c) 2012年 甘橙软件. All rights reserved.
//

#import "PPTableViewCell.h"
#import "HJManagedImageV.h"
#import "App.pb.h"

@interface RecommendedAppCell : PPTableViewCell <HJManagedImageVDelegate>

@property (retain, nonatomic) IBOutlet HJManagedImageV *imageView;
@property (retain, nonatomic) IBOutlet UILabel *titleLabel;
@property (retain, nonatomic) IBOutlet UILabel *briefIntroLabel;

- (void)setCellData:(RecommendedApp*)app;

@end
