#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int FNPCCrowdAvatarDitherInputFragment_TypeDefinitionIndex = 81336;

	struct alignas(4) FNPCCrowdAvatarDitherInputFragment
	{
		::System::Boolean InputValid; // 0x10
		::System::Boolean StateValid; // 0x11
		::System::Boolean StartFadeOutFromAbility; // 0x12
		::System::Boolean InputCollisionDither; // 0x13
		::System::Boolean HasMaterial; // 0x14
		::System::Boolean ShouldFadeOutOnDestroy; // 0x15
		::System::Boolean CurrentStartFadeOut; // 0x16
		::System::Boolean CurrentCollisionDither; // 0x17
	};
}
