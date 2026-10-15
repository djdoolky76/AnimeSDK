#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

#define BCKLGFPHNDN_CTOR_OFFSET UNITYSDK_OFFSET(0x162E1E80)
#define BCKLGFPHNDN_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x162E1EE0)
#define BCKLGFPHNDN_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x162E1E90)

	class BCKLGFPHNDN : public ::System::Object
	{
	public:
		::System::UInt32 DOCIPOEABOM; // 0x10
		::System::UInt32 GNOCBLOMLAC; // 0x14
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BCKLGFPHNDN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCKLGFPHNDN_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + BCKLGFPHNDN_GETEVENTTYPE_OFFSET))(this);
		}

	};
