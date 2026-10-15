#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierTournGetFormulaOnBuffTypeMatchRequiredNumConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERTOURNGETFORMULAONBUFFTYPEMATCHREQUIREDNUMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1AB80)
#define RPG_GAMECORE_ROGUEMODIFIERTOURNGETFORMULAONBUFFTYPEMATCHREQUIREDNUMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA1AB90)
#define RPG_GAMECORE_ROGUEMODIFIERTOURNGETFORMULAONBUFFTYPEMATCHREQUIREDNUMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA1AB40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierTournGetFormulaOnBuffTypeMatchRequiredNumConfig_TypeDefinitionIndex = 17776;

	class RogueModifierTournGetFormulaOnBuffTypeMatchRequiredNumConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERTOURNGETFORMULAONBUFFTYPEMATCHREQUIREDNUMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierTournGetFormulaOnBuffTypeMatchRequiredNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierTournGetFormulaOnBuffTypeMatchRequiredNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERTOURNGETFORMULAONBUFFTYPEMATCHREQUIREDNUMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierTournGetFormulaOnBuffTypeMatchRequiredNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierTournGetFormulaOnBuffTypeMatchRequiredNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERTOURNGETFORMULAONBUFFTYPEMATCHREQUIREDNUMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
