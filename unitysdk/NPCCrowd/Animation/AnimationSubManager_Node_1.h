#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_Node_1_TypeDefinitionIndex = 81254;

	template <typename T>
	struct alignas(8) AnimationSubManager_Node_1
	{
		T Data; // 0x0
		::System::Int32 Next; // 0x0
	};
}
