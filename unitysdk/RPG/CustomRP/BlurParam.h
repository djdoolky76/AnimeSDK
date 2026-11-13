#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int BlurParam_TypeDefinitionIndex = 38807;

	struct alignas(4) BlurParam
	{
		::System::Single BlurScale; // 0x10
		::System::Single Brightness; // 0x14
	};
}
