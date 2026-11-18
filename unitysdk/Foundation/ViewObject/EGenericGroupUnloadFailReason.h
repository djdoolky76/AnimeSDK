#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int EGenericGroupUnloadFailReason_TypeDefinitionIndex = 69502;

	enum class EGenericGroupUnloadFailReason : ::System::Int32
	{
		None = 0,
		NotLocalInstance = 2,
		InstanceNotFound = 1,
		UnloadInProgress = 3,
	};
}
