#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define NPCCROWD_ABILITY_NAVIGATIONOBSTACLEITEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x6519C0)
#define NPCCROWD_ABILITY_NAVIGATIONOBSTACLEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x359150)
#define NPCCROWD_ABILITY_NAVIGATIONOBSTACLEITEM___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x651A20)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NavigationObstacleItem_TypeDefinitionIndex = 82785;

	struct alignas(4) NavigationObstacleItem
	{
		::System::UInt32 EntityId; // 0x10

		::System::Void _ctor(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NAVIGATIONOBSTACLEITEM__CTOR_OFFSET))(this, entityId);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NAVIGATIONOBSTACLEITEM_TOSTRING_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NAVIGATIONOBSTACLEITEM___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
