//
//  HelloPlugin.m
//  tlhapp2
//
//  Created by dianji on 14-1-23.
//
//

#import "HelloPlugin.h"

@implementation HelloPlugin

- (void) nativeFunction:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options {
    //get the callback id
    NSString *callbackId = [arguments pop];
    
    NSLog(@"Hello, this is a native function called ");
    
    NSString *resultType = [arguments objectAtIndex:0];
    CDVPluginResult *result;
    if ( [resultType isEqualToString:@"success"] ) {
        result = [CDVPluginResult resultWithStatus:CDVCommandStatus_OK messageAsString: @"Success :)"];
        [self writeJavascript:[result toSuccessCallbackString:callbackId]]; } else {
            
            result = [CDVPluginResult resultWithStatus:CDVCommandStatus_ERROR messageAsString: @"Error :("];
            [self writeJavascript:[result toErrorCallbackString:callbackId]]; }
}

@end
