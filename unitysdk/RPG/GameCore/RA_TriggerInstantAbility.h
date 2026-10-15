#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ReactionTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RA_TriggerInstantAbility; }
namespace System { class String; }

#define RPG_GAMECORE_RA_TRIGGERINSTANTABILITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D965770)
#define RPG_GAMECORE_RA_TRIGGERINSTANTABILITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D965780)
#define RPG_GAMECORE_RA_TRIGGERINSTANTABILITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D965740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RA_TriggerInstantAbility_TypeDefinitionIndex = 20045;

	class RA_TriggerInstantAbility : public ::RPG::GameCore::ReactionTaskConfig
	{
	public:
		::System::String* AbilityName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_TRIGGERINSTANTABILITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RA_TriggerInstantAbility* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RA_TriggerInstantAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_TRIGGERINSTANTABILITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RA_TriggerInstantAbility* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RA_TriggerInstantAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_TRIGGERINSTANTABILITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
