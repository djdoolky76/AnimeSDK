#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActTriggerRogueBuffSelectByInactiveFormulaWithWeightConfig; }

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFSELECTBYINACTIVEFORMULAWITHWEIGHTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F559CC0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFSELECTBYINACTIVEFORMULAWITHWEIGHTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F559CD0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFSELECTBYINACTIVEFORMULAWITHWEIGHTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F559C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueBuffSelectByInactiveFormulaWithWeightConfig_TypeDefinitionIndex = 20005;

	class RogueActTriggerRogueBuffSelectByInactiveFormulaWithWeightConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFSELECTBYINACTIVEFORMULAWITHWEIGHTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerRogueBuffSelectByInactiveFormulaWithWeightConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerRogueBuffSelectByInactiveFormulaWithWeightConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFSELECTBYINACTIVEFORMULAWITHWEIGHTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerRogueBuffSelectByInactiveFormulaWithWeightConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerRogueBuffSelectByInactiveFormulaWithWeightConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFSELECTBYINACTIVEFORMULAWITHWEIGHTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
