#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActGetRogueBuffByInactiveFormulaWithWeightConfig; }

#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYINACTIVEFORMULAWITHWEIGHTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99E090)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYINACTIVEFORMULAWITHWEIGHTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D99E0A0)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYINACTIVEFORMULAWITHWEIGHTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99E050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueBuffByInactiveFormulaWithWeightConfig_TypeDefinitionIndex = 19674;

	class RogueActGetRogueBuffByInactiveFormulaWithWeightConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYINACTIVEFORMULAWITHWEIGHTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActGetRogueBuffByInactiveFormulaWithWeightConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActGetRogueBuffByInactiveFormulaWithWeightConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYINACTIVEFORMULAWITHWEIGHTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActGetRogueBuffByInactiveFormulaWithWeightConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActGetRogueBuffByInactiveFormulaWithWeightConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYINACTIVEFORMULAWITHWEIGHTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
