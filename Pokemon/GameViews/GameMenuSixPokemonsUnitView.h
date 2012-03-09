//
//  GameMenuSixPokemonsUnitView.h
//  Pokemon
//
//  Created by Kaijie Yu on 3/9/12.
//  Copyright (c) 2012 Kjuly. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol GameMenuSixPokemonsUnitViewDelegate <NSObject>

- (void)confirm:(id)sender;
- (void)openInfoView:(id)sender;

@end

@interface GameMenuSixPokemonsUnitView : UIView {
  id <GameMenuSixPokemonsUnitViewDelegate> delegate_;
}

@property (nonatomic, assign) id <GameMenuSixPokemonsUnitViewDelegate> delegate;

- (id)initWithFrame:(CGRect)frame tag:(NSInteger)tag;

@end