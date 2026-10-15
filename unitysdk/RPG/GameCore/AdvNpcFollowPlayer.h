#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/FollowMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvNpcFollowPlayer; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ADVNPCFOLLOWPLAYER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A6E10)
#define RPG_GAMECORE_ADVNPCFOLLOWPLAYER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3A6E60)
#define RPG_GAMECORE_ADVNPCFOLLOWPLAYER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3A6DA0)

namespace RPG::GameCore
{
	class AdvNpcFollowPlayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::FollowMode Mode; // 0x18
		::RPG::GameCore::CharacterMotionFlag MotionFlag; // 0x1C
		::System::Single WaitProtectTime; // 0x20
		::System::Single WaitActionTime; // 0x24
		::RPG::GameCore::TaskConfig* WaitActionTask; // 0x28
		::System::Single TransferDistance; // 0x30
		::System::Single EnterRushDistance; // 0x34
		::System::Single ExitRushDistance; // 0x38
		::System::Single RushChangeProtectTime; // 0x3C
		::System::Single ProtectTransferDistance; // 0x40
		::System::Boolean NoAutoDisableTalk; // 0x44
		::System::Boolean NeedAvoid; // 0x45
		::System::Byte _padding0[0x2];
		::System::Single StartAvoidDistance; // 0x48
		::System::Single StartAvoidTime; // 0x4C
		::System::Single KeepDistance; // 0x50
		::System::Single FollowDistance; // 0x54
		::System::Single PuppyKeepMax; // 0x58
		::System::Single PuppyKeepMin; // 0x5C
		::System::Single PuppyKeepAngle; // 0x60
		::System::Single PuppyKeepAngleExclude; // 0x64
		::System::Single PuppyEnterFollowOffset; // 0x68
		::System::Byte _padding1[0x4];
		::System::String* PuppySpeedCurveAsset; // 0x70
		::System::Single PuppyAcceleration; // 0x78
		::System::Single NavigationTestThreshold; // 0x7C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCFOLLOWPLAYER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNpcFollowPlayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNpcFollowPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCFOLLOWPLAYER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNpcFollowPlayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNpcFollowPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCFOLLOWPLAYER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
