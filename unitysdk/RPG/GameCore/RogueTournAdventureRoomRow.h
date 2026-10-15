#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueAdventureGameplayType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournAdventureRoomRow; }

#define RPG_GAMECORE_ROGUETOURNADVENTUREROOMROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA316C0)
#define RPG_GAMECORE_ROGUETOURNADVENTUREROOMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA31550)

namespace RPG::GameCore
{
	class RogueTournAdventureRoomRow : public ::System::Object
	{
	public:
		::System::UInt32 RoomID; // 0x10
		::System::UInt32 ParamGroupID; // 0x14
		::RPG::GameCore::RogueAdventureGameplayType AdventureType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNADVENTUREROOMROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournAdventureRoomRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournAdventureRoomRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNADVENTUREROOMROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
