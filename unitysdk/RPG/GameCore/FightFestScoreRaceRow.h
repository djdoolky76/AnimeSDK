#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ScoreRaceType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FightFestScoreRaceRow; }
namespace System { class String; }

#define RPG_GAMECORE_FIGHTFESTSCORERACEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8B2670)
#define RPG_GAMECORE_FIGHTFESTSCORERACEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E8B2070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FightFestScoreRaceRow_TypeDefinitionIndex = 13347;

	class FightFestScoreRaceRow : public ::System::Object
	{
	public:
		::System::String* RaceBgFigurePath; // 0x10
		::System::String* TutorialImgPath; // 0x18
		::System::String* DetailImgPath; // 0x20
		::System::String* ResultImgPath; // 0x28
		::Il2CppArray<::System::UInt32>* EventIDList; // 0x30
		::System::UInt32 ScoreRaceID; // 0x38
		::System::UInt32 RedAvatarID; // 0x3C
		::System::UInt32 PhaseID; // 0x40
		::RPG::GameCore::ScoreRaceType ScoreRaceType; // 0x44
		::System::UInt32 EventID; // 0x48
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID StageName; // 0x50
		::System::UInt32 TutorialID; // 0x60
		::System::UInt32 BlueAvatarID; // 0x64
		::System::UInt32 RewardID; // 0x68
		::System::UInt32 SortWeight; // 0x6C
		::RPG::Client::TextID RaceDesc; // 0x70
		::System::UInt32 TakeMainMissionID; // 0x80
		::System::UInt32 RewardScore; // 0x84
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
