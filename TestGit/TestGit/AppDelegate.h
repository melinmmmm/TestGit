//
//  AppDelegate.h
//  TestGit
//
//  Created by 陈敏丽 on 2019/3/29.
//  Copyright © 2019 陈敏丽. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

