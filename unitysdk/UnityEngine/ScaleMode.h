#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ScaleMode_TypeDefinitionIndex = 6415;

	enum class ScaleMode : ::System::Int32
	{
		StretchToFill = 0,
		ScaleAndCrop = 1,
		ScaleToFit = 2,
	};
}
