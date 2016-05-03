//
//  GRKLanguageFeatures.h
//  GRKAnalytics
//
//  Created by Levi Brown on January, 29 2016.
//  Copyright (c) 2016 Levi Brown <mailto:levigroker@gmail.com>
//  This work is licensed under the Creative Commons Attribution 3.0
//  Unported License. To view a copy of this license, visit
//  http://creativecommons.org/licenses/by/3.0/ or send a letter to Creative
//  Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041,
//  USA.
//
//  The above attribution and the included license must accompany any version
//  of the source code. Visible attribution in any binary distributable
//  including this work (or derivatives) is not required, but would be
//  appreciated.
//

#pragma once

#if !__has_feature(nullability)
    #define nonnull
    #define nullable
    #define _Nullable
    #define _Nonnull
#endif

#ifndef NS_ASSUME_NONNULL_BEGIN
    #define NS_ASSUME_NONNULL_BEGIN
#endif

#ifndef NS_ASSUME_NONNULL_END
    #define NS_ASSUME_NONNULL_END
#endif

#if __has_feature(objc_generics)
    #define GRK_GENERIC_NSARRAY(type) NSArray<type>
    #define GRK_GENERIC_NSDICTIONARY(key_type,object_key) NSDictionary<key_type, object_key>
    #define GRK_GENERIC_NSMUTABLEDICTIONARY(key_type,object_key) NSMutableDictionary<key_type, object_key>
#else
    #define GRK_GENERIC_NSARRAY(type) NSArray
    #define GRK_GENERIC_NSDICTIONARY(key_type,object_key) NSDictionary
    #define GRK_GENERIC_NSMUTABLEDICTIONARY(key_type,object_key) NSMutableDictionary
#endif
