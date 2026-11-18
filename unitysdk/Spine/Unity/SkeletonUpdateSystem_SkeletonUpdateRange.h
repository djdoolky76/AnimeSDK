#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/UpdateTiming.h"
#include "unitysdk/System/ValueType.h"

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonUpdateSystem_SkeletonUpdateRange_TypeDefinitionIndex = 38213;

	struct alignas(4) SkeletonUpdateSystem_SkeletonUpdateRange
	{
		::System::Int32 rangeStart; // 0x10
		::System::Int32 rangeEndExclusive; // 0x14
		::System::Int32 taskIndex; // 0x18
		::System::Int32 frameCount; // 0x1C
		::Spine::Unity::UpdateTiming updateTiming; // 0x20
	};
}
