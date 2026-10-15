#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityRaidAlleyPlacingShowUI; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ACTIVITYRAIDALLEYPLACINGSHOWUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D375D10)
#define RPG_GAMECORE_ACTIVITYRAIDALLEYPLACINGSHOWUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D375D20)
#define RPG_GAMECORE_ACTIVITYRAIDALLEYPLACINGSHOWUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D375CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityRaidAlleyPlacingShowUI_TypeDefinitionIndex = 21188;

	class ActivityRaidAlleyPlacingShowUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 OrderID; // 0x18
		::System::Boolean IsSpecial; // 0x1C
		::System::Byte _padding0[0x3];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnExitUI; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDALLEYPLACINGSHOWUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityRaidAlleyPlacingShowUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityRaidAlleyPlacingShowUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDALLEYPLACINGSHOWUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityRaidAlleyPlacingShowUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityRaidAlleyPlacingShowUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDALLEYPLACINGSHOWUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
