#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActReplaceAllFormulaAndBuffConfig; }

#define RPG_GAMECORE_ROGUEACTREPLACEALLFORMULAANDBUFFCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBEA3D0)
#define RPG_GAMECORE_ROGUEACTREPLACEALLFORMULAANDBUFFCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EBEA3E0)
#define RPG_GAMECORE_ROGUEACTREPLACEALLFORMULAANDBUFFCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EBEA390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActReplaceAllFormulaAndBuffConfig_TypeDefinitionIndex = 20037;

	class RogueActReplaceAllFormulaAndBuffConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEALLFORMULAANDBUFFCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActReplaceAllFormulaAndBuffConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActReplaceAllFormulaAndBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEALLFORMULAANDBUFFCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActReplaceAllFormulaAndBuffConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActReplaceAllFormulaAndBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEALLFORMULAANDBUFFCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
