#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierModifyBlackboardBaseConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyBlackboardByRoomCardLevelChangeConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYBLACKBOARDBYROOMCARDLEVELCHANGECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x20780420)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYBLACKBOARDBYROOMCARDLEVELCHANGECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x20780430)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYBLACKBOARDBYROOMCARDLEVELCHANGECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x207804C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyBlackboardByRoomCardLevelChangeConfig_TypeDefinitionIndex = 17867;

	class RogueModifierModifyBlackboardByRoomCardLevelChangeConfig : public ::RPG::GameCore::RogueModifierModifyBlackboardBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYBLACKBOARDBYROOMCARDLEVELCHANGECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyBlackboardByRoomCardLevelChangeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyBlackboardByRoomCardLevelChangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYBLACKBOARDBYROOMCARDLEVELCHANGECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyBlackboardByRoomCardLevelChangeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyBlackboardByRoomCardLevelChangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYBLACKBOARDBYROOMCARDLEVELCHANGECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
