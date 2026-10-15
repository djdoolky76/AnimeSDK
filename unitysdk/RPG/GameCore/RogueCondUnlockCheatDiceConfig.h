#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueCondUnlockCheatDiceConfig; }

#define RPG_GAMECORE_ROGUECONDUNLOCKCHEATDICECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9B2740)
#define RPG_GAMECORE_ROGUECONDUNLOCKCHEATDICECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9B2730)
#define RPG_GAMECORE_ROGUECONDUNLOCKCHEATDICECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9B26F0)

namespace RPG::GameCore
{
	class RogueCondUnlockCheatDiceConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDUNLOCKCHEATDICECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueCondUnlockCheatDiceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueCondUnlockCheatDiceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDUNLOCKCHEATDICECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueCondUnlockCheatDiceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueCondUnlockCheatDiceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDUNLOCKCHEATDICECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
