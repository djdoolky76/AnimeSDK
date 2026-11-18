#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreePropertyAccessType_TypeDefinitionIndex = 31046;

	enum class StateTreePropertyAccessType : ::System::Byte
	{
		Offset = 0,
		Object = 1,
		WeakObject = 2,
		SoftObject = 3,
		ObjectInstance = 4,
		StructInstance = 5,
		IndexArray = 6,
	};
}
