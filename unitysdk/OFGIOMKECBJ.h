#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

#define OFGIOMKECBJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBE39E60)
#define OFGIOMKECBJ_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xBE39E10)
#define OFGIOMKECBJ_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xBE39DC0)

inline static constexpr unsigned int OFGIOMKECBJ_TypeDefinitionIndex = 56633;

	class OFGIOMKECBJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFGIOMKECBJ_CTOR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFGIOMKECBJ_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + OFGIOMKECBJ_GETEVENTTYPE_OFFSET))(this);
		}

	};
