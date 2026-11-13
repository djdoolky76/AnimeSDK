#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CustomQueryType_TypeDefinitionIndex = 38460;

	enum class CustomQueryType : ::System::Int32
	{
		kQueryStart = 0,
		kQueryLight = 0,
		kQueryAreaLight = 1,
		kQueryStencilLight = 2,
		kQueryMainLight = 3,
		kQueryMainLightProbe = 4,
		kQueryProbe = 5,
		kQueryBoxProjectionProbe = 6,
		kQueryVolumetricLightBeam = 7,
		kQueryLocalFogSphere = 8,
		kQueryLocalAmbientVolume = 9,
		kQueryEasyFog = 10,
		kQueryCustomEffect = 11,
		kQueryHybridTransparent = 12,
		kQueryBillboard = 13,
		kQueryVolumetricLight = 14,
		kQueryLocalAmbient = 15,
		kQueryLineGlow = 16,
		kQueryCharacterShadow = 17,
		kQueryFogEmissionBakeVolume = 18,
		kQueryFogVolume = 19,
		kQueryVoxelIrradianceCache = 20,
		kQueryGPUParticles = 21,
		kOcclusionQueryCount = 22,
		kQueryDecalLow = 22,
		kQueryDecalMiddle = 23,
		kQueryDecalHigh = 24,
		kQueryDecalVeryHigh = 25,
		kQuerySSGI = 26,
		kQueryCount = 27,
	};
}
