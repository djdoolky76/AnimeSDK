#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StarFightDifficulty.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityStarFightStageConfigRow; }

#define RPG_GAMECORE_ACTIVITYSTARFIGHTSTAGECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D351650)
#define RPG_GAMECORE_ACTIVITYSTARFIGHTSTAGECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D351430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityStarFightStageConfigRow_TypeDefinitionIndex = 12389;

	class ActivityStarFightStageConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestList; // 0x10
		::RPG::GameCore::StarFightDifficulty DifficultyLevel; // 0x18
		::System::UInt32 EventID; // 0x1C
		::System::UInt32 GroupID; // 0x20
		::System::UInt32 UnlockQuest; // 0x24
		::System::UInt32 BattleAreaID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYSTARFIGHTSTAGECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityStarFightStageConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityStarFightStageConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYSTARFIGHTSTAGECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
