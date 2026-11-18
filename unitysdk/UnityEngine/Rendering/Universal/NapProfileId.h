#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapProfileId_TypeDefinitionIndex = 26568;

	enum class NapProfileId : ::System::Int32
	{
		ComicDotOutline = 10,
		PartialBlur = 5,
		PostProcessPass_Render = 18,
		CharacterIgnisFatuus = 16,
		PostProcessPass_RenderFinalPass = 17,
		UberPost = 12,
		MKGlow = 13,
		UnsharpMask = 11,
		CharacterGhost = 15,
		OutlineEffect = 2,
		Pixelation = 14,
		ComicDot = 6,
		NapSecondaryBloom = 3,
		NapBloom = 1,
		DistortionBlit = 4,
		VREffects = 7,
		VREffectOutline = 9,
		VREffectDistortion = 8,
		RadialBlur = 0,
	};
}
