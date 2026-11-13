#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNALBIEDNLH.h"
class CIIKBJFOKHL;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbilityModifierApplier; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OCBGMFLGCAJ_CKFMKCOAAPC_OFFSET UNITYSDK_OFFSET(0x19A02720)
#define OCBGMFLGCAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x19A02620)
#define OCBGMFLGCAJ_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x19A029B0)
#define OCBGMFLGCAJ_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x19A026B0)
#define OCBGMFLGCAJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x19A02950)
#define OCBGMFLGCAJ_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x19A02A00)
#define OCBGMFLGCAJ_NHPEMPJIJDN_OFFSET UNITYSDK_OFFSET(0x19A02860)

inline static constexpr unsigned int OCBGMFLGCAJ_TypeDefinitionIndex = 80643;

	class OCBGMFLGCAJ : public ::JNALBIEDNLH
	{
	public:
		::RPG::GameCore::ChenLingBattleAbilityModifierApplier* BMNKALMLGFP; // 0x28
		::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::CIIKBJFOKHL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::CIIKBJFOKHL*))((::PBYTE)hIl2Cpp + OCBGMFLGCAJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBGMFLGCAJ_HKKFFCBJOKM_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OCBGMFLGCAJ_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Int32>* CKFMKCOAAPC()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBGMFLGCAJ_CKFMKCOAAPC_OFFSET))(this);
		}

		::System::Void NHPEMPJIJDN(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + OCBGMFLGCAJ_NHPEMPJIJDN_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBGMFLGCAJ_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBGMFLGCAJ_KHGIKBFDLFB_OFFSET))(this);
		}

	};
