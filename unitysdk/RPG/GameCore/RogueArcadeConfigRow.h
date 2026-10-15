#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueAdventureGameplayType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueArcadeConfigRow; }

#define RPG_GAMECORE_ROGUEARCADECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A8F10)
#define RPG_GAMECORE_ROGUEARCADECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9A8D60)

namespace RPG::GameCore
{
	class RogueArcadeConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ArcadeRoomID; // 0x10
		::RPG::GameCore::RogueAdventureGameplayType AdventureType; // 0x14
		::System::UInt32 ArcadeID; // 0x18
		::System::UInt32 ParamGroupID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEARCADECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueArcadeConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueArcadeConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEARCADECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
