#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_DICECOMBAT_DICECOMBATUIROLLCOUNTREFRESHPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xD648ED0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatUIRollCountRefreshParam_TypeDefinitionIndex = 78360;

	class DiceCombatUIRollCountRefreshParam : public ::System::Object
	{
	public:
		::System::Int32 RollCount; // 0x10
		::System::Int32 LeftRollCount; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUIROLLCOUNTREFRESHPARAM_CTOR_OFFSET))(this);
		}

	};
}
