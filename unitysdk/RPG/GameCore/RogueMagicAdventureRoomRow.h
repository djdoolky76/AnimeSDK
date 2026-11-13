#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueAdventureGameplayType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMagicAdventureRoomRow; }

#define RPG_GAMECORE_ROGUEMAGICADVENTUREROOMROW_CTOR_OFFSET UNITYSDK_OFFSET(0x207726E0)
#define RPG_GAMECORE_ROGUEMAGICADVENTUREROOMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x20772570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicAdventureRoomRow_TypeDefinitionIndex = 15018;

	class RogueMagicAdventureRoomRow : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueAdventureGameplayType AdventureType; // 0x10
		::System::UInt32 RoomID; // 0x14
		::System::UInt32 ParamGroupID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICADVENTUREROOMROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMagicAdventureRoomRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMagicAdventureRoomRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICADVENTUREROOMROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
