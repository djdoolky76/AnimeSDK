#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TeamTowersRobotConfig; }

#define RPG_GAMECORE_TEAMTOWERSROBOTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB7E1A0)
#define RPG_GAMECORE_TEAMTOWERSROBOTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB7CF80)

namespace RPG::GameCore
{
	class TeamTowersRobotConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 PlayerOffset; // 0x10
		::System::Single BaseMoveDuration; // 0x1C
		::System::Single MinMoveSpeed; // 0x20
		::System::Single RotateTurnInRatio; // 0x24
		::System::Single RotateTurnOutRatio; // 0x28
		::System::Single MaxRotationDeltaX; // 0x2C
		::System::Single ThrowBrickHeightOffset; // 0x30
		::System::Single ThrowBrickMaxFallDistance; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSROBOTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TeamTowersRobotConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TeamTowersRobotConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSROBOTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
