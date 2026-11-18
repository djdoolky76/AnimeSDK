#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GCPCJLCCGDG.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBabeltowerList03WidgetController; }

#define MOLEMOLE_UIBABELTOWERLIST03WIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19652600)
#define MOLEMOLE_UIBABELTOWERLIST03WIDGETCONTROLLER___C__DISPLAYCLASS13_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x19652610)
#define MOLEMOLE_UIBABELTOWERLIST03WIDGETCONTROLLER___C__DISPLAYCLASS13_0__REFRESHVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x19652680)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerList03WidgetController___c__DisplayClass13_0_TypeDefinitionIndex = 91228;

	class UIBabeltowerList03WidgetController___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBabeltowerList03WidgetController* __4__this; // 0x10
		::System::Int32 index; // 0x18
		::GCPCJLCCGDG data; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLIST03WIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLIST03WIDGETCONTROLLER___C__DISPLAYCLASS13_0__REFRESHVIEW_B__0_OFFSET))(this);
		}

		::System::Void _RefreshView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLIST03WIDGETCONTROLLER___C__DISPLAYCLASS13_0__REFRESHVIEW_B__1_OFFSET))(this);
		}
	};
}
