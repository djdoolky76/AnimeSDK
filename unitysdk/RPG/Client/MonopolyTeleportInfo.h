#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MONOPOLYTELEPORTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xE3011D0)
#define RPG_CLIENT_MONOPOLYTELEPORTINFO_GET_CELLID_OFFSET UNITYSDK_OFFSET(0xE301190)
#define RPG_CLIENT_MONOPOLYTELEPORTINFO_GET_MAPID_OFFSET UNITYSDK_OFFSET(0xE3011B0)
#define RPG_CLIENT_MONOPOLYTELEPORTINFO_SET_CELLID_OFFSET UNITYSDK_OFFSET(0xE3011A0)
#define RPG_CLIENT_MONOPOLYTELEPORTINFO_SET_MAPID_OFFSET UNITYSDK_OFFSET(0xE3011C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyTeleportInfo_TypeDefinitionIndex = 68181;

	class MonopolyTeleportInfo : public ::System::Object
	{
	public:
		::System::UInt32 _MapID_k__BackingField; // 0x10
		::System::UInt32 _CellID_k__BackingField; // 0x14
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYTELEPORTINFO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_CellID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYTELEPORTINFO_GET_CELLID_OFFSET))(this);
		}

		::System::Void set_CellID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYTELEPORTINFO_SET_CELLID_OFFSET))(this, a1);
		}

		::System::UInt32 get_MapID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYTELEPORTINFO_GET_MAPID_OFFSET))(this);
		}

		::System::Void set_MapID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYTELEPORTINFO_SET_MAPID_OFFSET))(this, a1);
		}

	};
}
