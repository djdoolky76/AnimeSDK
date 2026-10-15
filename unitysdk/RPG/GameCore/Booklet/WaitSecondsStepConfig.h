#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Booklet/StepConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Booklet { class WaitSecondsStepConfig; }

#define RPG_GAMECORE_BOOKLET_WAITSECONDSSTEPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4480B0)
#define RPG_GAMECORE_BOOKLET_WAITSECONDSSTEPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4480C0)
#define RPG_GAMECORE_BOOKLET_WAITSECONDSSTEPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4482A0)

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int WaitSecondsStepConfig_TypeDefinitionIndex = 24978;

	class WaitSecondsStepConfig : public ::RPG::GameCore::Booklet::StepConfig
	{
	public:
		::System::Single Seconds; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_WAITSECONDSSTEPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Booklet::WaitSecondsStepConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Booklet::WaitSecondsStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_WAITSECONDSSTEPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Booklet::WaitSecondsStepConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Booklet::WaitSecondsStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_WAITSECONDSSTEPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
