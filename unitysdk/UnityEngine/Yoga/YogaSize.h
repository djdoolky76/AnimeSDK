#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Yoga
{
	struct alignas(4) YogaSize
	{
		::System::Single width; // 0x10
		::System::Single height; // 0x14
	};
}
