#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueTournAreaGroupID.h"
#include "unitysdk/System/Object.h"
class AMPPONMNKBD;
class FCOEMCEDLNL;

#define AMPPONMNKBD_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCE1DB0)
#define AMPPONMNKBD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCE1BB0)

	class AMPPONMNKBD : public ::System::Object
	{
	public:
		::RPG::Client::TextID ANBDGFJDBPF; // 0x10
		::RPG::Client::TextID OENAMINOLLF; // 0x20
		::RPG::GameCore::RogueTournAreaGroupID JFMBIOOCPIL; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMPPONMNKBD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AMPPONMNKBD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AMPPONMNKBD*))((::PBYTE)hIl2Cpp + AMPPONMNKBD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
