#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

#define AGBAHBKKMBC_CTOR_OFFSET UNITYSDK_OFFSET(0xCF258A0)
#define AGBAHBKKMBC_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCF25850)
#define AGBAHBKKMBC_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCF25800)

	class AGBAHBKKMBC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBAHBKKMBC_CTOR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBAHBKKMBC_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBAHBKKMBC_GETEVENTTYPE_OFFSET))(this);
		}

	};
