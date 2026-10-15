#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinBattleHudAreaType.h"

#define HGIMEDCAIHC_CTOR_OFFSET UNITYSDK_OFFSET(0x1EDC0)

	struct alignas(4) HGIMEDCAIHC
	{
		::RPG::GameCore::FateRinBattleHudAreaType ANKBAKDHDJD; // 0x10
		::System::Boolean GNDCCBNILML; // 0x14
		::System::Void _ctor(::RPG::GameCore::FateRinBattleHudAreaType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinBattleHudAreaType, ::System::Boolean))((::PBYTE)hIl2Cpp + HGIMEDCAIHC_CTOR_OFFSET))(this, a1, a2);
		}

	};
