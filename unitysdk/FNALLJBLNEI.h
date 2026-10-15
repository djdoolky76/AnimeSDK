#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"
class GELIALJDFBL;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define FNALLJBLNEI_EGNOMFBOLKG_OFFSET UNITYSDK_OFFSET(0x2E77E10)

	struct alignas(8) FNALLJBLNEI
	{
		::RPG::GameCore::TurnBasedModifierInstance* ILIIOLJMKME; // 0x10
		::RPG::GameCore::TeamTypeMask FGMEILPBDFO; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::EntityTypeMask FJLHNACECGL; // 0x20
		::System::Byte _padding1[0x4];
		::GELIALJDFBL* FHAAHMEJMCI; // 0x28
		::System::Boolean INJIAAEJAOI; // 0x30
		::System::Boolean EGNOMFBOLKG(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FNALLJBLNEI_EGNOMFBOLKG_OFFSET))(this, a1);
		}

	};
