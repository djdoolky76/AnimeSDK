#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPKNJAMIKEA.h"
#include "unitysdk/RPG/GameCore/BattleEventCreateType.h"
namespace RPG::GameCore { class BattleEventDataComponent; }
namespace RPG::GameCore { class BattleEventRow; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define HIEEPCHOJBM_CTOR_OFFSET UNITYSDK_OFFSET(0x15CE26F0)
#define HIEEPCHOJBM_DJKGAIOBGJF_OFFSET UNITYSDK_OFFSET(0x15CE2860)
#define HIEEPCHOJBM_KFHCMJCFINH_OFFSET UNITYSDK_OFFSET(0x15CE2700)
#define HIEEPCHOJBM_LGPLAOGBGLM_OFFSET UNITYSDK_OFFSET(0x15CE2710)
#define HIEEPCHOJBM_MPKLOIGJIPG_OFFSET UNITYSDK_OFFSET(0x15CE2F60)
#define HIEEPCHOJBM_NKEBOIHBCCD_OFFSET UNITYSDK_OFFSET(0x15CE2F00)

	class HIEEPCHOJBM : public ::NPKNJAMIKEA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::BattleEventDataComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleEventDataComponent*))((::PBYTE)hIl2Cpp + HIEEPCHOJBM_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::BattleEventCreateType KFHCMJCFINH()
		{
			return ((::RPG::GameCore::BattleEventCreateType(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEEPCHOJBM_KFHCMJCFINH_OFFSET))(this);
		}

		::System::Void LGPLAOGBGLM(::RPG::GameCore::BattleEventRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleEventRow*))((::PBYTE)hIl2Cpp + HIEEPCHOJBM_LGPLAOGBGLM_OFFSET))(this, a1);
		}

		::System::Void DJKGAIOBGJF(::RPG::GameCore::TurnBasedAbilityComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + HIEEPCHOJBM_DJKGAIOBGJF_OFFSET))(this, a1);
		}

		::System::Void NKEBOIHBCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEEPCHOJBM_NKEBOIHBCCD_OFFSET))(this);
		}

		::System::Boolean MPKLOIGJIPG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEEPCHOJBM_MPKLOIGJIPG_OFFSET))(this);
		}

	};
