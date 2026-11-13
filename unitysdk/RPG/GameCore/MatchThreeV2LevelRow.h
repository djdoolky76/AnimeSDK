#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MatchThreeV2FirstRoleType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeV2LevelRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MATCHTHREEV2LEVELROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB632D0)
#define RPG_GAMECORE_MATCHTHREEV2LEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EB62BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeV2LevelRow_TypeDefinitionIndex = 11989;

	class MatchThreeV2LevelRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SpecialRuleIDList; // 0x10
		::Il2CppArray<::System::UInt32>* EnvironmentIDList; // 0x18
		::System::String* LevelImage; // 0x20
		::Il2CppArray<::System::UInt32>* RecommendBattleItemList; // 0x28
		::Il2CppArray<::System::UInt32>* RecommendBirdList; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* OpponentBattleItemMap; // 0x38
		::Il2CppArray<::System::UInt32>* VSTalk; // 0x40
		::RPG::GameCore::MatchThreeV2FirstRoleType FirstType; // 0x48
		::System::UInt32 PreSubmission; // 0x4C
		::RPG::Client::TextID VictoryDesc; // 0x50
		::RPG::Client::TextID LevelName; // 0x60
		::System::UInt32 PlayerBirdID; // 0x70
		::System::UInt32 TurnStep; // 0x74
		::System::UInt32 LevelID; // 0x78
		::System::UInt32 PreLevel; // 0x7C
		::System::UInt32 OpponentID; // 0x80
		::System::UInt32 MaxRatioPowerDiff; // 0x84
		::RPG::Client::TextID LoseDesc; // 0x88
		::System::UInt32 PlayerID; // 0x98
		::System::UInt32 OpponentBirdID; // 0x9C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2LEVELROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MatchThreeV2LevelRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MatchThreeV2LevelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2LEVELROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
