#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EOptionsMode_TypeDefinitionIndex = 13629;

	enum class EOptionsMode : ::System::Int16
	{
		RandomByNum = 2,
		Normal = 0,
		SelectByGroup = 1,
		EnumCount = 3,
	};
}
