#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/Battle/FateRinBattleEnemyHudHideType.h"
#include "unitysdk/System/Object.h"
class ECNEEKNHIOE;

#define DLALBMFJKDK_CTOR_OFFSET UNITYSDK_OFFSET(0xF8908B0)

	class DLALBMFJKDK : public ::System::Object
	{
	public:
		::ECNEEKNHIOE* HNEOOKPBCNK; // 0x10
		::System::Boolean GNDCCBNILML; // 0x18
		::System::Byte _padding0[0x3];
		::RPG::Client::FateRin::Battle::FateRinBattleEnemyHudHideType LKDIMHMECII; // 0x1C
		::System::Void _ctor(::ECNEEKNHIOE* a1, ::RPG::Client::FateRin::Battle::FateRinBattleEnemyHudHideType a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::ECNEEKNHIOE*, ::RPG::Client::FateRin::Battle::FateRinBattleEnemyHudHideType, ::System::Boolean))((::PBYTE)hIl2Cpp + DLALBMFJKDK_CTOR_OFFSET))(this, a1, a2, a3);
		}

	};
