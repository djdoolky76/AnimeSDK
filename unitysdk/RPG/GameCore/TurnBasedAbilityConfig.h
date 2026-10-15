#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TurnBasedAbilityConfig; }
namespace RPG::GameCore { class TurnBasedModifierConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TURNBASEDABILITYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC619F0)
#define RPG_GAMECORE_TURNBASEDABILITYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC61A00)
#define RPG_GAMECORE_TURNBASEDABILITYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC619C0)

namespace RPG::GameCore
{
	class TurnBasedAbilityConfig : public ::RPG::GameCore::AbilityConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TurnBasedModifierConfig*>* Modifiers; // 0x58
		::RPG::GameCore::JsonEnum* Tag; // 0x60
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnInsertAbort; // 0x68
		::System::Boolean ServantWhiteList; // 0x70
		::System::Byte _padding0[0x7];
		::System::String* JsonPath; // 0x78
		// static const ::System::String* ELATION_TAG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDABILITYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TurnBasedAbilityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TurnBasedAbilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDABILITYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TurnBasedAbilityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TurnBasedAbilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDABILITYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
