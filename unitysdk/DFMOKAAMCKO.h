#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

#define DFMOKAAMCKO_CTOR_OFFSET UNITYSDK_OFFSET(0xE8335F0)
#define DFMOKAAMCKO_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE833600)
#define DFMOKAAMCKO_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE833650)

inline static constexpr unsigned int DFMOKAAMCKO_TypeDefinitionIndex = 56629;

	class DFMOKAAMCKO : public ::System::Object
	{
	public:
		::System::UInt32 DMIBHBADIGB; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DFMOKAAMCKO_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMOKAAMCKO_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMOKAAMCKO_GETSOURCERUNTIMEID_OFFSET))(this);
		}

	};
