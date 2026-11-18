#pragma once
#include "unitysdk/unitysdk.h"

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeRegionMode_TypeDefinitionIndex = 4272;

	enum class CodeRegionMode : ::System::Int32
	{
		End = 2,
		None = 0,
		Start = 1,
	};
}
