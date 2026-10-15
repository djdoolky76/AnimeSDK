#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define ACDCFEHGPHI_CTOR_OFFSET UNITYSDK_OFFSET(0xB1180F0)
#define ACDCFEHGPHI_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB118150)
#define ACDCFEHGPHI_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB118100)

	class ACDCFEHGPHI : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* EOBLJJBOBIN; // 0x10
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + ACDCFEHGPHI_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACDCFEHGPHI_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + ACDCFEHGPHI_GETEVENTTYPE_OFFSET))(this);
		}

	};
