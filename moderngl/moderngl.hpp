#pragma once
#include "common.hpp"

enum QueryNames {
    MGL_TIME_ELAPSED,
    MGL_PRIMITIVES_GENERATED,
    MGL_SAMPLES_PASSED,
    MGL_ANY_SAMPLES_PASSED,
};

enum TextureTypes {
    MGL_TEXTURE_2D,
    MGL_TEXTURE_3D,
    MGL_TEXTURE_2D_ARRAY,
    MGL_TEXTURE_CUBE,
    MGL_TEXTURE_CUBE_ARRAY,
};

enum WrapModes {
    MGL_CLAMP_TO_EDGE_X = 0x000001,
    MGL_CLAMP_TO_EDGE_Y = 0x000100,
    MGL_CLAMP_TO_EDGE_Z = 0x010000,
    MGL_REPEAT_X = 0x000002,
    MGL_REPEAT_Y = 0x000200,
    MGL_REPEAT_Z = 0x020000,
    MGL_MIRRORED_REPEAT_X = 0x000004,
    MGL_MIRRORED_REPEAT_Y = 0x000400,
    MGL_MIRRORED_REPEAT_Z = 0x040000,
    MGL_MIRROR_CLAMP_TO_EDGE_X = 0x000008,
    MGL_MIRROR_CLAMP_TO_EDGE_Y = 0x000800,
    MGL_MIRROR_CLAMP_TO_EDGE_Z = 0x080000,
    MGL_CLAMP_TO_BORDER_X = 0x000010,
    MGL_CLAMP_TO_BORDER_Y = 0x001000,
    MGL_CLAMP_TO_BORDER_Z = 0x100000,
};

enum SamplerWrapModes {
    MGL_CLAMP_TO_EDGE = 0x01,
    MGL_REPEAT = 0x02,
    MGL_MIRRORED_REPEAT = 0x04,
    MGL_MIRROR_CLAMP_TO_EDGE = 0x08,
    MGL_CLAMP_TO_BORDER = 0x10,
};

enum MGLEnableFlag {
    MGL_NOTHING = 0,
    MGL_BLEND = 1,
    MGL_DEPTH_TEST = 2,
    MGL_CULL_FACE = 4,
};
