#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActTriggerRogueMiracleDropConfig; }

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEDROPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D974BA0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEDROPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D974BB0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEDROPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D974B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueMiracleDropConfig_TypeDefinitionIndex = 19599;

	class RogueActTriggerRogueMiracleDropConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEDROPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerRogueMiracleDropConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerRogueMiracleDropConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEDROPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerRogueMiracleDropConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerRogueMiracleDropConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEDROPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
