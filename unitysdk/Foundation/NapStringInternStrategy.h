#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int NapStringInternStrategy_TypeDefinitionIndex = 7993;

	enum class NapStringInternStrategy : ::System::Int32
	{
		Disable = 0,
		LRU = 2,
		Simple = 1,
	};
}
