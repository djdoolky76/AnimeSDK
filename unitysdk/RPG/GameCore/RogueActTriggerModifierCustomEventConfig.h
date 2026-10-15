#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActTriggerModifierCustomEventConfig; }

#define RPG_GAMECORE_ROGUEACTTRIGGERMODIFIERCUSTOMEVENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D974360)
#define RPG_GAMECORE_ROGUEACTTRIGGERMODIFIERCUSTOMEVENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D974370)
#define RPG_GAMECORE_ROGUEACTTRIGGERMODIFIERCUSTOMEVENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D974320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerModifierCustomEventConfig_TypeDefinitionIndex = 19783;

	class RogueActTriggerModifierCustomEventConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERMODIFIERCUSTOMEVENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerModifierCustomEventConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerModifierCustomEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERMODIFIERCUSTOMEVENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerModifierCustomEventConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerModifierCustomEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERMODIFIERCUSTOMEVENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
