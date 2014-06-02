//
//  CtrlXAppDelegate.h
//  CtrlX
//
//  Created by body7 on 14-6-2.
//  Copyright (c) 2014年 ctrlx.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CtrlXAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
