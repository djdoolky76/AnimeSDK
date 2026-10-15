#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNALBIEDNLH.h"
class CIIKBJFOKHL;
class JNALBIEDNLH;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HNBNMCOEPJN_CTOR_OFFSET UNITYSDK_OFFSET(0x15D8C540)
#define HNBNMCOEPJN_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x15D8CCF0)
#define HNBNMCOEPJN_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x15D8C6C0)
#define HNBNMCOEPJN_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15D8C8B0)
#define HNBNMCOEPJN_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x15D8CAF0)

	class HNBNMCOEPJN : public ::JNALBIEDNLH
	{
	public:
		::System::Collections::Generic::List_1<::JNALBIEDNLH*>* ACGDFPBKEBN; // 0x28
		::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::CIIKBJFOKHL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::CIIKBJFOKHL*))((::PBYTE)hIl2Cpp + HNBNMCOEPJN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNBNMCOEPJN_HKKFFCBJOKM_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HNBNMCOEPJN_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNBNMCOEPJN_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNBNMCOEPJN_HADOHLNHHGB_OFFSET))(this);
		}

	};
