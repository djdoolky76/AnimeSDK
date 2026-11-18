#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int UvModes_TypeDefinitionIndex = 27384;

	enum class UvModes : ::System::Int32
	{
		GeneralNormalized = 2,
		General = 0,
		Polar = 1,
	};
}
