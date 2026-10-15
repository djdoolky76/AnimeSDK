#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SWRT/AABB.h"

namespace SWRT
{
	struct alignas(4) BVH2_AABBWrap
	{
		::SWRT::AABB AABB; // 0x10
		::System::Int32 Index; // 0x28
	};
}
