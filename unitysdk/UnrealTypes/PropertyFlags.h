#pragma once
#include "unitysdk/unitysdk.h"

namespace UnrealTypes
{
	inline static constexpr unsigned int PropertyFlags_TypeDefinitionIndex = 27800;

	enum class PropertyFlags : ::System::UInt32
	{
		None = 0,
		Edit = 1,
		IsPlainOldData = 2,
		CanZeroCreate = 4,
		ShouldDispose = 8,
	};
}
