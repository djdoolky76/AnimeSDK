#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExecuteActionOnDestrucrPropRandomConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONDESTRUCRPROPRANDOMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA15CC0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONDESTRUCRPROPRANDOMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA15CD0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONDESTRUCRPROPRANDOMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA15C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnDestrucrPropRandomConfig_TypeDefinitionIndex = 17944;

	class RogueModifierExecuteActionOnDestrucrPropRandomConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONDESTRUCRPROPRANDOMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnDestrucrPropRandomConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnDestrucrPropRandomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONDESTRUCRPROPRANDOMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnDestrucrPropRandomConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnDestrucrPropRandomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONDESTRUCRPROPRANDOMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
