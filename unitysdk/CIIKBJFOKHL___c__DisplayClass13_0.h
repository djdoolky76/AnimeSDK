#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleInitPosition.h"
#include "unitysdk/System/Object.h"
class ALMFLCJCHKP;

#define CIIKBJFOKHL___C__DISPLAYCLASS13_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCF85CD0)
#define CIIKBJFOKHL___C__DISPLAYCLASS13_0___FILTERSOLDIERBYINITPOSITION_B__4_OFFSET UNITYSDK_OFFSET(0xCF8AE60)

	class CIIKBJFOKHL___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::ChenLingBattleInitPosition minPosition; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIKBJFOKHL___C__DISPLAYCLASS13_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __FilterSoldierByInitPosition_b__4(::ALMFLCJCHKP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + CIIKBJFOKHL___C__DISPLAYCLASS13_0___FILTERSOLDIERBYINITPOSITION_B__4_OFFSET))(this, a1);
		}

	};
