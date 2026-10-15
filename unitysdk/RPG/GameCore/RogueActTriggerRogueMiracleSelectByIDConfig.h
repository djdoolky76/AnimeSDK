#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActTriggerRogueMiracleSelectByIDConfig; }

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLESELECTBYIDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D974CC0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLESELECTBYIDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D974CD0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLESELECTBYIDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D974C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueMiracleSelectByIDConfig_TypeDefinitionIndex = 19596;

	class RogueActTriggerRogueMiracleSelectByIDConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLESELECTBYIDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerRogueMiracleSelectByIDConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerRogueMiracleSelectByIDConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLESELECTBYIDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerRogueMiracleSelectByIDConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerRogueMiracleSelectByIDConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLESELECTBYIDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
