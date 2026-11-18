#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainCityMiniMenuWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER___C__DISPLAYCLASS49_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15D0CE90)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER___C__DISPLAYCLASS49_0__SETFOLDERSTATE_B__0_OFFSET UNITYSDK_OFFSET(0x15D0CEA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityMiniMenuWidgetController___c__DisplayClass49_0_TypeDefinitionIndex = 68967;

	class UIMainCityMiniMenuWidgetController___c__DisplayClass49_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::MoleMole::UIMainCityMiniMenuWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER___C__DISPLAYCLASS49_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetFolderState_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER___C__DISPLAYCLASS49_0__SETFOLDERSTATE_B__0_OFFSET))(this);
		}
	};
}
