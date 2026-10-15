#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExecuteActionOnRogueMagicPostStartConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROGUEMAGICPOSTSTARTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA16980)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROGUEMAGICPOSTSTARTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA16990)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROGUEMAGICPOSTSTARTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA16940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnRogueMagicPostStartConfig_TypeDefinitionIndex = 17733;

	class RogueModifierExecuteActionOnRogueMagicPostStartConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROGUEMAGICPOSTSTARTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnRogueMagicPostStartConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnRogueMagicPostStartConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROGUEMAGICPOSTSTARTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnRogueMagicPostStartConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnRogueMagicPostStartConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROGUEMAGICPOSTSTARTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
