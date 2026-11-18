#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Spine { class Animation; }

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonMecanim_MecanimTranslator_ClipInfo_TypeDefinitionIndex = 38143;

	struct alignas(8) SkeletonMecanim_MecanimTranslator_ClipInfo
	{
		::Spine::Animation* animation; // 0x10
		::System::Single weight; // 0x18
		::System::Single length; // 0x1C
		::System::Boolean isLooping; // 0x20
	};
}
