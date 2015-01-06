//
//  NSLog-Extended.h
//
//  Created by Ian McDowell (mcdow.ian@gmail.com)
//

#import <Foundation/Foundation.h>

#ifdef DEBUG
#define NSLog(args...) NSLogExtended(__FILE__,__LINE__,__PRETTY_FUNCTION__,args);
#else
#define NSLog(x...)
#endif

void NSLogExtended(const char *file, int lineNumber, const char *functionName, NSString *format, ...);