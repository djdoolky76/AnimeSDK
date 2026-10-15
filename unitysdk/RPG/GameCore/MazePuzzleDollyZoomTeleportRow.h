#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazePuzzleDollyZoomTeleportRow; }
namespace System { class String; }

#define RPG_GAMECORE_MAZEPUZZLEDOLLYZOOMTELEPORTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D86B0F0)
#define RPG_GAMECORE_MAZEPUZZLEDOLLYZOOMTELEPORTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D86AD30)

namespace RPG::GameCore
{
	class MazePuzzleDollyZoomTeleportRow : public ::System::Object
	{
	public:
		::System::String* PuzzlePrefab; // 0x10
		::System::UInt32 OverridePosA; // 0x18
		::System::Single OverrideInitFOV; // 0x1C
		::System::UInt32 InstanceIDB; // 0x20
		::System::UInt32 OverrideTargetPosB; // 0x24
		::System::UInt32 FloorID; // 0x28
		::System::UInt32 OverridePosB; // 0x2C
		::System::UInt32 GroupID; // 0x30
		::System::UInt32 DefaultComplete; // 0x34
		::System::UInt32 InstanceIDA; // 0x38
		::System::UInt32 OverrideTargetPosA; // 0x3C
		::System::UInt32 ID; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEDOLLYZOOMTELEPORTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MazePuzzleDollyZoomTeleportRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MazePuzzleDollyZoomTeleportRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEDOLLYZOOMTELEPORTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
