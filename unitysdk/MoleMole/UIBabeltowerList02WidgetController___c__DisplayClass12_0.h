#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GCPCJLCCGDG.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBabeltowerList02WidgetController; }

#define MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A148140)
#define MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER___C__DISPLAYCLASS12_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x1A148150)
#define MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER___C__DISPLAYCLASS12_0__REFRESHVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x1A1481C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerList02WidgetController___c__DisplayClass12_0_TypeDefinitionIndex = 89849;

	class UIBabeltowerList02WidgetController___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBabeltowerList02WidgetController* __4__this; // 0x10
		::System::Int32 index; // 0x18
		::GCPCJLCCGDG data; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER___C__DISPLAYCLASS12_0__REFRESHVIEW_B__0_OFFSET))(this);
		}

		::System::Void _RefreshView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER___C__DISPLAYCLASS12_0__REFRESHVIEW_B__1_OFFSET))(this);
		}
	};
}
