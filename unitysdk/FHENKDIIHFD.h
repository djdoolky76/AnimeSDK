#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HMFOPIJNNDI.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/QteCatchGhostNotify.h"
namespace RPG::GameCore { class GameEntity; }

#define FHENKDIIHFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1576CD00)
#define FHENKDIIHFD_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1576CD10)
#define FHENKDIIHFD_GET_NOTIFYTYPE_OFFSET UNITYSDK_OFFSET(0x1576CD60)
#define FHENKDIIHFD_SET_NOTIFYTYPE_OFFSET UNITYSDK_OFFSET(0x1576CD70)

inline static constexpr unsigned int FHENKDIIHFD_TypeDefinitionIndex = 56643;

	class FHENKDIIHFD : public ::HMFOPIJNNDI
	{
	public:
		::RPG::GameCore::QteCatchGhostNotify _NotifyType_k__BackingField; // 0x18
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::QteCatchGhostNotify a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::QteCatchGhostNotify))((::PBYTE)hIl2Cpp + FHENKDIIHFD_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + FHENKDIIHFD_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::QteCatchGhostNotify get_NotifyType()
		{
			return ((::RPG::GameCore::QteCatchGhostNotify(*)(::PVOID))((::PBYTE)hIl2Cpp + FHENKDIIHFD_GET_NOTIFYTYPE_OFFSET))(this);
		}

		::System::Void set_NotifyType(::RPG::GameCore::QteCatchGhostNotify a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::QteCatchGhostNotify))((::PBYTE)hIl2Cpp + FHENKDIIHFD_SET_NOTIFYTYPE_OFFSET))(this, a1);
		}

	};
