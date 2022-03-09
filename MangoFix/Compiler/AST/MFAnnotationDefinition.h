//
//  MFAnnotationDefinition.h
//  MangoFix
//
//  Created by 雍鹏亮 on 2022/3/9.
//

#import <Foundation/Foundation.h>
#import "MFAnnotation.h"

NS_ASSUME_NONNULL_BEGIN

@interface MFAnnotationDefinition : NSObject

@property (strong, nonatomic) NSArray<MFAnnotation *> *annotationList;

- (nullable MFAnnotation *)annotationByName:(NSString *)annotationName;

@end

NS_ASSUME_NONNULL_END
