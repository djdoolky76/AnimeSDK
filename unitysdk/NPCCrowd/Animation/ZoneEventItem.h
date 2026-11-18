#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MEFIOFBDFFL_IECMEECNKCP.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation { class AnimatorZoneSegmentWrap; }

#define NPCCROWD_ANIMATION_ZONEEVENTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x74C470)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int ZoneEventItem_TypeDefinitionIndex = 56242;

	struct alignas(8) ZoneEventItem
	{
		::System::UInt32 entityId; // 0x10
		::System::Single normalizedTime; // 0x14
		::NPCCrowd::Animation::AnimatorZoneSegmentWrap* wrap; // 0x18
		::MEFIOFBDFFL_IECMEECNKCP type; // 0x20

		::System::Void _ctor(::System::UInt32 entityId, ::System::Single normalizedTime, ::NPCCrowd::Animation::AnimatorZoneSegmentWrap* wrap, ::MEFIOFBDFFL_IECMEECNKCP type)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::NPCCrowd::Animation::AnimatorZoneSegmentWrap*, ::MEFIOFBDFFL_IECMEECNKCP))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ZONEEVENTITEM__CTOR_OFFSET))(this, entityId, normalizedTime, wrap, type);
		}
	};
}
