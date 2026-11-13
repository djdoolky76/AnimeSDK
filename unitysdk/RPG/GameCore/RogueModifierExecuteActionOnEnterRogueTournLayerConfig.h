#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExecuteActionOnEnterRogueTournLayerConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERROGUETOURNLAYERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x2077EA20)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERROGUETOURNLAYERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x2077EA30)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERROGUETOURNLAYERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x2077E9E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnEnterRogueTournLayerConfig_TypeDefinitionIndex = 17940;

	class RogueModifierExecuteActionOnEnterRogueTournLayerConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERROGUETOURNLAYERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnEnterRogueTournLayerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnEnterRogueTournLayerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERROGUETOURNLAYERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnEnterRogueTournLayerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnEnterRogueTournLayerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERROGUETOURNLAYERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
