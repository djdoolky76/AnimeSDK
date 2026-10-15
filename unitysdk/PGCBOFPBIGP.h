#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define PGCBOFPBIGP_CTOR_OFFSET UNITYSDK_OFFSET(0xC2151F0)
#define PGCBOFPBIGP_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xC215250)
#define PGCBOFPBIGP_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xC215200)

inline static constexpr unsigned int PGCBOFPBIGP_TypeDefinitionIndex = 56669;

	class PGCBOFPBIGP : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* PHLAMKCLLKP; // 0x10
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PGCBOFPBIGP_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGCBOFPBIGP_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + PGCBOFPBIGP_GETEVENTTYPE_OFFSET))(this);
		}

	};
