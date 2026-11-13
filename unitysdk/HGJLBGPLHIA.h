#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LittleGame { class MovieBossConfig; }
namespace RPG::Client::LittleGame { class MovieGameLevelConfig; }

#define HGJLBGPLHIA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA3B00)

inline static constexpr unsigned int HGJLBGPLHIA_TypeDefinitionIndex = 43306;

	class HGJLBGPLHIA : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::MovieBossConfig* KMGIBGPAOPC; // 0x10
		::RPG::Client::LittleGame::MovieGameLevelConfig* EABKOHGCHFP; // 0x18
		::System::Single DBMAHJMCGOD; // 0x20
		::System::Single HOGDJANIOMI; // 0x24
		::System::Single ODEDKOHDCOC; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJLBGPLHIA_CTOR_OFFSET))(this);
		}

	};
