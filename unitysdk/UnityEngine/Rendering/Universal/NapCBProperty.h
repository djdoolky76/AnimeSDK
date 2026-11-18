#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapCBProperty_TypeDefinitionIndex = 26416;

	enum class NapCBProperty : ::System::Int32
	{
		PerObjectShadowUvMatrix = 33,
		HeadSphereNormalCenter = 4,
		PerObjectShadowResolveST = 38,
		AmbientLightLast = 24,
		CharacterMainLightData1 = 2,
		PerObjectShadowUvMatrixLast = 36,
		CharacterMainLightData = 1,
		MiddlePointPosition = 0,
		PerObjectShadowOffsetWS = 39,
		Count = 41,
		ToonLightLast = 32,
		HeadMatrixWS2OS = 5,
		AmbientGradientShape = 3,
		AmbientLightStart = 9,
		EntityInfo = 40,
		PerObjectShadowData = 37,
		ToonLightStart = 25,
	};
}
