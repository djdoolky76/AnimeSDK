#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EGenderType_TypeDefinitionIndex = 10112;

	enum class EGenderType : ::System::Int16
	{
		Male = 1,
		Unisex = 0,
		Female = 2,
	};
}
