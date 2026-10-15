#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActTriggerRogueFormulaSelectWithActivationBuffConfig; }

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULASELECTWITHACTIVATIONBUFFCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A2080)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULASELECTWITHACTIVATIONBUFFCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9A2090)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULASELECTWITHACTIVATIONBUFFCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9A2040)

namespace RPG::GameCore
{
	class RogueActTriggerRogueFormulaSelectWithActivationBuffConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULASELECTWITHACTIVATIONBUFFCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerRogueFormulaSelectWithActivationBuffConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerRogueFormulaSelectWithActivationBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULASELECTWITHACTIVATIONBUFFCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerRogueFormulaSelectWithActivationBuffConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerRogueFormulaSelectWithActivationBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULASELECTWITHACTIVATIONBUFFCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
