#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingEndingRow; }
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGENDINGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB1BE70)
#define RPG_GAMECORE_SWORDTRAININGENDINGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB1BB40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingEndingRow_TypeDefinitionIndex = 12430;

	class SwordTrainingEndingRow : public ::System::Object
	{
	public:
		::System::String* StoryUnlockImage; // 0x10
		::System::String* StoryImage; // 0x18
		::RPG::Client::TextID StoryTitle; // 0x20
		::System::UInt32 RewardID; // 0x30
		::System::UInt32 StoryID; // 0x34
		::RPG::Client::TextID UnlockDesc; // 0x38
		::System::UInt32 QuestID; // 0x48
		::System::UInt32 EndingID; // 0x4C
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
