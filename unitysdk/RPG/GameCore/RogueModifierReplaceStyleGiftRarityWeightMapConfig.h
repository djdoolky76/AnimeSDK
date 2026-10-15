#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierReplaceStyleGiftRarityWeightMapConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERREPLACESTYLEGIFTRARITYWEIGHTMAPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1A1E0)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACESTYLEGIFTRARITYWEIGHTMAPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA1A1F0)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACESTYLEGIFTRARITYWEIGHTMAPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA1A1A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierReplaceStyleGiftRarityWeightMapConfig_TypeDefinitionIndex = 17809;

	class RogueModifierReplaceStyleGiftRarityWeightMapConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACESTYLEGIFTRARITYWEIGHTMAPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierReplaceStyleGiftRarityWeightMapConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierReplaceStyleGiftRarityWeightMapConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACESTYLEGIFTRARITYWEIGHTMAPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierReplaceStyleGiftRarityWeightMapConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierReplaceStyleGiftRarityWeightMapConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACESTYLEGIFTRARITYWEIGHTMAPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
