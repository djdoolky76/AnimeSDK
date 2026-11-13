#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeLevelRow; }
namespace System { class String; }

#define RPG_GAMECORE_MATCHTHREELEVELROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB5DDD0)
#define RPG_GAMECORE_MATCHTHREELEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EB5D1A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeLevelRow_TypeDefinitionIndex = 11954;

	class MatchThreeLevelRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EnvironmentID; // 0x10
		::Il2CppArray<::System::UInt32>* VSTalkList; // 0x18
		::System::String* LevelImage; // 0x20
		::System::UInt32 OpponentBirdID; // 0x28
		::System::UInt32 TurnStep; // 0x2C
		::RPG::Client::TextID MissionDescription; // 0x30
		::System::UInt32 LevelID; // 0x40
		::System::UInt32 LevelMission; // 0x44
		::RPG::Client::TextID LoseDesc; // 0x48
		::System::UInt32 PlayerID; // 0x58
		::System::UInt32 RewardID; // 0x5C
		::RPG::Client::TextID VictoryDesc; // 0x60
		::System::UInt32 Mode; // 0x70
		::System::UInt32 UnlockID; // 0x74
		::RPG::Client::TextID LevelDescription; // 0x78
		::System::UInt32 GoMissionCondition; // 0x88
		::System::UInt32 HPmax; // 0x8C
		::RPG::Client::TextID LevelName; // 0x90
		::System::UInt32 PlayerBirdID; // 0xA0
		::System::UInt32 OpponentID; // 0xA4
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREELEVELROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MatchThreeLevelRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MatchThreeLevelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREELEVELROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
