#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BoolEx.h"
#include "unitysdk/RPG/GameCore/SummonerEnergyBarType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DotBarTypeConfig; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class NumBarTypeConfig; }
namespace RPG::GameCore { class ProgressBarTypeConfig; }
namespace RPG::GameCore { class SetSummonerEnergyBarState; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETSUMMONERENERGYBARSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC3B80)
#define RPG_GAMECORE_SETSUMMONERENERGYBARSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAC3C40)
#define RPG_GAMECORE_SETSUMMONERENERGYBARSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC3A90)

namespace RPG::GameCore
{
	class SetSummonerEnergyBarState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::BoolEx Active; // 0x20
		::RPG::GameCore::SummonerEnergyBarType BarType; // 0x24
		::RPG::GameCore::DynamicFloat* MaxCount; // 0x28
		::RPG::GameCore::DynamicFloat* CurrentCount; // 0x30
		::RPG::GameCore::DotBarTypeConfig* DotBarTypeConfig; // 0x38
		::RPG::GameCore::ProgressBarTypeConfig* ProgressBarTypeConfig; // 0x40
		::RPG::GameCore::NumBarTypeConfig* NumBarTypeConfig; // 0x48
		::System::Boolean SkipInCharmAction; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSUMMONERENERGYBARSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetSummonerEnergyBarState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetSummonerEnergyBarState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSUMMONERENERGYBARSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetSummonerEnergyBarState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetSummonerEnergyBarState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSUMMONERENERGYBARSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
