#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BJNJBJKHDCJ.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class TurnBattleEntityUnit; }

#define MOLEMOLE_TURNBATTLEENTITYUNIT___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0FEF00)
#define MOLEMOLE_TURNBATTLEENTITYUNIT___C__DISPLAYCLASS38_0__GETSKILLFILTER_B__0_OFFSET UNITYSDK_OFFSET(0x1A0FEF10)

namespace MoleMole
{
	inline static constexpr unsigned int TurnBattleEntityUnit___c__DisplayClass38_0_TypeDefinitionIndex = 38687;

	class TurnBattleEntityUnit___c__DisplayClass38_0 : public ::System::Object
	{
	public:
		::BJNJBJKHDCJ skill; // 0x10
		::MoleMole::TurnBattleEntityUnit* __4__this; // 0x38
		::System::Boolean ignoreRange; // 0x40
		::System::Boolean ignoreBlock; // 0x41

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetSkillFilter_b__0(::MoleMole::TurnBattleEntityUnit* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::TurnBattleEntityUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT___C__DISPLAYCLASS38_0__GETSKILLFILTER_B__0_OFFSET))(this, target);
		}
	};
}
