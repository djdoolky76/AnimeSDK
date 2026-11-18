#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Spine::Unity { class ISkeletonRenderer; }

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonUpdateSystem_SkeletonRendererListModification_TypeDefinitionIndex = 38216;

	struct alignas(8) SkeletonUpdateSystem_SkeletonRendererListModification
	{
		::System::Boolean isAdd; // 0x10
		::System::Byte _padding0[0x7];
		::Spine::Unity::ISkeletonRenderer* renderer; // 0x18
	};
}
