#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define JKABILFKAMB_CTOR_OFFSET UNITYSDK_OFFSET(0xB20C7D0)
#define JKABILFKAMB_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB20C780)
#define JKABILFKAMB_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB20C730)

inline static constexpr unsigned int JKABILFKAMB_TypeDefinitionIndex = 56671;

	class JKABILFKAMB : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* BDHFPPIGIAH; // 0x10
		::System::String* DHMDAEKJENF; // 0x18
		::System::UInt32 GDBJDAOOCOH; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKABILFKAMB_CTOR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKABILFKAMB_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + JKABILFKAMB_GETEVENTTYPE_OFFSET))(this);
		}

	};
