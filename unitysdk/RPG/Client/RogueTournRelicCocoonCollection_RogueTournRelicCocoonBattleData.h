#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueTournRelicCocoonData; }

#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_ROGUETOURNRELICCOCOONBATTLEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE038E80)

namespace RPG::Client
{
	class RogueTournRelicCocoonCollection_RogueTournRelicCocoonBattleData : public ::System::Object
	{
	public:
		::RPG::Client::RogueTournRelicCocoonData* CocoonData; // 0x10
		::System::UInt32 ArchiveSlotIndex; // 0x18
		::System::Byte _padding0[0x4];
		::System::Int64 ArchiveEndTime; // 0x20
		::System::UInt32 ChallengeCount; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_ROGUETOURNRELICCOCOONBATTLEDATA_CTOR_OFFSET))(this);
		}

	};
}
