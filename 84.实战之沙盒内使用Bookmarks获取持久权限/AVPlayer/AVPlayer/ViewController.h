//
//  ViewController.h
//  AVPlayer
//
//  Created by mac on 2018/8/7.
//  Copyright © 2018年 石彪. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <Realm/Realm.h>
#import "VideoURLModel.h"

#define KDefaultRealm [RLMRealm defaultRealm]
@interface ViewController : NSViewController
/*
 数据源
 */
@property (nonatomic,strong) NSMutableArray<NSURL *> *dataArr;
//选择的本地文件
@property (nonatomic,strong) NSURL *selectedFileURL;

-(void)saveURLToDataBaseWithURL:(NSURL *)url;
@end

