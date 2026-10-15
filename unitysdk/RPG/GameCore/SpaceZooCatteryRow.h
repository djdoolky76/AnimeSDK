#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SpaceZooCatteryRow; }

#define RPG_GAMECORE_SPACEZOOCATTERYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAF2EA0)
#define RPG_GAMECORE_SPACEZOOCATTERYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DAF2CB0)

namespace RPG::GameCore
{
	class SpaceZooCatteryRow : public ::System::Object
	{
	public:
		::System::UInt32 FloorID; // 0x10
		::System::UInt32 CatteryID; // 0x14
		::System::UInt32 UnlockMissionID; // 0x18
		::System::UInt32 NpcGroupID; // 0x1C
		::System::UInt32 NpcInstanceID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOCATTERYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::SpaceZooCatteryRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SpaceZooCatteryRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOCATTERYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
