#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseScrollGameConfig; }
namespace System { class String; }

#define RPG_GAMECORE_BASESCROLLGAMECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D43FE80)
#define RPG_GAMECORE_BASESCROLLGAMECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D43FEA0)
#define RPG_GAMECORE_BASESCROLLGAMECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D43FC90)

namespace RPG::GameCore
{
	class BaseScrollGameConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GameID; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* GameStateLevelVarName; // 0x18
		::System::String* SpeedRatioLevelVarName; // 0x20
		::System::Single StartWaitTime; // 0x28
		::System::Single EndWaitTime; // 0x2C
		::System::Single FallGravity; // 0x30
		::System::Single JumpSpeed; // 0x34
		::System::Single FinalAcceleration; // 0x38
		::System::Single FinalMaxSpeed; // 0x3C
		::System::Single StartOffest; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASESCROLLGAMECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BaseScrollGameConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BaseScrollGameConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASESCROLLGAMECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BaseScrollGameConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BaseScrollGameConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASESCROLLGAMECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
