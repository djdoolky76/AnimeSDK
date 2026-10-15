#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueParamRoguePersonaRoomCardMaxLevelByFilterConfig; }

#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMCARDMAXLEVELBYFILTERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2B120)
#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMCARDMAXLEVELBYFILTERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA2B130)
#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMCARDMAXLEVELBYFILTERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA2B0E0)

namespace RPG::GameCore
{
	class RogueParamRoguePersonaRoomCardMaxLevelByFilterConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMCARDMAXLEVELBYFILTERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRoguePersonaRoomCardMaxLevelByFilterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRoguePersonaRoomCardMaxLevelByFilterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMCARDMAXLEVELBYFILTERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRoguePersonaRoomCardMaxLevelByFilterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRoguePersonaRoomCardMaxLevelByFilterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMCARDMAXLEVELBYFILTERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
