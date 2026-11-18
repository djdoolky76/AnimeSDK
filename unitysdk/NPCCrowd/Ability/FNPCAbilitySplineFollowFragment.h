#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_ABILITY_FNPCABILITYSPLINEFOLLOWFRAGMENT_GET_ENABLE_OFFSET UNITYSDK_OFFSET(0x3583D0)
#define NPCCROWD_ABILITY_FNPCABILITYSPLINEFOLLOWFRAGMENT_SETENABLE_OFFSET UNITYSDK_OFFSET(0x591650)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int FNPCAbilitySplineFollowFragment_TypeDefinitionIndex = 72209;

	struct alignas(4) FNPCAbilitySplineFollowFragment
	{
		::System::Boolean _enable; // 0x10
		::System::Boolean IsStarted; // 0x11
		::System::Boolean IsFinished; // 0x12
		::System::Boolean IsStopped; // 0x13
		::System::Boolean SnapToGround; // 0x14
		::System::Boolean Loop; // 0x15
		::System::Byte _padding0[0x2];
		::System::Int32 CacheId; // 0x18
		::System::Int32 SampleIndex; // 0x1C
		::System::Single ProgressDistance; // 0x20
		::System::Single Speed; // 0x24
		::System::Single StopRadius; // 0x28
		::System::Single DistanceToEnd; // 0x2C

		::System::Boolean get_Enable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYSPLINEFOLLOWFRAGMENT_GET_ENABLE_OFFSET))(this);
		}

		::System::Void SetEnable(::System::Boolean enable, ::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYSPLINEFOLLOWFRAGMENT_SETENABLE_OFFSET))(this, enable, entityId);
		}
	};
}
