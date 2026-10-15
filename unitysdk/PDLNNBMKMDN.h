#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define PDLNNBMKMDN_CTOR_OFFSET UNITYSDK_OFFSET(0xC01F470)
#define PDLNNBMKMDN_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xC01F4D0)
#define PDLNNBMKMDN_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xC01F480)

	class PDLNNBMKMDN : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* KEHGBOEDKAB; // 0x10
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PDLNNBMKMDN_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDLNNBMKMDN_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + PDLNNBMKMDN_GETEVENTTYPE_OFFSET))(this);
		}

	};
