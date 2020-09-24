//
//  GLBaseReuseViewController.h
//  GLLibDemo
//
//  Created by huanggulong on 2017/5/27.
//  Copyright © 2017年 历山大亚. All rights reserved.
//

#import <UIKit/UIKit.h>

extern NSString * const kGLBaseReuseKey;

@interface GLBaseReuseViewController : UIViewController

//该视图的标志Key
@property (nonatomic, copy) NSString *reuseIdentifier;

- (void)reloadData:(id)data;

@end
