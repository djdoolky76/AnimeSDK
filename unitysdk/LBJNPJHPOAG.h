#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

#define LBJNPJHPOAG_CTOR_OFFSET UNITYSDK_OFFSET(0xB600BF0)
#define LBJNPJHPOAG_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB600C00)
#define LBJNPJHPOAG_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB600C50)

	class LBJNPJHPOAG : public ::System::Object
	{
	public:
		::System::UInt32 DMIBHBADIGB; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LBJNPJHPOAG_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJNPJHPOAG_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJNPJHPOAG_GETSOURCERUNTIMEID_OFFSET))(this);
		}

	};
