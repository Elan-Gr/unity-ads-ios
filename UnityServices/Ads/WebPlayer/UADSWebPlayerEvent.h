#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, UnityAdsWebPlayerEvent) {
    kUnityAdsWebPlayerPageStarted,
    kUnityAdsWebPlayerPageFinished,
    kUnityAdsWebPlayerError,
    kUnityAdsWebPlayerEvent,
    kUnityAdsWebPlayerShouldOverrideURLLoading,
    kUnityAdsWebPlayerCreateWebView,
    kUnityAdsWebPlayerFrameUpdate,
    kUnityAdsWebPlayerGetFrameResponse
};

NSString *UADSNSStringFromWebPlayerEvent(UnityAdsWebPlayerEvent);
