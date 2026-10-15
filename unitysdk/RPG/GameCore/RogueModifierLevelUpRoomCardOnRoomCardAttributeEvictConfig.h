#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierLevelUpRoomCardOnRoomCardAttributeEvictConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERLEVELUPROOMCARDONROOMCARDATTRIBUTEEVICTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9E99E0)
#define RPG_GAMECORE_ROGUEMODIFIERLEVELUPROOMCARDONROOMCARDATTRIBUTEEVICTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9E99F0)
#define RPG_GAMECORE_ROGUEMODIFIERLEVELUPROOMCARDONROOMCARDATTRIBUTEEVICTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9E99A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierLevelUpRoomCardOnRoomCardAttributeEvictConfig_TypeDefinitionIndex = 17860;

	class RogueModifierLevelUpRoomCardOnRoomCardAttributeEvictConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERLEVELUPROOMCARDONROOMCARDATTRIBUTEEVICTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierLevelUpRoomCardOnRoomCardAttributeEvictConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierLevelUpRoomCardOnRoomCardAttributeEvictConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERLEVELUPROOMCARDONROOMCARDATTRIBUTEEVICTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierLevelUpRoomCardOnRoomCardAttributeEvictConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierLevelUpRoomCardOnRoomCardAttributeEvictConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERLEVELUPROOMCARDONROOMCARDATTRIBUTEEVICTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
