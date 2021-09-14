// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from react.djinni

#import <Foundation/Foundation.h>
@class RVJavascriptObject;
@protocol RVJavascriptArray;
@protocol RVJavascriptMap;


@protocol RVJavascriptPromise

- (void)resolveNull;

- (void)resolveBoolean:(BOOL)value;

- (void)resolveDouble:(double)value;

- (void)resolveInt:(int32_t)value;

- (void)resolveString:(nonnull NSString *)value;

- (void)resolveArray:(nullable id<RVJavascriptArray>)value;

- (void)resolveMap:(nullable id<RVJavascriptMap>)value;

- (void)resolveObject:(nullable RVJavascriptObject *)value;

- (void)reject:(nonnull NSString *)code
       message:(nonnull NSString *)message;

@end