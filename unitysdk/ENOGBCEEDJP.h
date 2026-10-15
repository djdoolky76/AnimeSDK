#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNALBIEDNLH.h"
class CIIKBJFOKHL;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_AddPhysicalForce; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENOGBCEEDJP_CTOR_OFFSET UNITYSDK_OFFSET(0x155B5440)
#define ENOGBCEEDJP_ELFDLGFCFOF_OFFSET UNITYSDK_OFFSET(0x155B55C0)
#define ENOGBCEEDJP_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x155B6020)
#define ENOGBCEEDJP_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x155B54D0)
#define ENOGBCEEDJP_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x155B5FC0)
#define ENOGBCEEDJP_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x155B6070)

	class ENOGBCEEDJP : public ::JNALBIEDNLH
	{
	public:
		::RPG::GameCore::ChenLingBattleAbility_AddPhysicalForce* IHEGMBAMJEN; // 0x28
		::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::CIIKBJFOKHL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::CIIKBJFOKHL*))((::PBYTE)hIl2Cpp + ENOGBCEEDJP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENOGBCEEDJP_HKKFFCBJOKM_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENOGBCEEDJP_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENOGBCEEDJP_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENOGBCEEDJP_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void ELFDLGFCFOF(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + ENOGBCEEDJP_ELFDLGFCFOF_OFFSET))(this, a1);
		}

	};
