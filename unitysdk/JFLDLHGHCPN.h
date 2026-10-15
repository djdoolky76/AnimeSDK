#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPKNJAMIKEA.h"
#include "unitysdk/RPG/GameCore/BattleEventCreateType.h"
namespace RPG::GameCore { class BattleEventDataComponent; }
namespace RPG::GameCore { class BattleEventRow; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define JFLDLHGHCPN_CTOR_OFFSET UNITYSDK_OFFSET(0x166506D0)
#define JFLDLHGHCPN_DJKGAIOBGJF_OFFSET UNITYSDK_OFFSET(0x16650740)
#define JFLDLHGHCPN_KFHCMJCFINH_OFFSET UNITYSDK_OFFSET(0x166506E0)
#define JFLDLHGHCPN_LGPLAOGBGLM_OFFSET UNITYSDK_OFFSET(0x166506F0)
#define JFLDLHGHCPN_NKEBOIHBCCD_OFFSET UNITYSDK_OFFSET(0x16650950)

inline static constexpr unsigned int JFLDLHGHCPN_TypeDefinitionIndex = 56890;

	class JFLDLHGHCPN : public ::NPKNJAMIKEA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::BattleEventDataComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleEventDataComponent*))((::PBYTE)hIl2Cpp + JFLDLHGHCPN_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::BattleEventCreateType KFHCMJCFINH()
		{
			return ((::RPG::GameCore::BattleEventCreateType(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLDLHGHCPN_KFHCMJCFINH_OFFSET))(this);
		}

		::System::Void LGPLAOGBGLM(::RPG::GameCore::BattleEventRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleEventRow*))((::PBYTE)hIl2Cpp + JFLDLHGHCPN_LGPLAOGBGLM_OFFSET))(this, a1);
		}

		::System::Void DJKGAIOBGJF(::RPG::GameCore::TurnBasedAbilityComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + JFLDLHGHCPN_DJKGAIOBGJF_OFFSET))(this, a1);
		}

		::System::Void NKEBOIHBCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLDLHGHCPN_NKEBOIHBCCD_OFFSET))(this);
		}

	};
