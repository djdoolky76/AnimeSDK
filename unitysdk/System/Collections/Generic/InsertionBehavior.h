#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Collections::Generic
{
	inline static constexpr unsigned int InsertionBehavior_TypeDefinitionIndex = 1534;

	enum class InsertionBehavior : ::System::Byte
	{
		None = 0,
		OverwriteExisting = 1,
		ThrowOnExisting = 2,
	};
}
