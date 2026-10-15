#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingSoldierTeamType.h"
#include "unitysdk/System/Object.h"

#define EOMFJLMAPHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA61C50)

	class EOMFJLMAPHP : public ::System::Object
	{
	public:
		::System::Int32 JIOEKGMNDEM; // 0x10
		::System::Int32 MODKNNDKFCA; // 0x14
		::System::Int32 HJCDPEDPOPG; // 0x18
		::System::Int32 BNJLGMBJMHE; // 0x1C
		::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType JCDIEKGKCPP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOMFJLMAPHP_CTOR_OFFSET))(this);
		}

	};
