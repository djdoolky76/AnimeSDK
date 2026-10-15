#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MazePuzzleMovieGameMode.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazePuzzleMovieLevelRow; }
namespace System { class String; }

#define RPG_GAMECORE_MAZEPUZZLEMOVIELEVELROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D86C420)
#define RPG_GAMECORE_MAZEPUZZLEMOVIELEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D86BB60)

namespace RPG::GameCore
{
	class MazePuzzleMovieLevelRow : public ::System::Object
	{
	public:
		::System::String* TriggerCustomString; // 0x10
		::Il2CppArray<::System::UInt32>* QuestList; // 0x18
		::RPG::Client::TextID Title; // 0x20
		::System::UInt32 UnlockConditionMode; // 0x30
		::System::UInt32 UnlockCondition; // 0x34
		::System::UInt32 MovieLevel; // 0x38
		::System::UInt32 Tutorial; // 0x3C
		::System::UInt32 UnlockSubmission; // 0x40
		::RPG::GameCore::MazePuzzleMovieGameMode MovieMode; // 0x44
		::RPG::Client::TextID Description; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEMOVIELEVELROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MazePuzzleMovieLevelRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MazePuzzleMovieLevelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEMOVIELEVELROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
