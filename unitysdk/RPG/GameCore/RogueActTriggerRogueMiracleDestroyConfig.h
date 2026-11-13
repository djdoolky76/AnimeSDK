#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActTriggerRogueMiracleDestroyConfig; }

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEDESTROYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F55A260)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEDESTROYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F55A270)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEDESTROYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F55A220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueMiracleDestroyConfig_TypeDefinitionIndex = 19930;

	class RogueActTriggerRogueMiracleDestroyConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEDESTROYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerRogueMiracleDestroyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerRogueMiracleDestroyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEDESTROYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerRogueMiracleDestroyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerRogueMiracleDestroyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEDESTROYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
