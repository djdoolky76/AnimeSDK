#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/StarFightSeason.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityStarFightGroupRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYSTARFIGHTGROUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D37EEF0)
#define RPG_GAMECORE_ACTIVITYSTARFIGHTGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D37EA30)

namespace RPG::GameCore
{
	class ActivityStarFightGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* ElementList; // 0x10
		::System::String* GroupPicPath; // 0x18
		::Il2CppArray<::System::UInt32>* EvaluateWave; // 0x20
		::Il2CppArray<::System::UInt32>* TrialAvatar; // 0x28
		::RPG::GameCore::StarFightSeason Season; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID FightStageDesc; // 0x38
		::RPG::Client::TextID GroupTitle; // 0x48
		::System::UInt32 PerfectQuest; // 0x58
		::System::UInt32 GroupID; // 0x5C
		::System::UInt32 PerfectWave; // 0x60
		::System::UInt32 TutorialGuideID; // 0x64
		::System::UInt32 MazeBuffID; // 0x68
		::System::UInt32 ActivityModuleID; // 0x6C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYSTARFIGHTGROUPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityStarFightGroupRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityStarFightGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYSTARFIGHTGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
