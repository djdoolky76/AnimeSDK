#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS125_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17D8B010)
#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS125_0__DOTRIGGEREQUIPREPLACE_B__0_OFFSET UNITYSDK_OFFSET(0x17D8B020)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleEquipReplaceWidgetController___c__DisplayClass125_0_TypeDefinitionIndex = 40807;

	class UIRoleEquipReplaceWidgetController___c__DisplayClass125_0 : public ::System::Object
	{
	public:
		::System::Action* replaceAction; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS125_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoTriggerEquipReplace_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS125_0__DOTRIGGEREQUIPREPLACE_B__0_OFFSET))(this);
		}
	};
}
