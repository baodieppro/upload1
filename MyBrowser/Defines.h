//
//  Defines.h
//  Webkit-Demo
//
//  Created by luowei on 15/6/26.
//  Copyright (c) 2015 rootls. All rights reserved.
//

#ifndef Webkit_Demo_Defines____FILEEXTENSION___
#define Webkit_Demo_Defines____FILEEXTENSION___

#ifdef DEBUG
#define Log(format, ...) NSLog(format, ## __VA_ARGS__)
#else
#define Log(format, ...)
#endif


#define HOME_URL [[NSURL alloc] initWithString:@"http://onbibi.com/m"]
#define Search_URL NSLocalizedString(@"SearchURL", nil)

#define MY_FAVORITES @"MY_FAVORITES"
#define UIWEBVIEW_MODE @"UIWebview_Mode"

static NSString *const EasyList_Url = @"https://cdn.onbibi.com/easylistchina+easylist.txt";
static NSString *const EasyList_NamePath = @"/easylistchina+easylist.txt";
static NSString *const EasyList_FileName = @"easylistchina+easylist";

#endif
