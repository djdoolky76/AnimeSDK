#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int SkinWeights_TypeDefinitionIndex = 5234;

	enum class SkinWeights : ::System::Int32
	{
		OneBone = 1,
		TwoBones = 2,
		FourBones = 4,
		Unlimited = 255,
	};
}
