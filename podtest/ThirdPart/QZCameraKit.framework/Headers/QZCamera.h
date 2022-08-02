//
//  QZCamera.h
//  QZCameraKit
//
//  Created by henry on 2021/7/7.
//

#import <Foundation/Foundation.h>
#import <AVKit/AVKit.h>

#import <QZCameraKit/QZBeautyEffectOptions.h>
#import <QZCameraKit/QZReshapeFaceOptions.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, QZPreviewMode) {
    kPreviewModeStretch,                   //拉伸至全屏
    kPreviewModePreserveAspectRatio,       //按比例显示，可能会有黑边
    kPreviewModePreserveAspectRatioAndFill //按比例拉伸至全屏，可能会损失部分画面
};

typedef NS_ENUM(NSUInteger, QZPreviewResolution) {
    kPreviewResolution640x480,
    kPreviewResolution960x540,
    kPreviewResolution1280x720,
    kPreviewResolution1920x1080
};

@protocol QZCameraDelegate <NSObject>
@optional
- (void)frameProcessing:(CVPixelBufferRef)ref;

@end

@interface QZCamera : NSObject

// 预览页面
@property (nonatomic, strong) UIView *preview;

// 预览画面比例
@property (nonatomic, assign) QZPreviewMode previewMode;

// 预览画面尺寸，默认全屏
@property (nonatomic, assign) CGRect previewRect;

@property (nonatomic, weak) id<QZCameraDelegate> delegate;

- (void)startPreview;
- (void)stopPreview;

- (void)setupPreview:(QZPreviewResolution)resolution framerate:(NSUInteger)fps;

- (void)enableVideo;
- (void)disableVideo;

// 切换前后置摄像头，默认前置
- (void)switchCamera;

// 使用美颜，默认开启，使用美颜默认参数
- (void)enableBeauty;
// 关闭美颜
- (void)disableBeauty;
// 美颜参数调节
- (void)setBeautyEffectOptions:(QZBeautyEffectOptions *)options;

// 使用微整形，默认开启，使用微整形默认参数
- (void)enableReshapeFace;
// 关闭微整形
- (void)disableReshapeFace;
// 微整形参数调节
- (void)setReshapeFaceOptions:(QZReshapeFaceOptions *)options;

// 设置水印，默认开启
- (void)enableWatermark;
- (void)disableWatermark;
/*
 rect:x,y,width,height都是像素
 */
- (void)setWatermarkImage:(UIImage *)image position:(CGRect)rect;

// 设置水印，默认开启
- (void)enableLabelImage;
- (void)disableLabelImage;
/*
 设置可拖动标签
 rect:x,y,width,height都是像素
 */
- (void)setLabelImage:(UIImage *)image position:(CGRect)rect;

/*
 修改标签的位置
 rect:x,y,width,height都是像素
 */
- (void)updateLabelRect:(CGRect)rect;

/*
 设置标签队列
 imageArray为UIImage队列
 rectArray为CGRect队列，需要将结构体类型的CGRect转换成对象类NSValue
 */
- (void)setImageWithPosArray:(NSMutableArray  *)imageArray posArray:(NSMutableArray *)rectArray;

- (void)enableSticker;
- (void)disableSticker;
- (void)setStickerImageArray:(NSMutableArray *)imageArray AlignType:(NSString *)aT Index0:(int)i0 Index1:(int)i1 Index2:(int)i2 Index3:(int)i3;

- (void)enableLUT;
- (void)disableLUT;
- (void)setLUTIntensity:(float)intensity;
- (void)setLUTImage:(UIImage *)img;

+ (NSString *)version;
@end

NS_ASSUME_NONNULL_END
