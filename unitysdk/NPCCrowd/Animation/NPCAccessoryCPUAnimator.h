#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_ANIMATION_NPCACCESSORYCPUANIMATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xB2D98C0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCAccessoryCPUAnimator_TypeDefinitionIndex = 45601;

	class NPCAccessoryCPUAnimator : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCACCESSORYCPUANIMATOR__CTOR_OFFSET))(this);
		}
	};
}
