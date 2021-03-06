/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface PSSystemConfiguration : NSObject
{
    struct __SCPreferences *_prefs;
}

+ (id)sharedInstance;
+ (void)releaseSharedInstance;
- (void)dealloc;
- (unsigned char)lockAndSynchronize;
- (void)unlockAndSynchronize;
- (struct __CFString *)dataServiceID;
- (struct __CFString *)voicemailServiceID;
- (struct __CFString *)getServiceIDForPDPContext:(unsigned int)arg1;
- (id)interfaceConfigurationValueForKey:(struct __CFString *)arg1 serviceID:(struct __CFString *)arg2;
- (void)setInterfaceConfigurationValue:(id)arg1 forKey:(struct __CFString *)arg2 serviceID:(struct __CFString *)arg3;
- (id)protocolConfiguration:(struct __CFString *)arg1 serviceID:(struct __CFString *)arg2;
- (void)setProtocolConfiguration:(id)arg1 protocolType:(struct __CFString *)arg2 serviceID:(struct __CFString *)arg3;
- (id)protocolConfigurationValueForKey:(struct __CFString *)arg1 protocolType:(struct __CFString *)arg2 serviceID:(struct __CFString *)arg3;
- (void)setProtocolConfigurationValue:(id)arg1 forKey:(struct __CFString *)arg2 protocolType:(struct __CFString *)arg3 serviceID:(struct __CFString *)arg4;

@end

