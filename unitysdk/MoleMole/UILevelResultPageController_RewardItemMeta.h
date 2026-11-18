#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EBattleRewardType.h"
#include "unitysdk/System/ValueType.h"

class HGAJKHIMKJP;

#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER_REWARDITEMMETA__CTOR_OFFSET UNITYSDK_OFFSET(0x7E7020)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelResultPageController_RewardItemMeta_TypeDefinitionIndex = 89104;

	struct alignas(8) UILevelResultPageController_RewardItemMeta
	{
		::System::Int32 id; // 0x10
		::Share::EBattleRewardType type; // 0x14
		::HGAJKHIMKJP* item; // 0x18

		::System::Void _ctor(::System::Int32 id, ::Share::EBattleRewardType type, ::HGAJKHIMKJP* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Share::EBattleRewardType, ::HGAJKHIMKJP*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER_REWARDITEMMETA__CTOR_OFFSET))(this, id, type, item);
		}
	};
}
