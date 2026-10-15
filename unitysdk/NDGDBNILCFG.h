#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNALBIEDNLH.h"
class ALMFLCJCHKP;
class CIIKBJFOKHL;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_PlayBatchAnimation; }

#define NDGDBNILCFG_CTOR_OFFSET UNITYSDK_OFFSET(0xBB23840)
#define NDGDBNILCFG_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xBB24030)
#define NDGDBNILCFG_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xBB238D0)
#define NDGDBNILCFG_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBB23FD0)
#define NDGDBNILCFG_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xBB24070)
#define NDGDBNILCFG_MHGJEAJIJMD_OFFSET UNITYSDK_OFFSET(0xBB23E70)

inline static constexpr unsigned int NDGDBNILCFG_TypeDefinitionIndex = 77910;

	class NDGDBNILCFG : public ::JNALBIEDNLH
	{
	public:
		::RPG::GameCore::ChenLingBattleAbility_PlayBatchAnimation* PMCNDAFDODO; // 0x28
		::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::CIIKBJFOKHL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::CIIKBJFOKHL*))((::PBYTE)hIl2Cpp + NDGDBNILCFG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDGDBNILCFG_HKKFFCBJOKM_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NDGDBNILCFG_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDGDBNILCFG_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDGDBNILCFG_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Single MHGJEAJIJMD(::ALMFLCJCHKP* a1)
		{
			return ((::System::Single(*)(::PVOID, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + NDGDBNILCFG_MHGJEAJIJMD_OFFSET))(this, a1);
		}

	};
