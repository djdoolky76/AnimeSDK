#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingSoldierState.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleInitPosition.h"
#include "unitysdk/RPG/GameCore/ChenLingSoldierScale.h"
#include "unitysdk/System/Object.h"

#define GHJDHNMCJDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA79E30)

inline static constexpr unsigned int GHJDHNMCJDE_TypeDefinitionIndex = 44841;

	class GHJDHNMCJDE : public ::System::Object
	{
	public:
		::RPG::GameCore::ChenLingSoldierScale NEMDKBKDFDN; // 0x10
		::System::UInt32 GJKEMDINKGO; // 0x14
		::System::UInt32 BHDDBJBGENI; // 0x18
		::RPG::Client::LittleGame::ChenLing::ChenLingSoldierState MEPFOEEGBEA; // 0x1C
		::System::Boolean HFINPNHFENI; // 0x20
		::System::Byte _padding0[0x3];
		::RPG::GameCore::ChenLingBattleInitPosition LDDBFJDDNJO; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJDHNMCJDE_CTOR_OFFSET))(this);
		}

	};
