#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNFADNMADCK.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIVideoshopForgeWidgetChildWindowController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIVIDEOSHOPFORGEWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS115_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17197F80)
#define MOLEMOLE_UIVIDEOSHOPFORGEWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS115_0__UPDATECOSTDISPLAY_B__0_OFFSET UNITYSDK_OFFSET(0x17197F90)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoshopForgeWidgetChildWindowController___c__DisplayClass115_0_TypeDefinitionIndex = 66887;

	class UIVideoshopForgeWidgetChildWindowController___c__DisplayClass115_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::HNFADNMADCK>* cost; // 0x10
		::MoleMole::UIVideoshopForgeWidgetChildWindowController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPFORGEWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS115_0__CTOR_OFFSET))(this);
		}

		::System::Void _UpdateCostDisplay_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPFORGEWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS115_0__UPDATECOSTDISPLAY_B__0_OFFSET))(this);
		}
	};
}
