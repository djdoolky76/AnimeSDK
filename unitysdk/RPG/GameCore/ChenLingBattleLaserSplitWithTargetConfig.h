#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleLaserSplitConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleTargetEvaluator; }
namespace RPG::GameCore { class ChenLingBattleLaserSplitWithTargetConfig; }

#define RPG_GAMECORE_CHENLINGBATTLELASERSPLITWITHTARGETCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5866A0)
#define RPG_GAMECORE_CHENLINGBATTLELASERSPLITWITHTARGETCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5866B0)
#define RPG_GAMECORE_CHENLINGBATTLELASERSPLITWITHTARGETCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D586A80)

namespace RPG::GameCore
{
	class ChenLingBattleLaserSplitWithTargetConfig : public ::RPG::GameCore::ChenLingBattleLaserSplitConfig
	{
	public:
		::RPG::GameCore::BaseChenLingBattleTargetEvaluator* SplitTargets; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLELASERSPLITWITHTARGETCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleLaserSplitWithTargetConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleLaserSplitWithTargetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLELASERSPLITWITHTARGETCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleLaserSplitWithTargetConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleLaserSplitWithTargetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLELASERSPLITWITHTARGETCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
