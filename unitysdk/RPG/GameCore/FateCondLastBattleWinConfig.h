#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateCondLastBattleWinConfig; }

#define RPG_GAMECORE_FATECONDLASTBATTLEWINCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A7230)
#define RPG_GAMECORE_FATECONDLASTBATTLEWINCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E8A7240)
#define RPG_GAMECORE_FATECONDLASTBATTLEWINCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E8A71F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateCondLastBattleWinConfig_TypeDefinitionIndex = 19441;

	class FateCondLastBattleWinConfig : public ::RPG::GameCore::FateConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDLASTBATTLEWINCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateCondLastBattleWinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateCondLastBattleWinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDLASTBATTLEWINCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateCondLastBattleWinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateCondLastBattleWinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDLASTBATTLEWINCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
