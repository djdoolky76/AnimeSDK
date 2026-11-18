#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int TrafficLightType_TypeDefinitionIndex = 88218;

	enum class TrafficLightType : ::System::Int32
	{
		Red_Breath = 1,
		Green = 3,
		None = 5,
		Red = 0,
		Green_Breath = 2,
		Yellow = 4,
	};
}
