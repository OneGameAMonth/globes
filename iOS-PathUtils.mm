//
//  PathUtils.m
//  electricSheep
//
//  Created by Ali Helmy on 31/10/2012.
//  Copyright (c) 2012 wackyCube. All rights reserved.
//

#include "Path_C_Interface.h"

const char * pathForFile(const char *name, const char *extension, const char *inDir) {
    const char *path;
    if (inDir!=nil) {
        path = [[[NSBundle mainBundle] pathForResource:[NSString stringWithUTF8String:name] ofType:[NSString stringWithUTF8String:extension] inDirectory:[NSString stringWithUTF8String:inDir]] UTF8String];
    } else {
        path = [[[NSBundle mainBundle] pathForResource:[NSString stringWithUTF8String:name] ofType:[NSString stringWithUTF8String:extension]] UTF8String];
    }
    return path;
}
