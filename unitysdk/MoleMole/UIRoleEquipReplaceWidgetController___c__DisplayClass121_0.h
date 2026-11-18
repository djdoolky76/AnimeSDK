#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DMCCPINHAGM;
namespace MoleMole { class UIRoleEquipReplaceWidgetController; }

#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS121_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17D8AF50)
#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS121_0__ONCLICKWEAPONREPLACEBTN_B__0_OFFSET UNITYSDK_OFFSET(0x17D8AF60)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleEquipReplaceWidgetController___c__DisplayClass121_0_TypeDefinitionIndex = 40813;

	class UIRoleEquipReplaceWidgetController___c__DisplayClass121_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRoleEquipReplaceWidgetController* __4__this; // 0x10
		::DMCCPINHAGM* realItemData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS121_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickWeaponReplaceBtn_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS121_0__ONCLICKWEAPONREPLACEBTN_B__0_OFFSET))(this);
		}
	};
}
