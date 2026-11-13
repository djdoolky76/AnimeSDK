#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExecuteActionOnAttributeAppendConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONATTRIBUTEAPPENDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x2077E5A0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONATTRIBUTEAPPENDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x2077E5B0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONATTRIBUTEAPPENDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x2077E560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnAttributeAppendConfig_TypeDefinitionIndex = 18022;

	class RogueModifierExecuteActionOnAttributeAppendConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONATTRIBUTEAPPENDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnAttributeAppendConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnAttributeAppendConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONATTRIBUTEAPPENDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnAttributeAppendConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnAttributeAppendConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONATTRIBUTEAPPENDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
