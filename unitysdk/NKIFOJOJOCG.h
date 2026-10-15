#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define NKIFOJOJOCG_CTOR_OFFSET UNITYSDK_OFFSET(0xBC35590)

	class NKIFOJOJOCG : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GKDKCLMLOME; // 0x10
		::RPG::Client::TextID OELMOCMDEJI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIFOJOJOCG_CTOR_OFFSET))(this);
		}

	};
