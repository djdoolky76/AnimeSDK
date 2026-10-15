#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"

#define ONIJDACKGJG_JDBNCCAFLLO_CTOR_OFFSET UNITYSDK_OFFSET(0x3C2BC80)

	struct alignas(4) ONIJDACKGJG_JDBNCCAFLLO
	{
		::System::Int32 IDGNLJPNCFD; // 0x10
		::RPG::GameCore::CakeRaceCellType JDDKEGDBPDK; // 0x14
		::System::Boolean DDPJHJEGADC; // 0x18
		::System::Void _ctor(::System::Int32 a1, ::RPG::GameCore::CakeRaceCellType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + ONIJDACKGJG_JDBNCCAFLLO_CTOR_OFFSET))(this, a1, a2);
		}

	};
