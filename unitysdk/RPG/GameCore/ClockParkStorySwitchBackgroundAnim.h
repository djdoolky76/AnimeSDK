#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClockParkStorySwitchBackgroundAnim; }

#define RPG_GAMECORE_CLOCKPARKSTORYSWITCHBACKGROUNDANIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D598190)
#define RPG_GAMECORE_CLOCKPARKSTORYSWITCHBACKGROUNDANIM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5981A0)
#define RPG_GAMECORE_CLOCKPARKSTORYSWITCHBACKGROUNDANIM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D598160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkStorySwitchBackgroundAnim_TypeDefinitionIndex = 20949;

	class ClockParkStorySwitchBackgroundAnim : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 Index; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYSWITCHBACKGROUNDANIM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClockParkStorySwitchBackgroundAnim* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClockParkStorySwitchBackgroundAnim*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYSWITCHBACKGROUNDANIM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClockParkStorySwitchBackgroundAnim* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClockParkStorySwitchBackgroundAnim*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYSWITCHBACKGROUNDANIM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
