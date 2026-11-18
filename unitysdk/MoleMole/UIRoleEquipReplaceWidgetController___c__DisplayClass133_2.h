#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralTipsPopWindowController; }

#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS133_2__CTOR_OFFSET UNITYSDK_OFFSET(0x15D4CED0)
#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS133_2__TRYSHOWPROFRESSIONLACKWEAPONTIP_B__5_OFFSET UNITYSDK_OFFSET(0x15D4CEE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleEquipReplaceWidgetController___c__DisplayClass133_2_TypeDefinitionIndex = 40810;

	template <typename T1, typename T2>
	class UIRoleEquipReplaceWidgetController___c__DisplayClass133_2 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralTipsPopWindowController* ctrl; // 0x10
		::System::Object* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS133_2__CTOR_OFFSET))(this);
		}

		::System::Void _TryShowProfressionLackWeaponTip_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS133_2__TRYSHOWPROFRESSIONLACKWEAPONTIP_B__5_OFFSET))(this);
		}
	};
}
