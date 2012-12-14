/**
 UIDevice+ModelExtension.h
 
 Created by Piet Brauer on 14.12.12.
*/

#import "UIDevice+ModelExtension.h"
#import <sys/utsname.h>

@implementation UIDevice (ModelExtension)

+(NSString *)modelVersion{
    struct utsname u;
	uname(&u);
	return [NSString stringWithFormat:@"%s", u.machine];
}

@end
