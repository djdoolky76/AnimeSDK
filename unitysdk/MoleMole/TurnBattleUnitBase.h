#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NEOHMGDKACL.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_TURNBATTLEUNITBASE_ONADDEDTOROUND_OFFSET UNITYSDK_OFFSET(0x1A0BC920)
#define MOLEMOLE_TURNBATTLEUNITBASE_ONREMOVEDFROMROUND_OFFSET UNITYSDK_OFFSET(0x1A0BC970)
#define MOLEMOLE_TURNBATTLEUNITBASE_ONROUNDSTART_OFFSET UNITYSDK_OFFSET(0x1A0BC9B0)
#define MOLEMOLE_TURNBATTLEUNITBASE_ONTURNOVER_OFFSET UNITYSDK_OFFSET(0x1A0BCA30)
#define MOLEMOLE_TURNBATTLEUNITBASE_ONTURNSTART_OFFSET UNITYSDK_OFFSET(0x1A0BC9F0)
#define MOLEMOLE_TURNBATTLEUNITBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0BCA70)

namespace MoleMole
{
	inline static constexpr unsigned int TurnBattleUnitBase_TypeDefinitionIndex = 61615;

	class TurnBattleUnitBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEUNITBASE__CTOR_OFFSET))(this);
		}

		::System::Void OnAddedToRound(::NEOHMGDKACL reason)
		{
			return ((::System::Void(*)(::PVOID, ::NEOHMGDKACL))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEUNITBASE_ONADDEDTOROUND_OFFSET))(this, reason);
		}

		::System::Void OnRemovedFromRound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEUNITBASE_ONREMOVEDFROMROUND_OFFSET))(this);
		}

		::System::Void OnRoundStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEUNITBASE_ONROUNDSTART_OFFSET))(this);
		}

		::System::Void OnTurnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEUNITBASE_ONTURNSTART_OFFSET))(this);
		}

		::System::Void OnTurnOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEUNITBASE_ONTURNOVER_OFFSET))(this);
		}
	};
}
