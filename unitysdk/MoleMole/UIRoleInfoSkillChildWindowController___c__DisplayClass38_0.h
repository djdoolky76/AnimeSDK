#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LCGECCIBBDI;
namespace MoleMole { class UIRoleInfoSkillChildWindowController; }

#define MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0x155E5270)
#define MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__DISPLAYCLASS38_0__ONUIINIT_B__21_OFFSET UNITYSDK_OFFSET(0x155E5280)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleInfoSkillChildWindowController___c__DisplayClass38_0_TypeDefinitionIndex = 89363;

	class UIRoleInfoSkillChildWindowController___c__DisplayClass38_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRoleInfoSkillChildWindowController* __4__this; // 0x10
		::LCGECCIBBDI* item; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__21()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__DISPLAYCLASS38_0__ONUIINIT_B__21_OFFSET))(this);
		}
	};
}
