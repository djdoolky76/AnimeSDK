#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int Endianness_TypeDefinitionIndex = 3301;

	enum class Endianness : ::System::Int32
	{
		Network = 0,
		Native = 16,
	};
}
