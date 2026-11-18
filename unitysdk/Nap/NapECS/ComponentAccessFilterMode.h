#pragma once
#include "unitysdk/unitysdk.h"

namespace Nap::NapECS
{
	inline static constexpr unsigned int ComponentAccessFilterMode_TypeDefinitionIndex = 35970;

	enum class ComponentAccessFilterMode : ::System::Int32
	{
		OneOrMoreOf = 2,
		OneOf = 1,
		AllOf = 4,
		Negate = 128,
		None = 0,
	};
}
