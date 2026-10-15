#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define HMFOPIJNNDI_CTOR_OFFSET UNITYSDK_OFFSET(0x15D7C5D0)
#define HMFOPIJNNDI_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x15D7C630)
#define HMFOPIJNNDI_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x15D7C5E0)

inline static constexpr unsigned int HMFOPIJNNDI_TypeDefinitionIndex = 56635;

	class HMFOPIJNNDI : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x10
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HMFOPIJNNDI_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMFOPIJNNDI_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + HMFOPIJNNDI_GETEVENTTYPE_OFFSET))(this);
		}

	};
