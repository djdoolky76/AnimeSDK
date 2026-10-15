#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyRoomBattleRoundConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYROOMBATTLEROUNDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9EAFC0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYROOMBATTLEROUNDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9EAFD0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYROOMBATTLEROUNDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9EAF80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyRoomBattleRoundConfig_TypeDefinitionIndex = 17732;

	class RogueModifierModifyRoomBattleRoundConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYROOMBATTLEROUNDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyRoomBattleRoundConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyRoomBattleRoundConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYROOMBATTLEROUNDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyRoomBattleRoundConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyRoomBattleRoundConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYROOMBATTLEROUNDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
