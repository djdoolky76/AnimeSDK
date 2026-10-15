#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityConfig.h"
#include "unitysdk/RPG/GameCore/AdventureAbilityManualTriggerType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureAbilityConfig; }
namespace RPG::GameCore { class AdventureModifierConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ADVENTUREABILITYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B5C40)
#define RPG_GAMECORE_ADVENTUREABILITYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3B5C50)
#define RPG_GAMECORE_ADVENTUREABILITYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3B5C10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureAbilityConfig_TypeDefinitionIndex = 17425;

	class AdventureAbilityConfig : public ::RPG::GameCore::AbilityConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AdventureModifierConfig*>* Modifiers; // 0x58
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnAbort; // 0x60
		::RPG::GameCore::AdventureAbilityManualTriggerType ManualTriggerType; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureAbilityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureAbilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureAbilityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureAbilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
