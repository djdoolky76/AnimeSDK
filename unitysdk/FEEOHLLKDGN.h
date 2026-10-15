#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HMFOPIJNNDI.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class GameEntity; }

#define FEEOHLLKDGN_CTOR_OFFSET UNITYSDK_OFFSET(0x156E8880)
#define FEEOHLLKDGN_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x156E8890)

inline static constexpr unsigned int FEEOHLLKDGN_TypeDefinitionIndex = 56639;

	class FEEOHLLKDGN : public ::HMFOPIJNNDI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FEEOHLLKDGN_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEOHLLKDGN_GETEVENTTYPE_OFFSET))(this);
		}

	};
