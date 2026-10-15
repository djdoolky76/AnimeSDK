#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPKNJAMIKEA.h"
#include "unitysdk/RPG/GameCore/BattleEventCreateType.h"
class LHHEGNEBMLN;
namespace RPG::GameCore { class BattleEventDataComponent; }
namespace RPG::GameCore { class BattleEventRow; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class Object; }

#define ABBLGHINPMK_CTOR_OFFSET UNITYSDK_OFFSET(0xB0EA920)
#define ABBLGHINPMK_DJKGAIOBGJF_OFFSET UNITYSDK_OFFSET(0xB0EAAC0)
#define ABBLGHINPMK_KFHCMJCFINH_OFFSET UNITYSDK_OFFSET(0xB0EA930)
#define ABBLGHINPMK_LGPLAOGBGLM_OFFSET UNITYSDK_OFFSET(0xB0EA950)
#define ABBLGHINPMK_MPKLOIGJIPG_OFFSET UNITYSDK_OFFSET(0xB0EA940)
#define ABBLGHINPMK_NKEBOIHBCCD_OFFSET UNITYSDK_OFFSET(0xB0EB330)
#define ABBLGHINPMK_PKMHODPACHF_OFFSET UNITYSDK_OFFSET(0xB0EB390)

inline static constexpr unsigned int ABBLGHINPMK_TypeDefinitionIndex = 56886;

	class ABBLGHINPMK : public ::NPKNJAMIKEA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::BattleEventDataComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleEventDataComponent*))((::PBYTE)hIl2Cpp + ABBLGHINPMK_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::BattleEventCreateType KFHCMJCFINH()
		{
			return ((::RPG::GameCore::BattleEventCreateType(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBLGHINPMK_KFHCMJCFINH_OFFSET))(this);
		}

		::System::Boolean MPKLOIGJIPG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBLGHINPMK_MPKLOIGJIPG_OFFSET))(this);
		}

		::System::Void LGPLAOGBGLM(::RPG::GameCore::BattleEventRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleEventRow*))((::PBYTE)hIl2Cpp + ABBLGHINPMK_LGPLAOGBGLM_OFFSET))(this, a1);
		}

		::System::Void DJKGAIOBGJF(::RPG::GameCore::TurnBasedAbilityComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + ABBLGHINPMK_DJKGAIOBGJF_OFFSET))(this, a1);
		}

		::System::Void NKEBOIHBCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBLGHINPMK_NKEBOIHBCCD_OFFSET))(this);
		}

		::System::Void PKMHODPACHF(::LHHEGNEBMLN* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LHHEGNEBMLN*, ::System::Object*))((::PBYTE)hIl2Cpp + ABBLGHINPMK_PKMHODPACHF_OFFSET))(this, a1, a2);
		}

	};
