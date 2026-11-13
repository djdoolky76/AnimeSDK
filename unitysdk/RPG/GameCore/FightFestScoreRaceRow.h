#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ScoreRaceType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FightFestScoreRaceRow; }
namespace System { class String; }

#define RPG_GAMECORE_FIGHTFESTSCORERACEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E845170)
#define RPG_GAMECORE_FIGHTFESTSCORERACEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E844B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FightFestScoreRaceRow_TypeDefinitionIndex = 13347;

	class FightFestScoreRaceRow : public ::System::Object
	{
	public:
		::System::String* ResultImgPath; // 0x10
		::System::String* RaceBgFigurePath; // 0x18
		::Il2CppArray<::System::UInt32>* EventIDList; // 0x20
		::System::String* TutorialImgPath; // 0x28
		::System::String* DetailImgPath; // 0x30
		::System::UInt32 TutorialID; // 0x38
		::System::UInt32 TakeMainMissionID; // 0x3C
		::System::UInt32 RedAvatarID; // 0x40
		::System::UInt32 EventID; // 0x44
		::System::UInt32 ScoreRaceID; // 0x48
		::System::UInt32 RewardID; // 0x4C
		::System::UInt32 BlueAvatarID; // 0x50
		::System::UInt32 SortWeight; // 0x54
		::System::UInt32 RewardScore; // 0x58
		::RPG::GameCore::ScoreRaceType ScoreRaceType; // 0x5C
		::System::UInt32 PhaseID; // 0x60
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID RaceDesc; // 0x68
		::RPG::Client::TextID StageName; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSCORERACEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::FightFestScoreRaceRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FightFestScoreRaceRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSCORERACEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
