//
//  HelloPlugin.h
//  tlhapp2
//
//  Created by dianji on 14-1-23.
//
//

#import <Cordova/CDV.h>


@interface HelloPlugin : CDVPlugin

- (void) nativeFunction:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options;

@end
