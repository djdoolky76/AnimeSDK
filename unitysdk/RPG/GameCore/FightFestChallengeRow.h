#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConditionParam; }
namespace RPG::GameCore { class FightFestChallengeRow; }
namespace System { class String; }

#define RPG_GAMECORE_FIGHTFESTCHALLENGEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC99540)
#define RPG_GAMECORE_FIGHTFESTCHALLENGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1FC98D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FightFestChallengeRow_TypeDefinitionIndex = 13353;

	class FightFestChallengeRow : public ::System::Object
	{
	public:
		::System::String* OriginalFigurePath; // 0x10
		::Il2CppArray<::System::UInt32>* SpecialAvatarList; // 0x18
		::Il2CppArray<::System::UInt32>* QuestIDList; // 0x20
		::Il2CppArray<::System::UInt32>* BattleTargetList; // 0x28
		::System::String* TabIconPath; // 0x30
		::System::String* FigurePath; // 0x38
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* UnlockConditionList; // 0x40
		::RPG::Client::TextID ChallengeName; // 0x48
		::System::UInt32 TutorialID; // 0x58
		::System::UInt32 EnvironmentBuffID; // 0x5C
		::RPG::Client::TextID UnlockTips; // 0x60
		::System::UInt32 AvatarInfoID; // 0x70
		::System::UInt32 QuestGroupID; // 0x74
		::System::UInt32 ChallengeID; // 0x78
		::System::UInt32 EventID; // 0x7C
		::RPG::Client::TextID StoryDesc; // 0x80
		::RPG::Client::TextID OriginalStageName; // 0x90
		::System::UInt32 UnlockSubMussionID; // 0xA0
		::System::UInt32 UnlockSubMissionID; // 0xA4
		::RPG::Client::TextID TabName; // 0xA8
		::System::UInt32 GroupID; // 0xB8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTCHALLENGEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::FightFestChallengeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FightFestChallengeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTCHALLENGEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
