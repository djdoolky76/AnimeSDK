#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIZenkovDelegateBoardPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS122_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18C13C00)
#define MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS122_0__ONLAYOUTPLATFORMCHANGED_B__0_OFFSET UNITYSDK_OFFSET(0x18C13C10)
#define MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS122_0__ONLAYOUTPLATFORMCHANGED_B__1_OFFSET UNITYSDK_OFFSET(0x18C13CA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovDelegateBoardPageController___c__DisplayClass122_0_TypeDefinitionIndex = 51366;

	class UIZenkovDelegateBoardPageController___c__DisplayClass122_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::MoleMole::MonoGamepadNavigatableList* leftListModule; // 0x18
		::MoleMole::UIZenkovDelegateBoardPageController* __4__this; // 0x20
		::MonoUITableScrollV2* sv; // 0x28
		::System::Int32 index; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS122_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnLayoutPlatformChanged_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS122_0__ONLAYOUTPLATFORMCHANGED_B__0_OFFSET))(this);
		}

		::System::Void _OnLayoutPlatformChanged_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS122_0__ONLAYOUTPLATFORMCHANGED_B__1_OFFSET))(this);
		}
	};
}
