//
//  EnemyManager.h
//  Voozix
//
//  Created by Norman Ackermann on 02.01.14.
//  Copyright (c) 2014 Norman Ackermann. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>
#import "EnemyBall.h"

@interface EnemyManager : NSObject
@property (nonatomic, strong) NSMutableArray *enemies;
- (id)initWithScene:(SKScene *)scene;
- (void)update:(CFTimeInterval)currentTime;
- (void)createEnemy;
@end
