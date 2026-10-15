#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HMFOPIJNNDI.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class GameEntity; }

#define KANBIAICKPI_CTOR_OFFSET UNITYSDK_OFFSET(0xB2CACF0)
#define KANBIAICKPI_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB2DEC90)

	class KANBIAICKPI : public ::HMFOPIJNNDI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KANBIAICKPI_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + KANBIAICKPI_GETEVENTTYPE_OFFSET))(this);
		}

	};
