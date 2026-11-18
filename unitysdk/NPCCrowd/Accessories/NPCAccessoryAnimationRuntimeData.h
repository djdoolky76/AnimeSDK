#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATIONRUNTIMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x115B6D60)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryAnimationRuntimeData_TypeDefinitionIndex = 74102;

	class NPCAccessoryAnimationRuntimeData : public ::System::Object
	{
	public:
		::System::Int32 AnimationID; // 0x10
		::System::Boolean VisibilityInitialized; // 0x14
		::System::Boolean LastVisible; // 0x15

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATIONRUNTIMEDATA__CTOR_OFFSET))(this);
		}
	};
}
