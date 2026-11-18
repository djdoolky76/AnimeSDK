#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoGamepadNestedListDelegate; }

#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___C__DISPLAYCLASS107_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13EAC890)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___C__DISPLAYCLASS107_1__ONBAGTABSWITCHEDBYINPUT_B__0_OFFSET UNITYSDK_OFFSET(0x13EAC8A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovPreparePageController___c__DisplayClass107_1_TypeDefinitionIndex = 76823;

	template <typename T>
	class UIZenkovPreparePageController___c__DisplayClass107_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::MoleMole::MonoGamepadNestedListDelegate* bagPanelList; // 0x18
		::System::Int32 itemIndex; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___C__DISPLAYCLASS107_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnBagTabSwitchedByInput_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___C__DISPLAYCLASS107_1__ONBAGTABSWITCHEDBYINPUT_B__0_OFFSET))(this);
		}
	};
}
