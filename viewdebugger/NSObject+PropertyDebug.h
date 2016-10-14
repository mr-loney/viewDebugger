//
//  NSObject+PropertyDebug.h
//  viewdebugger
//
//  Created by 彭君 on 16/10/13.
//  Copyright © 2016年 pj. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSObject (PropertyDebug)

typedef enum {
    PROPERTYTYPE_BOOL,
    PROPERTYTYPE_STRING,
    PROPERTYTYPE_NUMBER,
    PROPERTYTYPE_ENUM
}PROPERTY_TYPE;

-(NSArray*)propertyNames;

-(BOOL)boolValueWithPropertyName;
-(NSString*)stringValueWithPropertyName;
-(NSNumber*)numberValueWithPropertyName;
-(NSArray*)enumValueWithPropertyName;

-(void)setPropertyValueWithName:(NSString*)propertyName value:(id)value propertyType:(PROPERTY_TYPE)propertyType;
@end
