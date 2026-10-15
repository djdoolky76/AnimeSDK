#pragma once
#include "unitysdk/unitysdk.h"

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int SDLPlayStation4NativeProfile_ProductId_TypeDefinitionIndex = 41287;

	enum class SDLPlayStation4NativeProfile_ProductId : ::System::UInt16
	{
		SONY_DS4 = 1476,
		SONY_DS4_DONGLE = 2976,
		SONY_DS4_SLIM = 2508,
	};
}
