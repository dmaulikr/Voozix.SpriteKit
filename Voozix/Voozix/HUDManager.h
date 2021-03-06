//
//  HUDManager.h
//  Voozix
//
//  Created by Norman Ackermann on 02.01.14.
//  Copyright (c) 2014 Norman Ackermann. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

/**
 * @class HUDManager
 *
 * @brief Displays information for the player
 *
 * 
 */
@interface HUDManager : NSObject
@property (nonatomic, strong) NSMutableArray *players;
- (id)initWithScene:(SKScene*)scene;
- (void)update;
@end
