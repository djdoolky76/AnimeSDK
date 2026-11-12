#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MazePuzzleMovieGameMode.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazePuzzleMovieLevelRow; }
namespace System { class String; }

#define RPG_GAMECORE_MAZEPUZZLEMOVIELEVELROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA86A40)
#define RPG_GAMECORE_MAZEPUZZLEMOVIELEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA86180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazePuzzleMovieLevelRow_TypeDefinitionIndex = 14240;

	class MazePuzzleMovieLevelRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestList; // 0x10
		::System::String* TriggerCustomString; // 0x18
		::RPG::Client::TextID Description; // 0x20
		::System::UInt32 UnlockConditionMode; // 0x30
		::System::UInt32 UnlockSubmission; // 0x34
		::RPG::Client::TextID Title; // 0x38
		::System::UInt32 Tutorial; // 0x48
		::RPG::GameCore::MazePuzzleMovieGameMode MovieMode; // 0x4C
		::System::UInt32 UnlockCondition; // 0x50
		::System::UInt32 MovieLevel; // 0x54
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
