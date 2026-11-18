#pragma once
#include "unitysdk/unitysdk.h"

namespace UnrealTypes
{
	inline static constexpr unsigned int PropertyBagResult_TypeDefinitionIndex = 27842;

	enum class PropertyBagResult : ::System::Byte
	{
		Success = 0,
		TypeMismatch = 1,
		OutOfBounds = 2,
		PropertyNotFound = 3,
	};
}
