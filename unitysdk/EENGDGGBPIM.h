#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HMFOPIJNNDI.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class GameEntity; }

#define EENGDGGBPIM_CTOR_OFFSET UNITYSDK_OFFSET(0x13A3FEE0)
#define EENGDGGBPIM_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x13A3FEF0)

inline static constexpr unsigned int EENGDGGBPIM_TypeDefinitionIndex = 56640;

	class EENGDGGBPIM : public ::HMFOPIJNNDI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EENGDGGBPIM_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + EENGDGGBPIM_GETEVENTTYPE_OFFSET))(this);
		}

	};
