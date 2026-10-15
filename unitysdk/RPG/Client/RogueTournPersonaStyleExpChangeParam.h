#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ROGUETOURNPERSONASTYLEEXPCHANGEPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xE033CB0)

namespace RPG::Client
{
	class RogueTournPersonaStyleExpChangeParam : public ::System::Object
	{
	public:
		::System::UInt32 NewLevel; // 0x10
		::System::UInt32 OldLevel; // 0x14
		::System::Int32 DeltaExp; // 0x18
		::System::UInt32 NewExp; // 0x1C
		::System::UInt32 OldExp; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEEXPCHANGEPARAM_CTOR_OFFSET))(this);
		}

	};
}
