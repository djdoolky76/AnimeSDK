#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameConstConfig.h"
#include "unitysdk/RPG/MVector2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TeamTowersGameConfig; }
namespace RPG::GameCore { class TeamTowersMobileInputConfig; }
namespace RPG::GameCore { class TeamTowersRobotConfig; }

#define RPG_GAMECORE_TEAMTOWERSGAMECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB7C5B0)
#define RPG_GAMECORE_TEAMTOWERSGAMECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB7C5C0)
#define RPG_GAMECORE_TEAMTOWERSGAMECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB7C570)

namespace RPG::GameCore
{
	class TeamTowersGameConfig : public ::RPG::GameCore::LittleGameConstConfig
	{
	public:
		::RPG::MVector2 GameAreaRange; // 0x10
		::System::Single MoveProtectDistance; // 0x18
		::System::UInt32 CameraChangedHeightThreshold; // 0x1C
		::System::UInt32 CameraStartChangedMinHeight; // 0x20
		::System::UInt32 HeightLineRollbackThreshold; // 0x24
		::System::Single SpawnBrickHeight; // 0x28
		::System::Single SpawnBrickEffectTime; // 0x2C
		::System::Single ReviveTimeInSecond; // 0x30
		::System::Single ReviveSpeedUpInterval; // 0x34
		::System::Single ReviveSpeedUpTime; // 0x38
		::System::UInt32 ReviveHP; // 0x3C
		::System::Single InvincibleTimeAfterRevive; // 0x40
		::System::Single InvincibleTimeAfterHPDown; // 0x44
		::System::Single BrickDownNormalSpeed; // 0x48
		::System::Single BrickDownMaxSpeed; // 0x4C
		::System::Single BrickDownSpeedUpRatio; // 0x50
		::System::Single BombDeadPerformanceTime; // 0x54
		::RPG::GameCore::TeamTowersMobileInputConfig* MobileSlowInputConfig; // 0x58
		::RPG::GameCore::TeamTowersMobileInputConfig* MobileFastInputConfig; // 0x60
		::System::Single MobileInputSwitchThreshold; // 0x68
		::System::Single BossSwitchPerformanceMaxWaitTime; // 0x6C
		::System::Single BossSwitchPerformanceMinTime; // 0x70
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TeamTowersRobotConfig* RobotConfig; // 0x78
		::System::UInt32 BossBrickDestroyMidEffectThreshold; // 0x80
		::System::UInt32 BossBrickDestroyBigEffectThreshold; // 0x84
		::RPG::MVector2 BrickRotateLockShakeRange; // 0x88
		::System::Single BrickRotateLockShakeDuration; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSGAMECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TeamTowersGameConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TeamTowersGameConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSGAMECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TeamTowersGameConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TeamTowersGameConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSGAMECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
