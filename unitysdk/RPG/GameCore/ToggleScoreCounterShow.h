#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ToggleScoreCounterShow; }

#define RPG_GAMECORE_TOGGLESCORECOUNTERSHOW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB8C1B0)
#define RPG_GAMECORE_TOGGLESCORECOUNTERSHOW_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB8C1C0)
#define RPG_GAMECORE_TOGGLESCORECOUNTERSHOW_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB8C180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ToggleScoreCounterShow_TypeDefinitionIndex = 23241;

	class ToggleScoreCounterShow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOGGLESCORECOUNTERSHOW_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ToggleScoreCounterShow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ToggleScoreCounterShow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOGGLESCORECOUNTERSHOW_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ToggleScoreCounterShow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ToggleScoreCounterShow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOGGLESCORECOUNTERSHOW_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
