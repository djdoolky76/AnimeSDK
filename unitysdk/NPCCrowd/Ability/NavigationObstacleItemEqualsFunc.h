#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItem.h"

#define NPCCROWD_ABILITY_NAVIGATIONOBSTACLEITEMEQUALSFUNC_EQUALS_OFFSET UNITYSDK_OFFSET(0x597550)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NavigationObstacleItemEqualsFunc_TypeDefinitionIndex = 89513;

	struct alignas(4) NavigationObstacleItemEqualsFunc
	{
		::System::Boolean Equals(::NPCCrowd::Ability::NavigationObstacleItem left, ::NPCCrowd::Ability::NavigationObstacleItem right)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItem))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NAVIGATIONOBSTACLEITEMEQUALSFUNC_EQUALS_OFFSET))(this, left, right);
		}
	};
}
