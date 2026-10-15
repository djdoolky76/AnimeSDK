#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MinimapAreaType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SubNavMapRow; }

#define RPG_GAMECORE_SUBNAVMAPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB38C40)
#define RPG_GAMECORE_SUBNAVMAPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB38370)

namespace RPG::GameCore
{
	class SubNavMapRow : public ::System::Object
	{
	public:
		::System::UInt32 FloorID; // 0x10
		::System::UInt32 AreaID; // 0x14
		::System::UInt32 NavMapSubTabID; // 0x18
		::System::UInt32 NearbyTeleportMappingInfoID; // 0x1C
		::System::Int32 DefaultLayer; // 0x20
		::System::UInt32 ID; // 0x24
		::RPG::GameCore::MinimapAreaType Type; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBNAVMAPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::SubNavMapRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SubNavMapRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBNAVMAPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
