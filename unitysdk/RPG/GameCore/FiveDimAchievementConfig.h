#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimAchievementConfig; }

#define RPG_GAMECORE_FIVEDIMACHIEVEMENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AD5F0)
#define RPG_GAMECORE_FIVEDIMACHIEVEMENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6AD240)

namespace RPG::GameCore
{
	class FiveDimAchievementConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single IceSlideTime; // 0x10
		::System::Single IceSlideResetTime; // 0x14
		::System::Int32 OneShootCollectCoinNum; // 0x18
		::System::Single StayAirTime; // 0x1C
		::System::UInt32 PassGravityLineInAirTime; // 0x20
		::System::Single DashOrbConsecutiveInterval; // 0x24
		::System::Int32 DashOrbConsecutiveCount; // 0x28
		::System::Single DashOrbBackForthTime; // 0x2C
		::System::Int32 DashHitConsecutiveCount; // 0x30
		::System::Single MiniGameWithoutCollectCoinTime; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMACHIEVEMENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimAchievementConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimAchievementConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMACHIEVEMENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
