//
//  QZReshapeFaceOptions.h
//  QZCameraKit
//
//  Created by henry on 2021/7/12.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface QZReshapeFaceOptions : NSObject
@property (nonatomic, assign) float ShouLian;       //瘦脸
@property (nonatomic, assign) float ShouLianV;      //V型瘦脸
@property (nonatomic, assign) float BiZi;           //调整鼻子
@property (nonatomic, assign) float ZuiBa;          //调整嘴巴
@property (nonatomic, assign) float QuanGu;         //瘦颧骨
@property (nonatomic, assign) float DaYan;          //大眼
@property (nonatomic, assign) float YuanYan;        //圆眼
@property (nonatomic, assign) float YanJu;          //眼距
@property (nonatomic, assign) float ChouLianStrength;    //丑脸力度
@property (nonatomic, assign) int ChouLianType;    //丑脸类型
@end

NS_ASSUME_NONNULL_END
