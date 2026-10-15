#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define DJBBODHFLAM_CTOR_OFFSET UNITYSDK_OFFSET(0xF226CE0)
#define DJBBODHFLAM_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xF226C90)
#define DJBBODHFLAM_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xF226C40)

inline static constexpr unsigned int DJBBODHFLAM_TypeDefinitionIndex = 56673;

	class DJBBODHFLAM : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x10
		::RPG::GameCore::GameEntity* BDHFPPIGIAH; // 0x18
		::System::Boolean ONPMKJHNPOM; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJBBODHFLAM_CTOR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJBBODHFLAM_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + DJBBODHFLAM_GETEVENTTYPE_OFFSET))(this);
		}

	};
