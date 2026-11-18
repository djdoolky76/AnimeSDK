#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace DG::Tweening::Plugins::Options
{
	inline static constexpr unsigned int FloatOptions_TypeDefinitionIndex = 28004;

	struct alignas(4) FloatOptions
	{
		::System::Boolean snapping; // 0x10
	};
}
