#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define EEDMALFDAGH_CTOR_OFFSET UNITYSDK_OFFSET(0x13A2A6A0)
#define EEDMALFDAGH_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x13A2A700)
#define EEDMALFDAGH_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x13A2A6B0)

	class EEDMALFDAGH : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* KEHGBOEDKAB; // 0x10
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EEDMALFDAGH_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEDMALFDAGH_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + EEDMALFDAGH_GETEVENTTYPE_OFFSET))(this);
		}

	};
