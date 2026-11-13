#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingSoldierTeamType.h"
#include "unitysdk/System/Object.h"

#define MJBMINJDNBA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C263610)

inline static constexpr unsigned int MJBMINJDNBA_TypeDefinitionIndex = 44815;

	class MJBMINJDNBA : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType JCDIEKGKCPP; // 0x10
		::System::Int32 NMOKIHDMMNG; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBMINJDNBA_CTOR_OFFSET))(this);
		}

	};
