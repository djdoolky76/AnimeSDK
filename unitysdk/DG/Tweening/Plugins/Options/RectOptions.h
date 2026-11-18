#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace DG::Tweening::Plugins::Options
{
	inline static constexpr unsigned int RectOptions_TypeDefinitionIndex = 28005;

	struct alignas(4) RectOptions
	{
		::System::Boolean snapping; // 0x10
	};
}
