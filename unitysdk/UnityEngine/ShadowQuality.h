#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ShadowQuality_TypeDefinitionIndex = 5227;

	enum class ShadowQuality : ::System::Int32
	{
		Disable = 0,
		HardOnly = 1,
		All = 2,
	};
}
