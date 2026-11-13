#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierSetBattleWinOnBattleFailConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERSETBATTLEWINONBATTLEFAILCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x207A4260)
#define RPG_GAMECORE_ROGUEMODIFIERSETBATTLEWINONBATTLEFAILCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x207A4270)
#define RPG_GAMECORE_ROGUEMODIFIERSETBATTLEWINONBATTLEFAILCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x207A4220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierSetBattleWinOnBattleFailConfig_TypeDefinitionIndex = 17924;

	class RogueModifierSetBattleWinOnBattleFailConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETBATTLEWINONBATTLEFAILCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierSetBattleWinOnBattleFailConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierSetBattleWinOnBattleFailConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETBATTLEWINONBATTLEFAILCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierSetBattleWinOnBattleFailConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierSetBattleWinOnBattleFailConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETBATTLEWINONBATTLEFAILCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
