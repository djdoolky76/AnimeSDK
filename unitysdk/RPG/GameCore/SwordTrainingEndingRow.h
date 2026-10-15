#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingEndingRow; }
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGENDINGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB49750)
#define RPG_GAMECORE_SWORDTRAININGENDINGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB49420)

namespace RPG::GameCore
{
	class SwordTrainingEndingRow : public ::System::Object
	{
	public:
		::System::String* StoryImage; // 0x10
		::System::String* StoryUnlockImage; // 0x18
		::System::UInt32 RewardID; // 0x20
		::System::UInt32 EndingID; // 0x24
		::System::UInt32 StoryID; // 0x28
		::System::UInt32 QuestID; // 0x2C
		::RPG::Client::TextID UnlockDesc; // 0x30
		::RPG::Client::TextID StoryTitle; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGENDINGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwordTrainingEndingRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwordTrainingEndingRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGENDINGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
