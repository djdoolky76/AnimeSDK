#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCPathGraphManager_PathFollowSortKey_TypeDefinitionIndex = 71332;

	struct alignas(4) NPCPathGraphManager_PathFollowSortKey
	{
		::System::Boolean Forward; // 0x10
		::System::Byte _padding0[0x1];
		::System::Int16 SplineNodeControlPointIndex; // 0x12
		::System::Single ProgressDistance; // 0x14
	};
}
