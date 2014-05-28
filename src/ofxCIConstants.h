#pragma once
#include <iostream>
typedef std::string OFX_FILTER_TYPE;

// CICategoryBlur
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_BOX_BLUR;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_DISC_BLUR;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_GAUSSIAN_BLUR;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_MEDIAN_FILTER;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_MOTION_BLUR;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_NOISE_REDUCTION;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_ZOOM_BLUR;

// CICategoryColorAdjustment
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_COLOR_CLAMP;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_COLOR_CONTROLS;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_COLOR_MATRIX;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_COLOR_POLYNOMIAL;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_EXPOSURE_ADJUST;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_GAMMA_ADJUST;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_HUE_ADJUST;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_LINEAR_TO_SRGB_TONE_CURVE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_SRGB_TONE_CURVE_TO_LINEAR;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_TEMPERATURE_AND_TINT;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_TONE_CURVE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_VIBRANCE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_WHITE_POINT_ADJUST;

// CICategoryColorEffect
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_COLOR_CROSS_POLYNOMIAL;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_COLOR_CUBE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_COLOR_CUBE_WITH_COLOR_SPACE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_COLOR_INVERT;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_COLOR_MAP;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_COLOR_MONOCHROME;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_COLOR_POSTERIZE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_FALSE_COLOR;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_MASK_TO_ALPHA;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_MAXIMUM_COMPONENT;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_MINIMUM_COMPONENT;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_PHOTO_EFFECT_CHROME;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_PHOTO_EFFECT_FADE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_PHOTO_EFFECT_INSTANT;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_PHOTO_EFFECT_MONO;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_PHOTO_EFFECT_NOIR;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_PHOTO_EFFECT_PROCESS;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_PHOTO_EFFECT_TONAL;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_PHOTO_EFFECT_TRANSFER;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_SEPIA_TONE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_VIGNETTE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_VIGNETTE_EFFECT;

// CICategoryCompositeOperation
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_ADDITION_COMPOSITING;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_COLOR_BLEND_MODE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_COLOR_BURN_BLEND_MODE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_COLOR_DODGE_BLEND_MODE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_DARKEN_BLEND_MODE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_DIFFERENCE_BLEND_MODE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_EXCLUSION_BLEND_MODE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_HARD_LIGHT_BLEND_MODE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_HUE_BLEND_MODE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_LIGHTEN_BLEND_MODE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_LUMINOSITY_BLEND_MODE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_MAXIMUM_COMPOSITING;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_MINIMUM_COMPOSITING;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_MULTIPLY_BLEND_MODE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_MULTIPLY_COMPOSITING;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_OVERLAY_BLEND_MODE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_SATURATION_BLEND_MODE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_SCREEN_BLEND_MODE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_SOFT_LIGHT_BLEND_MODE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_SOURCE_ATOP_COMPOSITING;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_SOURCE_IN_COMPOSITING;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_SOURCE_OUT_COMPOSITING;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_SOURCE_OVER_COMPOSITING;

// CICategoryDistortionEffect
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_BUMP_DISTORTION;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_BUMP_DISTORTION_LINEAR;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_CIRCLE_SPLASH_DISTORTION;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_CIRCULAR_WRAP;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_DROSTE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_DISPLACEMENT_DISTORTION;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_GLASS_DISTORTION;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_GLASS_LOZENGE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_HOLE_DISTORTION;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_LIGHT_TUNNEL;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_PINCH_DISTORTION;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_STRETCH_CROP;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_TORUS_LENS_DISTORTION;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_TWIRL_DISTORTION;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_VORTEX_DISTORTION;

// CICategoryGenerator
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_CHECKERBOARD_GENERATOR;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_CONSTANT_COLOR_GENERATOR;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_LENTICULAR_HALO_GENERATOR;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_QR_CODE_GENERATOR;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_RANDOM_GENERATOR;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_STAR_SHINE_GENERATOR;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_STRIPES_GENERATOR;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_SUNBEAMS_GENERATOR;

// CICategoryGeometryAdjustment
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_AFFINE_TRANSFORM;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_CROP;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_LANCZOS_SCALE_TRANSFORM;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_PERSPECTIVE_TRANSFORM;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_PERSPECTIVE_TRANSFORM_WITH_EXTENT;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_STRAIGHTEN_FILTER;

// CICategoryGradient
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_GAUSSIAN_GRADIENT;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_LINEAR_GRADIENT;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_RADIAL_GRADIENT;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_SMOOTH_LINEAR_GRADIENT;

// CICategoryHalftoneEffect
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_CIRCULAR_SCREEN;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_CMYK_HALFTONE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_DOT_SCREEN;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_HATCHED_SCREEN;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_LINE_SCREEN;

// CICategoryReduction
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_AREA_AVERAGE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_AREA_HISTOGRAM;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_ROW_AVERAGE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_COLUMN_AVERAGE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_HISTOGRAM_DISPLAY_FILTER;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_AREA_MAXIMUM;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_AREA_MINIMUM;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_AREA_MAXIMUM_ALPHA;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_AREA_MINIMUM_ALPHA;

// CICategorySharpen
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_SHARPEN_LUMINANCE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_UNSHARP_MASK;

// CICategoryStylize
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_BLEND_WITH_ALPHA_MASK;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_BLEND_WITH_MASK;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_BLOOM;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_COMIC_EFFECT;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_CONVOLUTION3X3;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_CONVOLUTION5X5;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_CONVOLUTION7X7;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_CONVOLUTION9_HORIZONTAL;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_CONVOLUTION9_VERTICAL;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_CRYSTALLIZE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_DEPTH_OF_FIELD;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_EDGES;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_EDGE_WORK;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_GLOOM;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_HEIGHT_FIELD_FROM_MASK;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_HEXAGONAL_PIXELLATE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_HIGHLIGHT_SHADOW_ADJUST;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_LINE_OVERLAY;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_PIXELLATE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_POINTILLIZE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_SHADED_MATERIAL;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_SPOT_COLOR;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_SPOT_LIGHT;

// CICategoryTileEffect
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_AFFINE_CLAMP;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_AFFINE_TILE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_EIGHTFOLD_REFLECTED_TILE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_FOURFOLD_REFLECTED_TILE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_FOURFOLD_ROTATED_TILE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_FOURFOLD_TRANSLATED_TILE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_GLIDE_REFLECTED_TILE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_KALEIDOSCOPE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_OP_TILE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_PARALLELOGRAM_TILE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_PERSPECTIVE_TILE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_SIXFOLD_REFLECTED_TILE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_SIXFOLD_ROTATED_TILE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_TRIANGLE_KALEIDOSCOPE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_TRIANGLE_TILE;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_TWELVEFOLD_REFLECTED_TILE;

// CICategoryTransition
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_BARS_SWIPE_TRANSITION;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_COPY_MACHINE_TRANSITION;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_DISINTEGRATE_WITH_MASK_TRANSITION;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_DISSOLVE_TRANSITION;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_FLASH_TRANSITION;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_MOD_TRANSITION;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_PAGE_CURL_TRANSITION;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_PAGE_CURL_WITH_SHADOW_TRANSITION;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_RIPPLE_TRANSITION;
extern const OFX_FILTER_TYPE OFX_FILTER_TYPE_SWIPE_TRANSITION;
