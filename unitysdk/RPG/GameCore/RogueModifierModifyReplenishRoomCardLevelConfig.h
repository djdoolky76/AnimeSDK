#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyReplenishRoomCardLevelConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYREPLENISHROOMCARDLEVELCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA18680)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYREPLENISHROOMCARDLEVELCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA18690)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYREPLENISHROOMCARDLEVELCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA18640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyReplenishRoomCardLevelConfig_TypeDefinitionIndex = 17840;

	class RogueModifierModifyReplenishRoomCardLevelConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYREPLENISHROOMCARDLEVELCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyReplenishRoomCardLevelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyReplenishRoomCardLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYREPLENISHROOMCARDLEVELCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyReplenishRoomCardLevelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyReplenishRoomCardLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYREPLENISHROOMCARDLEVELCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
