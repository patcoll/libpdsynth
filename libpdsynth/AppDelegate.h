//
//  AppDelegate.h
//  libpdsynth
//
//  Created by Patrick Collins on 1/30/12.
//  Copyright (c) 2012 MAYA Design, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AudioToolbox/AudioToolbox.h>
#import "PdBase.h"
#import "PdAudioController.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>
{
    PdAudioController *audioController;
}

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) PdAudioController *audioController;

@end
