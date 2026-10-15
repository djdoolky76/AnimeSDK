#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/TimeRewindObjectType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TimeRewindAchievement; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TIMEREWINDACHIEVEMENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB86600)
#define RPG_GAMECORE_TIMEREWINDACHIEVEMENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB86240)

namespace RPG::GameCore
{
	class TimeRewindAchievement : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 UseTimeRewind; // 0x10
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TimeRewindObjectType, ::System::UInt32>* HitByTimeRewindObject; // 0x18
		::System::UInt32 KillMonster; // 0x20
		::System::UInt32 OverTimeXTimesInARow; // 0x24
		::System::UInt32 OverTimeXTimes; // 0x28
		::System::UInt32 KeepRewindOverLongTime; // 0x2C
		::System::Single KeepRewindOverLongTimeDuration; // 0x30
		::System::UInt32 KillMonsterAndPlayer; // 0x34
		::System::UInt32 HitWhenControlOther; // 0x38
		::System::UInt32 PauseBySkill; // 0x3C
		::System::UInt32 PauseByItem; // 0x40
		::System::UInt32 PauseBySkillAndItem; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDACHIEVEMENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TimeRewindAchievement* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TimeRewindAchievement*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDACHIEVEMENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
