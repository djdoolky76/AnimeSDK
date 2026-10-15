#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelDifficulty.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityFightConfigRow; }

#define RPG_GAMECORE_ACTIVITYFIGHTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3634D0)
#define RPG_GAMECORE_ACTIVITYFIGHTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D362CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityFightConfigRow_TypeDefinitionIndex = 11598;

	class ActivityFightConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 RewardWave2; // 0x10
		::RPG::GameCore::LevelDifficulty DifficultyLevel; // 0x14
		::System::UInt32 TotalWave; // 0x18
		::System::UInt32 ActivityFightGroupID; // 0x1C
		::System::UInt32 RoundsLimit; // 0x20
		::System::UInt32 RewardID; // 0x24
		::System::UInt32 RewardQuest; // 0x28
		::System::UInt32 OffsetLevel; // 0x2C
		::System::UInt32 RewardWave; // 0x30
		::System::UInt32 FightEventID; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFIGHTCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityFightConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityFightConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFIGHTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
