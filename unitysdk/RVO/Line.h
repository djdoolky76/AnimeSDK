#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RVO/Vector2.h"

namespace RVO
{
	struct alignas(4) Line
	{
		::RVO::Vector2 direction; // 0x10
		::RVO::Vector2 point; // 0x18
	};
}
