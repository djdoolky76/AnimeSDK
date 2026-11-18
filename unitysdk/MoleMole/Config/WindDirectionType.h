#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int WindDirectionType_TypeDefinitionIndex = 55729;

	enum class WindDirectionType : ::System::Int32
	{
		WorldX = 2,
		Direct = 1,
		WorldZ = 4,
		WorldY = 3,
		LinkObj = 0,
	};
}
