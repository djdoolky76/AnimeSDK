#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PDOICIDLIFP_CTOR_OFFSET UNITYSDK_OFFSET(0xC927B50)
#define PDOICIDLIFP_GET_ADVENTUREPLAYERID_OFFSET UNITYSDK_OFFSET(0xC927B30)
#define PDOICIDLIFP_SET_ADVENTUREPLAYERID_OFFSET UNITYSDK_OFFSET(0xC927B40)

inline static constexpr unsigned int PDOICIDLIFP_TypeDefinitionIndex = 64009;

	class PDOICIDLIFP : public ::System::Object
	{
	public:
		::System::UInt32 _AdventurePlayerID_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDOICIDLIFP_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_AdventurePlayerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDOICIDLIFP_GET_ADVENTUREPLAYERID_OFFSET))(this);
		}

		::System::Void set_AdventurePlayerID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PDOICIDLIFP_SET_ADVENTUREPLAYERID_OFFSET))(this, a1);
		}

	};
