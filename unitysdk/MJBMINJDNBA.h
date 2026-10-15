#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingSoldierTeamType.h"
#include "unitysdk/System/Object.h"

#define MJBMINJDNBA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C92C8A0)

	class MJBMINJDNBA : public ::System::Object
	{
	public:
		::System::Int32 NMOKIHDMMNG; // 0x10
		::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType JCDIEKGKCPP; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBMINJDNBA_CTOR_OFFSET))(this);
		}

	};
