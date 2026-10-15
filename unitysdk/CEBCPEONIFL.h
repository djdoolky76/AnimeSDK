#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

#define CEBCPEONIFL_CTOR_OFFSET UNITYSDK_OFFSET(0xC7782F0)
#define CEBCPEONIFL_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xC7782A0)
#define CEBCPEONIFL_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xC778250)

inline static constexpr unsigned int CEBCPEONIFL_TypeDefinitionIndex = 56656;

	class CEBCPEONIFL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEBCPEONIFL_CTOR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEBCPEONIFL_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CEBCPEONIFL_GETEVENTTYPE_OFFSET))(this);
		}

	};
