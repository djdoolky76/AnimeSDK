#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int GraphicSettingProfileType_TypeDefinitionIndex = 89146;

	enum class GraphicSettingProfileType : ::System::Int32
	{
		ShadowQuality = 5,
		SceneQuality = 18,
		ModelQuality = 12,
		RenderScale = 4,
		VSync = 3,
		ParticleQuality = 10,
		AnisotropicSampling = 23,
		ShadingQuality = 17,
		FrameRate = 2,
		Distortion = 16,
		GlobalIllumination = 21,
		LoopSubdivision = 22,
		Bloom = 8,
		VolumetricCloud = 13,
		AntiAlias = 6,
		MirrorReflection = 9,
		VolumetricFog = 7,
		AutoExposure = 20,
		None = 0,
		DpiFactor = 11,
		SceneGlare = 19,
		MotionBlur = 15,
		DepthOfField = 14,
	};
}
