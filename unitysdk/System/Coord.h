#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	inline static constexpr unsigned int Coord_TypeDefinitionIndex = 458;

	struct alignas(4) Coord
	{
		::System::Int16 X; // 0x10
		::System::Int16 Y; // 0x12
	};
}
