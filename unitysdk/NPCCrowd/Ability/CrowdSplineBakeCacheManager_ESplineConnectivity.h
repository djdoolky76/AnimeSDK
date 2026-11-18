#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int CrowdSplineBakeCacheManager_ESplineConnectivity_TypeDefinitionIndex = 38852;

	enum class CrowdSplineBakeCacheManager_ESplineConnectivity : ::System::Int32
	{
		Open = 1,
		Keep = 0,
		Close = 2,
	};
}
