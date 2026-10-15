#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Booklet/StepConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Booklet { class SkipTimerStepConfig; }
namespace RPG::GameCore::Booklet { class StepConfig; }

#define RPG_GAMECORE_BOOKLET_SKIPTIMERSTEPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D475270)
#define RPG_GAMECORE_BOOKLET_SKIPTIMERSTEPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D475280)
#define RPG_GAMECORE_BOOKLET_SKIPTIMERSTEPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D475220)

namespace RPG::GameCore::Booklet
{
	class SkipTimerStepConfig : public ::RPG::GameCore::Booklet::StepConfig
	{
	public:
		::RPG::GameCore::Booklet::StepConfig* Step; // 0x10
		::System::Single Seconds; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_SKIPTIMERSTEPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Booklet::SkipTimerStepConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Booklet::SkipTimerStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_SKIPTIMERSTEPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Booklet::SkipTimerStepConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Booklet::SkipTimerStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_SKIPTIMERSTEPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
