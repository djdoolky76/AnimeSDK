#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowBattleVersusBarCountDownEffect; }

#define RPG_GAMECORE_SHOWBATTLEVERSUSBARCOUNTDOWNEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAAB6F0)
#define RPG_GAMECORE_SHOWBATTLEVERSUSBARCOUNTDOWNEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAAB700)
#define RPG_GAMECORE_SHOWBATTLEVERSUSBARCOUNTDOWNEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAAB6C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowBattleVersusBarCountDownEffect_TypeDefinitionIndex = 23348;

	class ShowBattleVersusBarCountDownEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsShow; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEVERSUSBARCOUNTDOWNEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowBattleVersusBarCountDownEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowBattleVersusBarCountDownEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEVERSUSBARCOUNTDOWNEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowBattleVersusBarCountDownEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowBattleVersusBarCountDownEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEVERSUSBARCOUNTDOWNEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
