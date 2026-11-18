#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_NPCSPRINGATTACHMENT_SPRINGPARAMETERS__CTOR_OFFSET UNITYSDK_OFFSET(0x1004A860)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCSpringAttachment_SpringParameters_TypeDefinitionIndex = 49804;

	class NPCSpringAttachment_SpringParameters : public ::System::Object
	{
	public:
		::System::Single Stiffness; // 0x10
		::System::Single CriticalDampingFactor; // 0x14
		::System::Single Mass; // 0x18
		::System::Single TargetVelocityAmount; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPRINGATTACHMENT_SPRINGPARAMETERS__CTOR_OFFSET))(this);
		}
	};
}
