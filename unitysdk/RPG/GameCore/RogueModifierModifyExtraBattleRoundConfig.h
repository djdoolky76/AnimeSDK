#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyExtraBattleRoundConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYEXTRABATTLEROUNDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA17D20)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYEXTRABATTLEROUNDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA17D30)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYEXTRABATTLEROUNDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA17CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyExtraBattleRoundConfig_TypeDefinitionIndex = 17731;

	class RogueModifierModifyExtraBattleRoundConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYEXTRABATTLEROUNDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyExtraBattleRoundConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyExtraBattleRoundConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYEXTRABATTLEROUNDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyExtraBattleRoundConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyExtraBattleRoundConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYEXTRABATTLEROUNDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
