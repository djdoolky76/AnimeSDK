#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BKHHFIJCHEP;
class LBKDBJPNCGI;
namespace RPG::Client::DiceCombat { class DiceCombatStartPVPGameParam; }

#define LBKDBJPNCGI___C__DISPLAYCLASS38_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB5FEC70)
#define LBKDBJPNCGI___C__DISPLAYCLASS38_0__STARTPVPGAME_B__0_OFFSET UNITYSDK_OFFSET(0xB600780)

inline static constexpr unsigned int LBKDBJPNCGI___c__DisplayClass38_0_TypeDefinitionIndex = 76114;

	class LBKDBJPNCGI___c__DisplayClass38_0 : public ::System::Object
	{
	public:
		::RPG::Client::DiceCombat::DiceCombatStartPVPGameParam* param; // 0x10
		::LBKDBJPNCGI* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKDBJPNCGI___C__DISPLAYCLASS38_0_CTOR_OFFSET))(this);
		}

		::System::Void _StartPVPGame_b__0(::BKHHFIJCHEP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKHHFIJCHEP*))((::PBYTE)hIl2Cpp + LBKDBJPNCGI___C__DISPLAYCLASS38_0__STARTPVPGAME_B__0_OFFSET))(this, a1);
		}

	};
