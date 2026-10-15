#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierReplaceFormulaAfterGetConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERREPLACEFORMULAAFTERGETCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9EC820)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACEFORMULAAFTERGETCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9EC830)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACEFORMULAAFTERGETCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9EC7E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierReplaceFormulaAfterGetConfig_TypeDefinitionIndex = 17780;

	class RogueModifierReplaceFormulaAfterGetConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACEFORMULAAFTERGETCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierReplaceFormulaAfterGetConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierReplaceFormulaAfterGetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACEFORMULAAFTERGETCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierReplaceFormulaAfterGetConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierReplaceFormulaAfterGetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACEFORMULAAFTERGETCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
