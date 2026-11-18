#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace DG::Tweening::Plugins::Options
{
	inline static constexpr unsigned int UintOptions_TypeDefinitionIndex = 28000;

	struct alignas(4) UintOptions
	{
		::System::Boolean isNegativeChangeValue; // 0x10
	};
}
