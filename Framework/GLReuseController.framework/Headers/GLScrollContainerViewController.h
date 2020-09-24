//
//  GLScrollContainerViewController.h
//  GLLibDemo
//
//  Created by huanggulong on 2017/5/27.
//  Copyright © 2017年 历山大亚. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GLBaseReuseViewController.h"
@interface GLScrollContainerViewController : UIViewController<UIScrollViewDelegate>

@property(nonatomic , weak,readonly)UIScrollView *  contentView;
//当前索引  默认为0
@property(nonatomic , assign)NSInteger pageIndex;
//当前页面总数 默认为3
@property(nonatomic , assign)NSInteger pageCount;

/*
 * @huanggulong
 *
 * 设置 滚动视图,并且设置 pageCount = 3;
 */
- (void)setupContentView;

/*
 * @huanggulong
 *
 * 重新布局视图 之前会调用该方法
 */
- (void)scrollViewWillLayoutSubviews;


/*
 * @huanggulong
 *
 * 重新布局视图 之后会调用该方法
 */
- (void)scrollViewDidLayoutSubviews;

/*
 * @huanggulong
 *
 * 通过索引 返回一个标志
 */
- (NSString *)identifierWithIndex:(NSInteger)index;

/*
 * @huanggulong
 *
 * 某个地方的控制加载完毕 并且放入到contentView中和frame设置完成之后会被调用
 * NS_REQUIRES_SUPER 代表子类必须调用父类方法
 */
- (void)contentViewDidLoadWithSubController:(GLBaseReuseViewController *)vc index:(NSInteger)index NS_REQUIRES_SUPER;

/*
 * @huanggulong
 *
 * 根据一个标志 新建一个新的控制
 */
- (GLBaseReuseViewController *)buildContentViewControllerWithIdentifier:(NSString *)identifier;

@end
