#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/UpdateTiming.h"
#include "unitysdk/System/ValueType.h"

namespace Spine::Unity { class SkeletonAnimationBase; }

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonUpdateSystem_SkeletonAnimationListModification_TypeDefinitionIndex = 38215;

	struct alignas(8) SkeletonUpdateSystem_SkeletonAnimationListModification
	{
		::System::Boolean isAdd; // 0x10
		::System::Byte _padding0[0x3];
		::Spine::Unity::UpdateTiming timing; // 0x14
		::Spine::Unity::SkeletonAnimationBase* animation; // 0x18
	};
}
