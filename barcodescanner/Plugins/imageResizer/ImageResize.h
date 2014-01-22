//
//  ImageResize.h
//  ImageResizer PhoneGap / Cordova Plugin
//
//  Created by Raanan Weber on 02.01.12.



#import <Foundation/Foundation.h>
#import <Cordova/CDV.h>

@interface ImageResize : CDVPlugin {
    
    NSString* callbackID;  
    
}

@property (nonatomic, copy) NSString* callbackID;

//Instance Method  

- (void) resizeImage:(CDVInvokedUrlCommand*)command;
- (void) imageSize:(CDVInvokedUrlCommand*)command;
- (void) storeImage:(CDVInvokedUrlCommand*)command;
- (void) imageSavedToPhotosAlbum:(UIImage *)image didFinishSavingWithError:(NSError *)error contextInfo:(void *)none;
- (UIImage*) getImageUsingOptions:(NSDictionary*)options;

@end
