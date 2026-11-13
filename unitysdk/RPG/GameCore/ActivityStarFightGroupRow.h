#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/StarFightSeason.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityStarFightGroupRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYSTARFIGHTGROUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA992C0)
#define RPG_GAMECORE_ACTIVITYSTARFIGHTGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA98E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityStarFightGroupRow_TypeDefinitionIndex = 12459;

	class ActivityStarFightGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EvaluateWave; // 0x10
		::System::String* GroupPicPath; // 0x18
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* ElementList; // 0x20
		::Il2CppArray<::System::UInt32>* TrialAvatar; // 0x28
		::System::UInt32 GroupID; // 0x30
		::System::UInt32 ActivityModuleID; // 0x34
		::System::UInt32 PerfectQuest; // 0x38
		::System::UInt32 MazeBuffID; // 0x3C
		::System::UInt32 TutorialGuideID; // 0x40
		::RPG::GameCore::StarFightSeason Season; // 0x44
		::System::UInt32 PerfectWave; // 0x48
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID FightStageDesc; // 0x50
		::RPG::Client::TextID GroupTitle; // 0x60
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
