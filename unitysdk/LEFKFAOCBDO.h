#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
class LEFKFAOCBDO;

#define LEFKFAOCBDO_CTOR_OFFSET UNITYSDK_OFFSET(0xB649340)
#define LEFKFAOCBDO_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6492F0)
#define LEFKFAOCBDO_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6492B0)
#define LEFKFAOCBDO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB649260)

inline static constexpr unsigned int LEFKFAOCBDO_TypeDefinitionIndex = 56683;

	class LEFKFAOCBDO : public ::CMPGEAFHHDC
	{
	public:
		::System::UInt32 KDKBEBBKFOE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFKFAOCBDO_CTOR_OFFSET))(this);
		}

		::LEFKFAOCBDO* KPJGDHLENIP(::System::UInt32 a1)
		{
			return ((::LEFKFAOCBDO*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LEFKFAOCBDO_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFKFAOCBDO_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFKFAOCBDO_GETEVENTTYPE_OFFSET))(this);
		}

	};
