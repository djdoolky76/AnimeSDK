#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActTriggerRogueFormulaSelectConfig; }

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULASELECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBEAFE0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULASELECTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EBEAFF0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULASELECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EBEAFA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueFormulaSelectConfig_TypeDefinitionIndex = 19985;

	class RogueActTriggerRogueFormulaSelectConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULASELECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerRogueFormulaSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerRogueFormulaSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULASELECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerRogueFormulaSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerRogueFormulaSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULASELECTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
