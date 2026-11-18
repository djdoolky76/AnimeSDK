#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonUpdateSystem_SkeletonPartitionRange_TypeDefinitionIndex = 38214;

	struct alignas(4) SkeletonUpdateSystem_SkeletonPartitionRange
	{
		::System::Int32 rangeStart; // 0x10
		::System::Int32 rangeEndExclusive; // 0x14
		::System::Int32 threadIndex; // 0x18
	};
}
