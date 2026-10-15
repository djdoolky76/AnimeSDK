#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierLevelUpRoomCardOnAttributeAppendConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERLEVELUPROOMCARDONATTRIBUTEAPPENDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9E9980)
#define RPG_GAMECORE_ROGUEMODIFIERLEVELUPROOMCARDONATTRIBUTEAPPENDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9E9990)
#define RPG_GAMECORE_ROGUEMODIFIERLEVELUPROOMCARDONATTRIBUTEAPPENDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9E9940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierLevelUpRoomCardOnAttributeAppendConfig_TypeDefinitionIndex = 17854;

	class RogueModifierLevelUpRoomCardOnAttributeAppendConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERLEVELUPROOMCARDONATTRIBUTEAPPENDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierLevelUpRoomCardOnAttributeAppendConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierLevelUpRoomCardOnAttributeAppendConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERLEVELUPROOMCARDONATTRIBUTEAPPENDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierLevelUpRoomCardOnAttributeAppendConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierLevelUpRoomCardOnAttributeAppendConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERLEVELUPROOMCARDONATTRIBUTEAPPENDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
