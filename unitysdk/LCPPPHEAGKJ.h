#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define LCPPPHEAGKJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB615070)
#define LCPPPHEAGKJ_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6150D0)
#define LCPPPHEAGKJ_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB615080)

inline static constexpr unsigned int LCPPPHEAGKJ_TypeDefinitionIndex = 56670;

	class LCPPPHEAGKJ : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* KJFEBLGPMAN; // 0x10
		::System::Boolean BHEPDKPEPNO; // 0x18
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + LCPPPHEAGKJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCPPPHEAGKJ_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + LCPPPHEAGKJ_GETEVENTTYPE_OFFSET))(this);
		}

	};
