#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActTriggerAddRogueCoinAndCheckUseRogueMiracleConfig; }

#define RPG_GAMECORE_ROGUEACTTRIGGERADDROGUECOINANDCHECKUSEROGUEMIRACLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D974060)
#define RPG_GAMECORE_ROGUEACTTRIGGERADDROGUECOINANDCHECKUSEROGUEMIRACLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D974070)
#define RPG_GAMECORE_ROGUEACTTRIGGERADDROGUECOINANDCHECKUSEROGUEMIRACLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D974020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerAddRogueCoinAndCheckUseRogueMiracleConfig_TypeDefinitionIndex = 19650;

	class RogueActTriggerAddRogueCoinAndCheckUseRogueMiracleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERADDROGUECOINANDCHECKUSEROGUEMIRACLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerAddRogueCoinAndCheckUseRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerAddRogueCoinAndCheckUseRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERADDROGUECOINANDCHECKUSEROGUEMIRACLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerAddRogueCoinAndCheckUseRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerAddRogueCoinAndCheckUseRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERADDROGUECOINANDCHECKUSEROGUEMIRACLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
