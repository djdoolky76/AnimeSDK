#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClockParkStorySetBackgroundFrontVisible; }

#define RPG_GAMECORE_CLOCKPARKSTORYSETBACKGROUNDFRONTVISIBLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D597DA0)
#define RPG_GAMECORE_CLOCKPARKSTORYSETBACKGROUNDFRONTVISIBLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D597DB0)
#define RPG_GAMECORE_CLOCKPARKSTORYSETBACKGROUNDFRONTVISIBLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D597D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkStorySetBackgroundFrontVisible_TypeDefinitionIndex = 20950;

	class ClockParkStorySetBackgroundFrontVisible : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Visible; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYSETBACKGROUNDFRONTVISIBLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClockParkStorySetBackgroundFrontVisible* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClockParkStorySetBackgroundFrontVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYSETBACKGROUNDFRONTVISIBLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClockParkStorySetBackgroundFrontVisible* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClockParkStorySetBackgroundFrontVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYSETBACKGROUNDFRONTVISIBLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
