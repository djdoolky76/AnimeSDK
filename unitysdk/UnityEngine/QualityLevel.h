#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int QualityLevel_TypeDefinitionIndex = 5225;

	enum class QualityLevel : ::System::Int32
	{
		Fastest = 0,
		Fast = 1,
		Simple = 2,
		Good = 3,
		Beautiful = 4,
		Fantastic = 5,
	};
}
