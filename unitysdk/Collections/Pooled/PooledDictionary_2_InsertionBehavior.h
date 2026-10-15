#pragma once
#include "unitysdk/unitysdk.h"

namespace Collections::Pooled
{
	inline static constexpr unsigned int PooledDictionary_2_InsertionBehavior_TypeDefinitionIndex = 5102;

	enum class PooledDictionary_2_InsertionBehavior : ::System::Byte
	{
		None = 0,
		OverwriteExisting = 1,
		ThrowOnExisting = 2,
	};
}
