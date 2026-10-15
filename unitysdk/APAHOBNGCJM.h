#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNALBIEDNLH.h"
class CIIKBJFOKHL;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_WaitTime; }

#define APAHOBNGCJM_CTOR_OFFSET UNITYSDK_OFFSET(0x158BCA80)
#define APAHOBNGCJM_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x158BCC90)
#define APAHOBNGCJM_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x158BCB10)
#define APAHOBNGCJM_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x158BCB60)
#define APAHOBNGCJM_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x158BCCD0)
#define APAHOBNGCJM_NBBBMBCHLGH_OFFSET UNITYSDK_OFFSET(0x158BCC30)

inline static constexpr unsigned int APAHOBNGCJM_TypeDefinitionIndex = 77917;

	class APAHOBNGCJM : public ::JNALBIEDNLH
	{
	public:
		::RPG::GameCore::ChenLingBattleAbility_WaitTime* FLCJGKLKHME; // 0x28
		::System::Single COCJDAKNIAP; // 0x30
		::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::CIIKBJFOKHL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::CIIKBJFOKHL*))((::PBYTE)hIl2Cpp + APAHOBNGCJM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APAHOBNGCJM_HKKFFCBJOKM_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + APAHOBNGCJM_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Single NBBBMBCHLGH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + APAHOBNGCJM_NBBBMBCHLGH_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APAHOBNGCJM_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APAHOBNGCJM_KHGIKBFDLFB_OFFSET))(this);
		}

	};
