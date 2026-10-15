#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Pet { class IPet; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define PJJKDGFODDL_LPOOMKPCIOG_CTOR_OFFSET UNITYSDK_OFFSET(0xC290270)

	class PJJKDGFODDL_LPOOMKPCIOG : public ::System::Object
	{
	public:
		::System::String* BFJKBHLFLAB; // 0x10
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x18
		::RPG::Client::Pet::IPet* CJPPJEHJBEG; // 0x20
		::System::UInt32 JBIJAMBKGMA; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJKDGFODDL_LPOOMKPCIOG_CTOR_OFFSET))(this);
		}

	};
