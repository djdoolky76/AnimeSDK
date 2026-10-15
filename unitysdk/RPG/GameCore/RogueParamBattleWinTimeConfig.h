#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueParamBattleWinTimeConfig; }

#define RPG_GAMECORE_ROGUEPARAMBATTLEWINTIMECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2A8E0)
#define RPG_GAMECORE_ROGUEPARAMBATTLEWINTIMECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA2A8F0)
#define RPG_GAMECORE_ROGUEPARAMBATTLEWINTIMECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA2A8A0)

namespace RPG::GameCore
{
	class RogueParamBattleWinTimeConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMBATTLEWINTIMECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamBattleWinTimeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamBattleWinTimeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMBATTLEWINTIMECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamBattleWinTimeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamBattleWinTimeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMBATTLEWINTIMECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
