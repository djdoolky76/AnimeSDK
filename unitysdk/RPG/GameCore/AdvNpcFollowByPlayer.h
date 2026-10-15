#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/WaypathUsageType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvNpcFollowByPlayer; }
namespace RPG::GameCore { class FollowByPlayerCustomRoutePoint; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ADVNPCFOLLOWBYPLAYER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D378DA0)
#define RPG_GAMECORE_ADVNPCFOLLOWBYPLAYER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D378DC0)
#define RPG_GAMECORE_ADVNPCFOLLOWBYPLAYER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D378D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNpcFollowByPlayer_TypeDefinitionIndex = 19989;

	class AdvNpcFollowByPlayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::CharacterMotionFlag MotionFlag; // 0x18
		::System::Single KeepDistance; // 0x1C
		::System::Single FollowDistance; // 0x20
		::System::Single WaitProtectTime; // 0x24
		::System::Single WaitActionTime; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TaskConfig* WaitActionTask; // 0x30
		::RPG::GameCore::WaypathUsageType Waypath; // 0x38
		::System::Byte _padding1[0x4];
		::RPG::GameCore::TaskConfig* OnReachTask; // 0x40
		::System::Single RushProtectTime; // 0x48
		::System::Byte _padding2[0x4];
		::Il2CppArray<::RPG::GameCore::FollowByPlayerCustomRoutePoint*>* SwitchMotionFlagList; // 0x50
		::System::Boolean IsNpcMaster; // 0x58
		::System::Byte _padding3[0x3];
		::System::Single FarDistance; // 0x5C
		::System::Single NearDistacne; // 0x60
		::System::Boolean NoAutoDisableTalk; // 0x64
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCFOLLOWBYPLAYER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNpcFollowByPlayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNpcFollowByPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCFOLLOWBYPLAYER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNpcFollowByPlayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNpcFollowByPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCFOLLOWBYPLAYER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
