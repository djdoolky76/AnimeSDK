#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierLevelUpRoomCardOnSelfAttributeRemoveConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERLEVELUPROOMCARDONSELFATTRIBUTEREMOVECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9E9A40)
#define RPG_GAMECORE_ROGUEMODIFIERLEVELUPROOMCARDONSELFATTRIBUTEREMOVECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9E9A50)
#define RPG_GAMECORE_ROGUEMODIFIERLEVELUPROOMCARDONSELFATTRIBUTEREMOVECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9E9A00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierLevelUpRoomCardOnSelfAttributeRemoveConfig_TypeDefinitionIndex = 17859;

	class RogueModifierLevelUpRoomCardOnSelfAttributeRemoveConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERLEVELUPROOMCARDONSELFATTRIBUTEREMOVECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierLevelUpRoomCardOnSelfAttributeRemoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierLevelUpRoomCardOnSelfAttributeRemoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERLEVELUPROOMCARDONSELFATTRIBUTEREMOVECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierLevelUpRoomCardOnSelfAttributeRemoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierLevelUpRoomCardOnSelfAttributeRemoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERLEVELUPROOMCARDONSELFATTRIBUTEREMOVECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
