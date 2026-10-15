#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNALBIEDNLH.h"
class ALMFLCJCHKP;
class CIIKBJFOKHL;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class BaseChenLingBattleTargetEvaluator; }
namespace RPG::GameCore { class ChenLingBattleAbility_Teleport; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BAICKCNKJGB_CKFMKCOAAPC_OFFSET UNITYSDK_OFFSET(0x15E5F7A0)
#define BAICKCNKJGB_CTOR_OFFSET UNITYSDK_OFFSET(0x15E5F680)
#define BAICKCNKJGB_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x15E5FE50)
#define BAICKCNKJGB_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x15E5F710)
#define BAICKCNKJGB_HPGOFKAEHHO_OFFSET UNITYSDK_OFFSET(0x15E5F8D0)
#define BAICKCNKJGB_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15E5FB80)
#define BAICKCNKJGB_JMPLDGBMBJJ_OFFSET UNITYSDK_OFFSET(0x15E5FBE0)
#define BAICKCNKJGB_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x15E5FEA0)

inline static constexpr unsigned int BAICKCNKJGB_TypeDefinitionIndex = 77916;

	class BAICKCNKJGB : public ::JNALBIEDNLH
	{
	public:
		::RPG::GameCore::ChenLingBattleAbility_Teleport* LJKHFIGFIID; // 0x28
		::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::CIIKBJFOKHL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::CIIKBJFOKHL*))((::PBYTE)hIl2Cpp + BAICKCNKJGB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAICKCNKJGB_HKKFFCBJOKM_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BAICKCNKJGB_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Int32>* CKFMKCOAAPC(::RPG::GameCore::BaseChenLingBattleTargetEvaluator* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleTargetEvaluator*))((::PBYTE)hIl2Cpp + BAICKCNKJGB_CKFMKCOAAPC_OFFSET))(this, a1);
		}

		::System::Void HPGOFKAEHHO(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + BAICKCNKJGB_HPGOFKAEHHO_OFFSET))(this, a1, a2);
		}

		::System::Void JMPLDGBMBJJ(::ALMFLCJCHKP* a1, ::ALMFLCJCHKP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + BAICKCNKJGB_JMPLDGBMBJJ_OFFSET))(this, a1, a2);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAICKCNKJGB_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAICKCNKJGB_KHGIKBFDLFB_OFFSET))(this);
		}

	};
