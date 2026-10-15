#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActTriggerRogueMiracleDropThenReGetConfig; }

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEDROPTHENREGETCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D974C00)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEDROPTHENREGETCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D974C10)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEDROPTHENREGETCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D974BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueMiracleDropThenReGetConfig_TypeDefinitionIndex = 19600;

	class RogueActTriggerRogueMiracleDropThenReGetConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEDROPTHENREGETCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerRogueMiracleDropThenReGetConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerRogueMiracleDropThenReGetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEDROPTHENREGETCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerRogueMiracleDropThenReGetConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerRogueMiracleDropThenReGetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEDROPTHENREGETCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
