#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureAIControllerConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ADVENTUREAICONTROLLERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B5960)
#define RPG_GAMECORE_ADVENTUREAICONTROLLERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3B55E0)

namespace RPG::GameCore
{
	class AdventureAIControllerConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean HasTurn; // 0x10
		::System::Boolean AllowAlertTurnInPlace; // 0x11
		::System::Boolean HasWalkStop; // 0x12
		::System::Boolean HasRunStop; // 0x13
		::System::Single TriggerTurnThresholdOnFacing; // 0x14
		::System::Single TriggerTurnThresholdOnMove; // 0x18
		::System::Single WalkStopTurnThreshold; // 0x1C
		::System::Single RunStopTurnThreshold; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* RootMotionBakedConfigPath; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREAICONTROLLERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureAIControllerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureAIControllerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREAICONTROLLERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
