#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

#define BOPJMOFIHOK_CTOR_OFFSET UNITYSDK_OFFSET(0xC199810)
#define BOPJMOFIHOK_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xC1997C0)
#define BOPJMOFIHOK_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xC199770)

inline static constexpr unsigned int BOPJMOFIHOK_TypeDefinitionIndex = 56843;

	class BOPJMOFIHOK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPJMOFIHOK_CTOR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPJMOFIHOK_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPJMOFIHOK_GETEVENTTYPE_OFFSET))(this);
		}

	};
