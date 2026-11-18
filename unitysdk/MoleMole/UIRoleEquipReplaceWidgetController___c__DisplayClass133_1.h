#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CIAPNCCFHAK;
namespace MoleMole { class UIGeneralTipsPopWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS133_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15D4CCC0)
#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS133_1__TRYSHOWPROFRESSIONLACKWEAPONTIP_G__SETGENERALCTRL_4_OFFSET UNITYSDK_OFFSET(0x15D4CCD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleEquipReplaceWidgetController___c__DisplayClass133_1_TypeDefinitionIndex = 40800;

	template <typename T>
	class UIRoleEquipReplaceWidgetController___c__DisplayClass133_1 : public ::System::Object
	{
	public:
		::System::Action* closeCb; // 0x10
		::CIAPNCCFHAK* generalTip; // 0x18
		::System::Action* okBtnCb; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS133_1__CTOR_OFFSET))(this);
		}

		::System::Void _TryShowProfressionLackWeaponTip_g__SetGeneralCtrl_4(::MoleMole::UIGeneralTipsPopWindowController* ctrl)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralTipsPopWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS133_1__TRYSHOWPROFRESSIONLACKWEAPONTIP_G__SETGENERALCTRL_4_OFFSET))(this, ctrl);
		}
	};
}
