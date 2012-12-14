/**
  UIDevice+ModelExtension.h

  Created by Piet Brauer on 14.12.12.
*/

#import <UIKit/UIKit.h>

@interface UIDevice (ModelExtension)

/**
 Returns the model Version of the UIDevice e.g. iPod1,1 iPod1,2 etc.
 @return model Version of the UIDevice e.g. iPod1,1 iPod1,2 etc.
 */
-(NSString *)modelVersion;

@end
