#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class NpcMonsterTrackQuestRow; }

#define RPG_GAMECORE_NPCMONSTERTRACKQUESTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8DD580)
#define RPG_GAMECORE_NPCMONSTERTRACKQUESTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8DCF50)

namespace RPG::GameCore
{
	class NpcMonsterTrackQuestRow : public ::System::Object
	{
	public:
		::System::UInt32 MapInfoID; // 0x10
		::System::UInt32 QuestID; // 0x14
		::System::UInt32 NpcMonsterTrackID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERTRACKQUESTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::NpcMonsterTrackQuestRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NpcMonsterTrackQuestRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERTRACKQUESTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
