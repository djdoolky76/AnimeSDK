#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace DG::Tweening::Plugins::Options
{
	inline static constexpr unsigned int ColorOptions_TypeDefinitionIndex = 28003;

	struct alignas(4) ColorOptions
	{
		::System::Boolean alphaOnly; // 0x10
	};
}
