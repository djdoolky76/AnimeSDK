#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingBattleAbilityNodeState.h"
#include "unitysdk/System/Object.h"
class CIIKBJFOKHL;
class JNALBIEDNLH;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BPKPCOFKFLC_CTOR_OFFSET UNITYSDK_OFFSET(0x1B606090)
#define BPKPCOFKFLC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B606230)
#define BPKPCOFKFLC_FOKAPDFNOHL_OFFSET UNITYSDK_OFFSET(0x1B606930)
#define BPKPCOFKFLC_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x1B606430)
#define BPKPCOFKFLC_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1B6064B0)
#define BPKPCOFKFLC_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1B606760)
#define BPKPCOFKFLC_LCKCABJFHEA_OFFSET UNITYSDK_OFFSET(0x1B606980)
#define BPKPCOFKFLC_MHMFNGGAHPC_OFFSET UNITYSDK_OFFSET(0x1B6066A0)

inline static constexpr unsigned int BPKPCOFKFLC_TypeDefinitionIndex = 80597;

	class BPKPCOFKFLC : public ::System::Object
	{
	public:
		::System::String* FOMHLLCANPB; // 0x10
		::System::Action* CIFOILLJFNF; // 0x18
		::System::Collections::Generic::List_1<::JNALBIEDNLH*>* MFCCNBIENBL; // 0x20
		::System::Boolean OELBLBCINNB; // 0x28
		::System::Void _ctor(::Il2CppArray<::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*>* a1, ::CIIKBJFOKHL* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*>*, ::CIIKBJFOKHL*, ::System::String*))((::PBYTE)hIl2Cpp + BPKPCOFKFLC_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPKPCOFKFLC_DISPOSE_OFFSET))(this);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPKPCOFKFLC_HKKFFCBJOKM_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BPKPCOFKFLC_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPKPCOFKFLC_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void FOKAPDFNOHL(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BPKPCOFKFLC_FOKAPDFNOHL_OFFSET))(this, a1);
		}

		::JNALBIEDNLH* MHMFNGGAHPC()
		{
			return ((::JNALBIEDNLH*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPKPCOFKFLC_MHMFNGGAHPC_OFFSET))(this);
		}

		::RPG::Client::LittleGame::ChenLing::ChenLingBattleAbilityNodeState LCKCABJFHEA()
		{
			return ((::RPG::Client::LittleGame::ChenLing::ChenLingBattleAbilityNodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + BPKPCOFKFLC_LCKCABJFHEA_OFFSET))(this);
		}

	};
