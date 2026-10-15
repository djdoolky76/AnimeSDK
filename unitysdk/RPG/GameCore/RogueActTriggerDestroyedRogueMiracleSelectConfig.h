#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActTriggerDestroyedRogueMiracleSelectConfig; }

#define RPG_GAMECORE_ROGUEACTTRIGGERDESTROYEDROGUEMIRACLESELECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9740C0)
#define RPG_GAMECORE_ROGUEACTTRIGGERDESTROYEDROGUEMIRACLESELECTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9740D0)
#define RPG_GAMECORE_ROGUEACTTRIGGERDESTROYEDROGUEMIRACLESELECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D974080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerDestroyedRogueMiracleSelectConfig_TypeDefinitionIndex = 19601;

	class RogueActTriggerDestroyedRogueMiracleSelectConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDESTROYEDROGUEMIRACLESELECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerDestroyedRogueMiracleSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerDestroyedRogueMiracleSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDESTROYEDROGUEMIRACLESELECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerDestroyedRogueMiracleSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerDestroyedRogueMiracleSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDESTROYEDROGUEMIRACLESELECTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
