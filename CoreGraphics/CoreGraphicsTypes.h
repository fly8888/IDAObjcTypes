#import "../Types.h"

#ifdef x86
typedef float CGFloat;
#else
typedef double CGFloat;
#endif

typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct CGRect {
    CGPoint origin;
    CGSize size;
} CGRect;

typedef struct CGAffineTransform {
   CGFloat a;
   CGFloat b;
   CGFloat c;
   CGFloat d;
   CGFloat tx;
   CGFloat ty;
} CGAffineTransform;

typedef struct CGContext *CGContextRef;
typedef struct CGImage *CGImageRef;
typedef struct CGColorSpace *CGColorSpaceRef;
typedef struct CGColor *CGColorRef;
typedef struct CGGradient *CGGradientRef;
typedef struct CGDataProvider *CGDataProviderRef;
typedef const struct CGPath *CGPathRef;
typedef struct CGPath *CGMutablePathRef;

typedef int32_t CGPathDrawingMode;
typedef uint32_t CGImageAlphaInfo;
typedef uint32_t CGBitmapInfo;
typedef int32_t CGColorRenderingIntent;
typedef int32_t CGPathElementType;
typedef int32_t CGLineCap;
typedef int32_t CGLineJoin;
typedef uint32_t CGGradientDrawingOptions;
typedef uint32_t CGRectEdge;
typedef unsigned short CGFontIndex;

typedef CGFontIndex CGGlyph;

struct CGPathElement {
    CGPathElementType type;
    CGPoint *points;
};

typedef void (*CGPathApplierFunction)(void *info, const CGPathElement *element);

CGAffineTransform CGAffineTransformIdentity;

CGRect CGRectZero;
CGRect CGRectNull;
CGSize CGSizeZero;
CGPoint CGPointZero;